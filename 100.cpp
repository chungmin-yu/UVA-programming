#include<iostream>
#include<stdio.h>
using namespace std;

long long lenth(long long j){
	long long count =0;
	while(j!=1){
	if(j%2==1){
		j=3*j+1;
		count++;
	}else{
		j = j/2;
		count++;
		}
	}
	return count;
}

int main(void){
	
	long long num1, num2, max, min;
	while(scanf("%lld%lld",&num1,&num2)==2){
		if(num1>num2){
			max=num1;
			min=num2;
		}else{
			min=num1;
			max=num2;
		}
		long long a=0;
		for(long long i=min; i<=max; i++){
			long long round=lenth(i)+1;
			if(round>a){
				a=round;
			}
		}
		
		printf("%lld %lld %lld\n", num1, num2, a);
	}
	return 0;
	

}
