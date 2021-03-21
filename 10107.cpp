#include<stdio.h>
#include<iostream> 
using namespace std;

int main(void){
	int nums[10000]={0};
	int temp;	
	cin>>temp;
	nums[0]=temp;
	cout<<nums[0]<<endl;
	int n=1;
	while(cin>>temp){		
		for(int i=0;i<n;i++){
			if(temp>nums[i]){
				for(int j=n-1;j>=i;j--){
					nums[j+1]=nums[j];
				}
				nums[i]=temp;
				break;
			}
		}
		n++;

		if(n%2==1){
			cout<<nums[(n-1)/2]<<endl;
		}
		if(n%2==0){
			cout<<(nums[n/2]+nums[(n/2)-1])/2<<endl;
		}
		
		
	}
	return 0;
}

