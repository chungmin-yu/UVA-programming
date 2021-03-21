#include<iostream>
#include<stdio.h>
#include<cmath>

using namespace std;

int main(void){
	int m, n, t;
	while(cin>>m>>n>>t){
		int a,b,temp;
		int c=0,d=0, e=10000;
		a=t/m;
		b=t/n;
		if(a>b){
			int x[b+1];
			int y[b+1];
			int k[b+1];
			for(int i=0; i<=b;i++){
				temp=t-i*n;
				x[i]=temp/m;
				y[i]=i;
				k[i]=temp%m;
			}
			for(int i=0; i<=b;i++){
				if(k[i]==0){
					if((x[i]+y[i])>c){
						c=(x[i]+y[i]);
					}
				}else if(k[i]<e){
					d=(x[i]+y[i]);
					e=k[i];
				}
			}
			if(c!=0){
				cout<<c<<endl;
			}else{
				cout<<d<<" "<<e<<endl;
			}
		}else{
			int x[a+1];
			int y[a+1];
			int k[a+1];
			for(int i=0; i<=a;i++){
				temp=t-i*m;
				y[i]=temp/n;
				x[i]=i;
				k[i]=temp%n;
				//cout<<x[i]<<" "<<y[i]<<" "<<k[i]<<endl;
			}
			for(int i=0; i<=a;i++){
				if(k[i]==0){
					if((x[i]+y[i])>c){
						c=(x[i]+y[i]);
					}
				}else if(k[i]<e){
					d=(x[i]+y[i]);
					e=k[i];
				}
			}
			if(c!=0){
				cout<<c<<endl;
			}else{
				cout<<d<<" "<<e<<endl;
			}
		}
	}
}
