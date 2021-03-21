#include<iostream>
#include<stdio.h>

using namespace std;

int main(void){
	int n, num, lleftx, llefty, urightx, urighty;
	cin>>n;
	for(int i =1; i<=n; i++){
		cin>>num;
		int rec[num][4];
		cin>>rec[0][0]>>rec[0][1]>>rec[0][2]>>rec[0][3];
		lleftx=rec[0][0];
		llefty=rec[0][1];
		urightx=rec[0][2];
		urighty=rec[0][3];
		for(int j=1; j<num; j++){
			cin>>rec[j][0]>>rec[j][1]>>rec[j][2]>>rec[j][3];
			if(rec[j][0]>lleftx){
				lleftx=rec[j][0];
			}
			if(rec[j][1]>llefty){
				llefty=rec[j][1];
			}
			if(rec[j][2]<urightx){
				urightx=rec[j][2];
			}
			if(rec[j][3]<urighty){
				urighty=rec[j][3];
			}
		}
		if((lleftx>=urightx)||(llefty>=urighty)){
			cout<<"Case "<<i<<": 0"<<endl;
		}else{
			cout<<"Case "<<i<<": "<<(urightx-lleftx)*(urighty-llefty)<<endl;
		}
		
	}
	return 0;
}
