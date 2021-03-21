#include<iostream>
#include<stdio.h>
using namespace std;


int main(void){
	int p2=1, p3=1, p5=1, p7=1;
	int num[5843]={1};
	num[0]=0;
	num[1]=1;
	int min=2;	
	for(int i=2;i<5843;i++){
		while(num[p2]*2<=num[i-1])
			p2++;
		while(num[p3]*3<=num[i-1])
			p3++;
		while(num[p5]*5<=num[i-1])
			p5++;
		while(num[p7]*7<=num[i-1])
			p7++;
		min=num[p2]*2;
		if(min>num[p3]*3)
			min=num[p3]*3;
		if(min>num[p5]*5)
			min=num[p5]*5;
		if(min>num[p7]*7)
			min=num[p7]*7;
		
		num[i]=min;		
	} 
	
	int n;
	while(cin>>n){
		if(n==0){
			break;
		}
		if(n%10==1&&n%100!=11){
			cout<<"The "<<n<<"st humble number is "<<num[n]<<"."<<endl;
		}else if(n%10==2&&n%100!=12){
			cout<<"The "<<n<<"nd humble number is "<<num[n]<<"."<<endl;
		}else if(n%10==3&&n%100!=13){
			cout<<"The "<<n<<"rd humble number is "<<num[n]<<"."<<endl;
		}else{
			cout<<"The "<<n<<"th humble number is "<<num[n]<<"."<<endl;
		}
	}
} 
