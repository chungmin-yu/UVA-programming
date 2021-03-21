#include<stdio.h>
#include<iostream>
using namespace std;

//3 10 5 16 8 4 2 1
int main(void){
	long long A,L;
	int times=1;
	while(cin>>A>>L){
		int terms=1;
		long long a=A;
		if(A<0&&L<0){
			break;
		}
		while(1){
			if(a==1){
				cout<<"Case "<<times<<": A = "<<A<<", limit = "<<L<<", number of terms = "<<terms<<endl;
				break;
			}else if(a%2==0){
				a=a/2;
				terms++;
			}else if(a%2==1){
				a=3*a+1;
				terms++;
				if(a>L){
					terms--;
					cout<<"Case "<<times<<": A = "<<A<<", limit = "<<L<<", number of terms = "<<terms<<endl;
					break;
				}
			}
		}
		times++;
	}
}
