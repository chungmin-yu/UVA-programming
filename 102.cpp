#include<stdio.h> 
#include<iostream>
#include<string>
using namespace std;
//B0 G1 C2
//123 132 213 231 312 321

int main(void){
	long long bin1[3];
	long long bin2[3];
	long long bin3[3];
	while(cin>>bin1[0]>>bin1[1]>>bin1[2]>>bin2[0]>>bin2[1]>>bin2[2]>>bin3[0]>>bin3[1]>>bin3[2]){
		long long total=bin1[0]+bin1[1]+bin1[2]+bin2[0]+bin2[1]+bin2[2]+bin3[0]+bin3[1]+bin3[2];
		long long max=0;		
		max=bin1[1]+bin2[2]+bin3[0];
		string str="GCB";
		if(max<=bin1[1]+bin2[0]+bin3[2]){
			max=bin1[1]+bin2[0]+bin3[2];
			str="GBC";
		}		
		if(max<=bin1[2]+bin2[1]+bin3[0]){
			max=bin1[2]+bin2[1]+bin3[0];
			str="CGB";
		}	
		if(max<=bin1[2]+bin2[0]+bin3[1]){
			max=bin1[2]+bin2[0]+bin3[1];
			str="CBG";
		}	
		if(max<=bin1[0]+bin2[1]+bin3[2]){
			max=bin1[0]+bin2[1]+bin3[2];
			str="BGC";
		}	
		if(max<=bin1[0]+bin2[2]+bin3[1]){
			max=bin1[0]+bin2[2]+bin3[1];
			str="BCG";
		}
		cout<<str<<" "<<total-max<<endl;
	}
}
