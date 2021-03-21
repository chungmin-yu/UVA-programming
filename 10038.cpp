#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;

int a[3000], b[3000];
int main(void){
	int n, k;	
	while(cin >> n){
		bool jolly = true;
		for(int i=0; i<3000; i++){
			b[i]=0;
		}
		for(int i=0; i<3000; i++){
			a[i]=0;
		}
		cin>>a[0];
		for(int i=1; i<n; i++){
			cin>>a[i];
			k = a[i]-a[i-1];
			if(k<0){
				k =-1*k;
			}
			b[k]=1;
		}
		for(int i =1; i<=n-1; i++){
			if(b[i]==0){
				jolly = false;
				break;
			}
		}
		if (jolly == true){
		cout << "Jolly"<<endl;
		}else{
		cout << "Not jolly"<<endl;
		}    
	} 
	return 0;
}
