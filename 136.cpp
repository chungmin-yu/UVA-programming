#include<stdio.h>
#include<iostream>
using namespace std;

int main(void){
	int p2=1, p3=1, p5=1;
	int num[1501]={1};
	num[0]=1;
	num[1]=1;	
	for(int i=2;i<1501;i++){
		while(num[p2]*2<=num[i-1])
			p2++;
		while(num[p3]*3<=num[i-1])
			p3++;
		while(num[p5]*5<=num[i-1]) 
			p5++;
		int number=num[p2]*2;
		if(number>num[p3]*3)
			number=num[p3]*3;
		if(number>num[p5]*5)
			number=num[p5]*5;		
		num[i]=number;		
	}
	cout<<"The 1500'th ugly number is "<<num[1500]<<"."<<endl;
} 
