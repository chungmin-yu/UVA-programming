#include<iostream>
#include<stdio.h>
#include<cmath>
#include<vector>
using namespace std;

int main(void){
	int k;
	int n;
	cin>>k;
	for(int i=0;i<k;i++){
		cin>>n;
		if(n==0){
			cout<<"0"<<endl;
			continue;
		}
		if(n==1){
			cout<<"1"<<endl;
			continue;
		}		
		int nums[11]={0};
		int t=0;
		for(int j=9;j>1;j--){			
			while(1){
				if(n%j==0){
					n/=j;
					nums[t]=j;
					t++;
				}				
				else{
					break;
				}	
			}
			
		}
		t--;
		if(n>=10){
			cout<<"-1"<<endl;
		}else{
			
			for(int j=t;t>=0;t--){
				cout<<nums[t];
			}
			cout<<endl;
			
		}
		
		
	}
	
} 
