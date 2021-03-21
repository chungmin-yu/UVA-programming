#include<stdio.h>
#include<iostream>

using namespace std;
int sum[10000];
int main(void){
	int num, k, a;
	cin>>a;
	for(int j=1;j<=a;j++){
		cin>>num;
		sum[0]=num;
		for(int i=1; i<10000; i++){
			sum[i]=0;
		}
		k=1;
		int digits[10];
		while(1){
		
		for(int i=0; i<10; i++){
			digits[i]=0;
		}
		for(int i=0; i<10;i++){
				digits[i]=num%10;
				num=num/10;
				if(num==0){
					break;
				}
			}
		for(int i=0; i<10; i++){
			sum[k]=sum[k]+digits[i]*digits[i];
			//cout<<k<<" "<<sum[k]<<endl;
		}
		//cout<<sum[k]<<endl;
		if(sum[k]==1){
			cout<<"Case #"<<j<<": "<<sum[0]<<" is a Happy number."<<endl;
			break;
		}
		
		bool b=false;
		for(int i=0; i<k; i++){
			if(sum[i]==sum[k]){
				cout<<"Case #"<<j<<": "<<sum[0]<<" is an Unhappy number."<<endl;
				b=true;
				break;
			}
		}
		if(b){
			break;
		}	
		num=sum[k];
		k++;
			
		}
		
	}
}
