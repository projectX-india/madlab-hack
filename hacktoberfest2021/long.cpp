#include<iostream>
#include<string>
using namespace std;

int main(){
	
	int n=0;
	cin>>n;
	
	
	for(int i=0 ;i<n;i++){
		
		int t;
		cin>>t;
		string s;
		cin>>s;
		pair<int,int> ans{-1,-1};
		for(int i =1 ; i<t ;i++){
			
			if(s[i]!=s[i-1])
				ans={i,i+1};
			
		}
		cout<<ans.first<<" "<<ans.second<<endl;
	}

	return 0;
}
