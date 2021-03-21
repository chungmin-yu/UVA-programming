#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;
//43 19 2(5 19) (19 5) 3(4 5) (5 4) 1(1 4) (4 1) 4(0 1) (1 0)
int main(void){
	int up, down;
	int b[20];
	while(cin>>up>>down){
		memset(b,0,sizeof(b));
		int a=up;
		int c=down;
		int n=0;
		for(int i=0;;i++){
			b[i]=a/c;
			a=a-b[i]*c;
			int temp=a;    //change
			a=c;
			c=temp;
			
			//cout<<a<<" "<<c<<endl;
			if(c==0){
				n=i;
				break;
				
			}
					
			
		}
		cout<<"["<<b[0]<<";";
		for(int i=1;i<n;i++){
			cout<<b[i]<<",";
		}
		cout<<b[n]<<"]"<<endl;
	}
	
} 
