#include<iostream>
#include<stdio.h>
#include<iomanip>
using namespace std;

int main(void){
	int n;
	while(cin>>n){
		if(n<3){
			break;
		}
		int x[n];
		int y[n];
		float totalx=0,totaly=0;
		for(int i=0;i<n;i++){
			cin>>x[i];
			totalx+=x[i];
			cin>>y[i];
			totaly+=y[i];
		}
		totalx=totalx/n;
		totaly=totaly/n;
		cout<<fixed<<setprecision(3)<<totalx<<" "<<totaly<<endl;
	}
} 
