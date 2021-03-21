#include<iostream>

using namespace std;

int main(){

	int n;
	cin>>n;

	for(int i=0;i<n;i++){
		int days;
		cin>>days;
		int pn;
		cin>>pn;

		int p[pn][days],r[pn];

		for(int i=0;i<pn;i++){
			cin>>r[i];
		}
		/*for(int i=0;i<pn;i++){
			for(int j=0;j<days;j++){
				p[i][j]=0;
			}
		}*/

		int temp[days];
		for(int i=0;i<days;i++){
			temp[i]=0;
		}

		for(int i=0;i<pn;i++){
			for(int rest=r[i]-1;rest<days;rest+=r[i]){
				temp[rest]++;
			}
		}

		int t=0;
		for(int j=0;j<days;j++){
			if(temp[j]>=1 &&(j%7==5 || j%7==6)){
				temp[j]=0;
			}
			else if(temp[j]>=1){
				t++;	
			}
		}

		cout<<t<<endl;

	}

	return 0;
}
