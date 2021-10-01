#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
	// your code goes here
	int t;  cin>>t;
	while(t-- > 0){
	    int n,d,h;  cin>>n>>d>>h;
	    int* arr = new int[n];
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	    }
        int current = 0, tag=0;
	    for(int i=0; i<n; i++){
	        if(arr[i] == 0){
	            current -= d;
	            if(current < 0){
	                current = 0;
	            }
	            
	        }
	        else{
	           current += arr[i];
	        }
	        
	        if(h < current){
	            tag = 1;
	            break;
	        }
	    }
	    
	    if(tag == 1){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
