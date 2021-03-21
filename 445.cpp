#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;

int main(void){
	string s;
	getline(cin,s);
	while(!cin.eof()){		
		int digit=0;
		for(int i=0;i<s.size();i++){
			if('0'<=s[i]&&s[i]<='9'){
				digit+=(int)(s[i]-'0');		
				//cout<<digit<<endl;		
				continue;
			}else if('A'<=s[i]&&s[i]<='Z'){
				for(int j=0;j<digit;j++){
					cout<<s[i];				
				}
			}else if(s[i]=='*'){
				for(int j=0;j<digit;j++){
					cout<<s[i];					
				}
			}else if(s[i]=='b'){
				for(int j=0;j<digit;j++){
					cout<<' ';					
				}
			}else if(s[i]=='!'){
				cout<<endl;
			}else if(s[i]=='\n'){
				cout<<endl;
			}
			
			digit=0;
		}
		cout<<endl;
		getline(cin,s);
	}
} 
