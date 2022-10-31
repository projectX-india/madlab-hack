#include<bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int sum=0;
		bool flag=true;
		char a[1000];
		cin>>a;
		for(int i=0;i<n/2;i++){
             if(a[i]!=a[n-1-i])
			 {
			 	flag=false;
			 	break;
						 }			
		}
		for(int i=0;i<n;i++){
			if(a[i]=='0')sum++;
		}
		if(flag){
			if(sum%2==0||sum==1)cout<<"BOB"<<endl;
			    else cout<<"ALICE"<<endl;
		}
		else{
		if(n%2==1&&sum==2&&a[n/2]=='0'){cout<<"DRAW"<<endl;}
		else cout<<"ALICE"<<endl;}
	}
	return 0;
} 
