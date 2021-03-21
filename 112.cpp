#include<stdio.h>
#include<iostream>
using namespace std;

enum{
	leftBracket, rightBracket, number, match, notMatch, emptyTree
};
static int num;
int gettoken(){
	char c = getchar();        
	while(c==' '||c=='\n'){
		c=getchar();
	}
	if(c=='('){
		return leftBracket;
	}
	else if(c==')'){
		return rightBracket;
	}
	
	num=0;
	if((c>='0'&&c<='9')||c=='-'){
		int sign =1;
		if(c=='-'){
			sign = -1;
			c=getchar();
		}
		for(;c>='0'&&c<='9';c=getchar()){
			num=num*10+(c-'0');			
		}
		num=num*sign;
		ungetc(c,stdin);
		return number;
	}
	return 0;	
}

int traversal(int sum, int target){
	int token;
	gettoken();                           //left-bracket
	token=gettoken();                     //get number
	if(token==rightBracket){
		return emptyTree;
	}
	else{
		sum+=num;
	}
	int lc=traversal(sum,target);
	int rc=traversal(sum,target);
	
	gettoken();                           //right-bracket
	
	if(lc==emptyTree&&rc==emptyTree){     //leaf
		if(sum==target){
			return match;
		}
	}
	if(lc==match||rc==match){             //return result upward
		return match;
	}
	return notMatch;
	
}


int main(void){
	int target;	
	while(cin>>target){
		if(traversal(0,target)==match){
			cout<<"yes"<<endl;
		}else{
			cout<<"no"<<endl;
		}
	}
} 
