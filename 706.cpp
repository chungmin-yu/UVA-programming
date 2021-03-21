#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;

void print(int,int,int*);
bool sample[10][7]={
	{1,1,1,0,1,1,1},//0
	{0,0,0,0,0,1,1},//1
	{0,1,1,1,1,1,0},//2
	{0,0,1,1,1,1,1},//3
	{1,0,0,1,0,1,1},//4
	{1,0,1,1,1,0,1},//5
	{1,1,1,1,1,0,1},//6
	{0,0,1,0,0,1,1},//7
	{1,1,1,1,1,1,1},//8
	{1,0,1,1,1,1,1} //9
	};


int main(void){	
	int s;
	while(cin>>s){
		string digits;		
		cin>>digits;				
		if(s==0 && digits=="0"){
			break;
		}
		int num[10];
		int l=0;
		for(int i=0;i<digits.size();i++){
			if(digits[i]>='0'&&digits[i]<='9'){
				num[l]=digits[i]-'0';
				l++;
			}			
		}
		/*for(int i=0;i<l;i++){
			cout<<num[i];
		}*/
		print(l,s,num);
		cout<<endl;
	}
}

void print(int length,int s,int* num){
	for(int i=0;i<2*s+3;i++){
		if(i==0){
			for(int j=0;j<length;j++){
				cout<<" ";                       //left-up
				for(int k=0;k<s;k++){
					if(sample[num[j]][2]){
						cout<<"-";
					}else{
						cout<<" ";
					}					
				}
				cout<<" ";                      //right-up
				if(j<length-1){
					cout<<" ";                  //blank
				}
				
			}
			cout<<endl;
		}
		if(i>0&&i<=s){
			for(int j=0;j<length;j++){
				if(sample[num[j]][0]){
					cout<<"|";
				}else{
					cout<<" ";
				}
				for(int k=0;k<s;k++){
					cout<<" ";					//middle-space
				}
				if(sample[num[j]][5]){
					cout<<"|";
				}else{
					cout<<" "; 
				}
				if(j<length-1){
					cout<<" ";                  //blank
				}
				
			}
			cout<<endl;
		}
		if(i==s+1){
			for(int j=0;j<length;j++){
				cout<<" ";                       //left-middle
				for(int k=0;k<s;k++){
					if(sample[num[j]][3]){
						cout<<"-";
					}else{
						cout<<" ";
					}					
				}
				cout<<" ";                      //right-middle
				if(j<length-1){
					cout<<" ";                  //blank
				}
				
			}
			cout<<endl;
		}
		if(i>(s+1)&&i<=(2*s+1)){
			for(int j=0;j<length;j++){
				if(sample[num[j]][1]){
					cout<<"|";
				}else{
					cout<<" ";
				}
				for(int k=0;k<s;k++){
					cout<<" ";					//middle-space
				}
				if(sample[num[j]][6]){
					cout<<"|";
				}else{
					cout<<" ";
				}
				if(j<length-1){
					cout<<" ";                  //blank
				}
				
			}
			cout<<endl;
		}
		if(i==(2*s+2)){
			for(int j=0;j<length;j++){
				cout<<" ";                       //left-middle
				for(int k=0;k<s;k++){
					if(sample[num[j]][4]){
						cout<<"-";
					}else{
						cout<<" ";
					}					
				}
				cout<<" ";                      //right-middle
				if(j<length-1){
					cout<<" ";                  //blank
				}
				
			}
			cout<<endl;
		}
	}
}
