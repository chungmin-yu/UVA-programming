#include<iostream>
#include<stdio.h>
using namespace std;
/*int money;
	int coin1,coin5,coin10,coin25,coin50;
	while(cin>>money){
		int times=0;		
		int temp1=money;
		coin50=temp1/50;
		int temp2=temp1%50;
		for(int i=coin50;i>=0;i--){
			if(coin50!=i)
				temp2+=50;
			coin25=temp2/25;
			int temp3=temp2%25;
			for(int j=coin25;j>=0;j--){
				if(coin25!=j)
					temp3+=25;
				coin10=temp3/10;
				int temp4=temp3%10;
				for(int k=coin10;k>=0;k--){
					if(coin10!=k)
						temp4+=10;
					//cout<<temp4<<endl;
					coin5=temp4/5;
					int temp5=temp4%5;					
					//cout<<coin5<<endl;
					for(int l=coin5;l>=0;l--){
						times++;
						//cout<<i<<" "<<j<<" "<<k<<" "<<l<<endl;
					}					
				}
			}
		}
		cout<<times<<endl;		
	}*/

int main(void){
	int method[7490]={0};
	int cent[5]={1,5,10,25,50};
	method[0]=1;
	for(int i=0;i<5;i++){
		for(int j=0;j+cent[i]<7490;j++){
			method[j+cent[i]]+=method[j];
		}
	}
	int money;
	while(cin>>money){
		cout<<method[money]<<endl;
	}
	
	
} 
