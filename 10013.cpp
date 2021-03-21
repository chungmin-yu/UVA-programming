#include<stdio.h>
#include<iostream> 
#include<math.h>
#include<memory.h>
using namespace std;

int main(void){
	int n, m;
	cin>>n;
	cin>>m;
	int sum[m];
	memset(sum,0,sizeof(sum));
	int nums[m][2];
	for(int j=0; j<m;j++){
		cin>>nums[j][0]>>nums[j][1];				
	}
	for(int j=m-1; j>0; j--){
		sum[j]=sum[j]+nums[j][0]+nums[j][1];
		if(sum[j]>=10){
			sum[j-1]+=1;
			sum[j]-=10;
		}
	}
	sum[0]=sum[0]+nums[0][0]+nums[0][1];
	for(int j=0;j<m;j++){
			cout<<sum[j];
	}
	cout<<endl;
	
	
	for(int i=1; i<n;i++){
		cin>>m;
		int sum[m];
		memset(sum,0,sizeof(sum));
		int nums[m][2];
		for(int j=0; j<m;j++){
		cin>>nums[j][0]>>nums[j][1];				
		}
		for(int j=m-1; j>0; j--){
			sum[j]=sum[j]+nums[j][0]+nums[j][1];
			if(sum[j]>=10){
				sum[j-1]+=1;
				sum[j]-=10;
			}
		}
		sum[0]=sum[0]+nums[0][0]+nums[0][1];
		cout<<endl;
			
		for(int j=0;j<m;j++){
			cout<<sum[j];
		}		
		cout<<endl;
	}

	return 0;
}
