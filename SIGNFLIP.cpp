#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	// write your code goes here
	int t;
	cin>>t;
	
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    
	    int f=0;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    
	    sort(arr,arr+n);
	    
	   int i=0;
	    while(i<k){
	        if(arr[i]<0)
	        arr[i]=arr[i]*-1;
	        i++;
	    }
	   
	    
	    
	    int sum=0;
	    for(int i=0;i<n;i++){
	        if(arr[i]>0){
	            sum+=arr[i];
	        }
	        
	       
	    }
	    
	    cout<<sum<<endl;
	}
	return 0;
}
