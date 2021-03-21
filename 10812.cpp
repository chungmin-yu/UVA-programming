#include<stdio.h>
#include<iostream>
using namespace std;
// 5 8 13 3 6 1
int main(void){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		long long s,d;
		cin>>s>>d;
		if(s%2==0&d%2==0){
			long long s1=s/2;
			long long d1=d/2;
			if((s1-d1)<0){
				cout<<"impossible"<<endl;
			}else{
				cout<<s1+d1<<" "<<s1-d1<<endl;
			}
		}else if(s%2==1&&d%2==1){
			long long s2=(s-1)/2;
			long long d2=(d-1)/2;
			if((s2-d2)<0){
				cout<<"impossible"<<endl;
			}else{
				cout<<s2+d2+1<<" "<<s2-d2<<endl;
			}
		}else{
			cout<<"impossible"<<endl;
		}
		
	}
} 
