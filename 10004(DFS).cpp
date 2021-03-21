#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int n,l;
int G[201][201];
int color[201], visit[201];

bool DFS(int a){
	for(int i=0;i<n;i++){
		if(G[a][i]){
			if(!visit[i]){
				visit[i]=1;
				color[i]=(!color[a]);
				DFS(i);
			}else if(color[a]==color[i]){
				return false;
			}
		}
	}
	return true;
}



int main(void){
	while(cin>>n>>l){
		memset(color,0,sizeof(color));
		memset(visit,0,sizeof(visit));
		memset(G,0,sizeof(G));
		if(n==0){
			break;
		}
		int x, y;
		for(int i=0;i<l;i++){
			cin>>x>>y;
			G[x][y]=G[y][x]=1;			
		}
		visit[0]=1;
		color[0]=1;
		if(DFS(0)){
			cout<<"BICOLORABLE."<<endl;
		}else{
			cout<<"NOT BICOLORABLE."<<endl;
		}
			
	}
} 
