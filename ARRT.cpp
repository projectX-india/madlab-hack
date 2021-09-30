#include<bits/stdc++.h>
using namespace std;
vector<long long int> call(vector<long long int>&A, vector<long long int>&B, int ind){
	vector<long long int> C;
	for(long long int i=ind;i<B.size();i++){
		C.push_back(B[i]);
	}
	for(long long int i=0;i<ind;i++){
		C.push_back(B[i]);
	}
	vector<long long int> ans;
	for(long long int i=0;i<A.size();i++){
		ans.push_back((A[i]+C[i])%(A.size()));
	}
	return ans;
}

int main(){
	long long int t;
	cin>>t;
	vector<vector<long long int> > ans;
	for(long long int i=0;i<t;i++){
		long long int n;
		cin>>n;
		vector<long long int> A;
		vector<long long int> B;
		for(long long int j=0;j<n;j++){
			long long int a;
			cin>>a;
			A.push_back(a);
		}
		long long int v = A[0];
		vector<long long int> index;
		index.push_back(-1);
		long long int s = INT_MAX;
		for(long long int j=0;j<n;j++){
			long long int b;
			cin>>b;
			B.push_back(b);
			if((v+b)%n<s){
				s = (v+b)%n;
				index.clear();
				index.push_back(j);
			}
			else if((v+b)%n==s){
				index.push_back(j);
			}
		}
		for(long long int j=1;j<n;j++){
			long long int x = A[j];
			if(index.size()>1){
				vector<long long int> neww;
				long long int s = INT_MAX;
				for(long long int k=0;k<index.size();k++){
					if(index[k]+j<n){
						if((x+B[index[k]+j])%n<s){
							s = (x+B[index[k]+j])%n;
							neww.clear();
							neww.push_back(index[k]);
						}
						else if((x+B[index[k]+j])%n==s){
							neww.push_back(index[k]);
						}
					}
					else if(index[k]+j>=n){
						long long int c = index[k]+j-n;
						if((x+B[c])%n<s){
							s = (x+B[c])%n;
							neww.clear();
							neww.push_back(index[k]);
						}
						else if((x+B[c])%n==s){
							neww.push_back(index[k]);
						}
					}
				}
				index.clear();
				for(long long int k=0;k<neww.size();k++){
					index.push_back(neww[k]);
				}
				neww.clear();
			}
		}
			vector<long long int> final = call(A,B,index[0]);
			ans.push_back(final);
	}
	for(long long int i=0;i<t;i++){
		for(long long int j=0;j<ans[i].size();j++){
			cout<<ans[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
