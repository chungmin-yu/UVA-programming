#include<stdio.h>
#include<iostream>
using namespace std;
// 1 4 2 1
int main(void){
	int L, H;
	while(cin>>L>>H){
		if(L==0&&H==0){
			break;
		}
		if(L>H){
			int temp=L;
			L=H;
			H=temp;
		}
		
		int count;
		int S=0;
		int V=0;
		for(int i=L;i<=H;i++){
			count=0;
			long long k=i;
			if(i==1){
				count=3;
			}
			while(k!=1){
				if(k%2==1){
					k=3*k+1;
					count++;
				}else if(k%2==0){
					k=k/2;
					count++;
				}
			}
			if(S<count){
				V=i;
				S=count;
			}			
		}
		cout<<"Between "<<L<<" and "<<H<<", "<<V<<" generates the longest sequence of "<<S<<" values."<<endl;
	}
} 
