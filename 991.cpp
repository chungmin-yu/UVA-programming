#include<stdio.h>
#include<iostream>
using namespace std;

int main(void){
	int f[21];
	int n;	
	f[0]=f[2]=1;
	for(int i=2;i<=10;i++){
		
		int temp=0;
		for(int j=0;j<i;j++){
			temp+=f[2*j]*f[2*i-2*j-2];
		}
		
		f[2*i]=temp;
	}
	while(cin>>n){
		cout<<f[2*n]<<endl;
	}
	
	
	
}
