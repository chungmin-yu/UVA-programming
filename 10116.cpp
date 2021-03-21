#include<iostream>
#include<cstdio>

using namespace std;

int main(){

 int c,r,s;

 while(cin>>c>>r>>s){
  int flag=1;
  if(c==0 && r==0 && s==0){
   break;
  }
  char a[c][r];


  for(int j=0;j<c;j++){
   for(int k=0;k<r;k++){
    cin>>a[j][k];
   }
  }

  int i=0,times=0,again=0;
  s=s-1;

  while(i>=0 && i<c && s>=0 && s<r){

   if(a[i][s]=='N'){
    times++;
    a[i][s]='n';
    i--;
   }
   if(a[i][s]=='S'){
    times++;
    a[i][s]='s';
    i++;
   }
   if(a[i][s]=='E'){
    times++;
    a[i][s]='e';
    s++;
   }
   if(a[i][s]=='W'){
    times++;
    a[i][s]='w';
    s--;
   } 

  

   if(a[i][s]=='n'){
    again++;
    a[i][s]='X';
    i--;
   }
   if(a[i][s]=='s'){
    again++;
    a[i][s]='X';
    i++;
   }
   if(a[i][s]=='e'){
    again++;
    a[i][s]='X';
    s++;
   }
   if(a[i][s]=='w'){
    again++;
    a[i][s]='X';
    s--;
   }


   if(a[i][s]=='X'){
    cout<<times-again<<" step(s) before a loop of "<<again<<" step(s)"<<endl;
    flag=0;
    break;
   }
  }
  
  if(flag==1){
   cout<<times<<" step(s) to exit"<<endl;
  }

 }
 
 return 0;
}
