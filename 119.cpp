#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
using namespace std;

int main(void){
	int n;
	bool blank=false;
	while(cin>>n){
		if(blank)
			cout<<endl;
		string name[n];
		int gross[n];
		memset(gross,0,sizeof(gross));
		for(int i=0;i<n;i++){
			cin>>name[i];
		}
		string giver;
		string receiver;
		int money, num;
		int dis=0;
		for(int k=0;k<n;k++){
			cin>>giver>>money>>num;
			if(money!=0){
				if(num==0){
					continue;
				}
				for(int i=0;i<n;i++){
					if(giver==name[i]){
						dis=money/num;
						gross[i]-=dis*num;
						//cout<<dis;
						//cout<<name[i]<<" "<<gross[i]<<endl;
						break;
					}				
				}
				for(int i=0;i<num;i++){
					cin>>receiver;
					for(int j=0;j<n;j++){
						if(receiver==name[j]){
							gross[j]+=dis;
							//cout<<name[j]<<" "<<gross[j]<<endl;
							break;
						}
						
						
					}
				}
			}
			if(money==0){
				for(int i=0;i<num;i++){
					cin>>receiver;
				}
			}
			
		}
		for(int i=0;i<n;i++){
			cout<<name[i]<<" "<<gross[i]<<endl;
		}
		blank=true;
	}
	
	
} 
