#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<queue> 
#include<string>
#include<cstring>

using namespace std;

int dis[8][2]={{1,2},{2,1},{-1,2},{-2,1},{1,-2},{2,-1},{-1,-2},{-2,-1}};
int visit[8][8];
struct step{
	int x,y,steps;
};
int bfs(int, int, int, int);

int main(void){
	string str1, str2;
	int x1, y1;
	int x2, y2; 	
	while(cin>>str1>>str2){
		memset(visit,0,sizeof(visit));
		x1=str1[0]-'a';
		y1=str1[1]-'1';
		x2=str2[0]-'a';
		y2=str2[1]-'1';
		int ans = bfs(x1,y1,x2,y2);
		cout<<"To get from "<<str1<<" to "<<str2<<" takes "<<ans<<" knight moves."<<endl;
	}
}

int bfs(int x1,int y1, int x2, int y2){
	int ans=0;
	if(x1==x2&&y1==y2){
		ans=0;
		return ans;
	}
	queue<step> q;
	step s1;
	s1.x=x1;
	s1.y=y1;
	s1.steps=0;
	visit[x1][y1]=1;
	q.push(s1);
	while(!q.empty()){
		step s2;
		//try 8 directions
		for(int i=0;i<8;i++){
			s2.x=q.front().x+dis[i][0];
			s2.y=q.front().y+dis[i][1];
			s2.steps=q.front().steps+1;
			if(visit[s2.x][s2.y]==1||s2.x<0||s2.x>7||s2.y<0||s2.y>7){
				continue;
			}else{
				visit[s2.x][s2.y]=1;
				q.push(s2);
				//cout<<s2.x<<s2.y<<endl;
				if(s2.x==x2&&s2.y==y2){
					break;
				}
			}
		}
		
		if(s2.x==x2&&s2.y==y2){
			ans=s2.steps;
			break;
		}
		q.pop();
	}
	return ans;
}
