#include<stdio.h>
#include<iostream> 
using namespace std;

int main(void){
	int num;
	while(cin>>num){
		if(num==0){
			break;
		}
		//n!/n!+(n-1)!/(n-2)!+(n-2)!/(n-4)!2!+......
		//(n-i)!/(n-2i)!i!=(n-i)(n-i-1)...../i!
		long long sum=0;		
		for(int i=0;2*i<=num;i++){
			double temp=1;
			long long tmp=num-i;
			for(int j=i;j>=1;j--){
				temp*=tmp;				
				tmp--;				
			}
			//cout<<sum<<endl;
			sum+=temp;
		}
		cout<<sum<<endl;
	}
}
