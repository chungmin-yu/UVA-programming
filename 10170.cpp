#include<stdio.h>
#include<iostream>
using namespace std;

// 1 6: 1 2 2 3 3 3
//3 14:3 3 3 4 4 4 4 5 5 5 5 5 6 6
int main(void){
	long long S,D;
	while(cin>>S>>D){
		long long days=S;
		long long i=1;
		while(days<D){
			days+=(S+i);
			//cout<<i<<" "<<days<<endl;	
			i++;					
		}
		i--;
		cout<<S+i<<endl;
	}
} 
