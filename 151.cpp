#include<stdio.h>
#include<iostream>

using namespace std;

int main(void){
	int n;
	while(cin>>n){
		if(n==0){
			break;
		}
		int p;
		for(int m=1;;m++){
			p=0;
			//1 is the first kill ,so the loop run to n-1
			//following number go backward 1(minus 1)
			for(int i=2;i<n;i++){
				p=(p+m)%i;
			}
			
			if((p+1)==12){
				cout<<m<<endl;
				break;
			}
		}
		
	}
}
