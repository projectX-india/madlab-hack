#include <bits/stdc++.h>
#include <iostream.h>
using namespace std;
#define ll long long int

bool allequal(string s)
{
    for(ll i=1;i<s.length();i++)
    {
        if(s[i]!=s[i-1])
        return false;
    }
    return true;
}

int main()
{
	ll t;
	cin>>t;
	for(ll k=1;k<=t;k++)
	{
	    string s;
	    cin>>s;
	    if(s.length() ==1)
	    cout<<"Case #"<<k<<": "<<0<<endl;
	    else if(allequal(s))
	    {
	        cout<<"Case #"<<k<<": "<<0<<endl;
	    }
	    else
	    {
	        unordered_map<char,ll>m;
	        ll i,n=s.length(),pos=-1;
	        
	        for(i=0;i<n;i++)
	        {
	            if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
	            {
	                pos=i;
	                break;
	            }
	        }
	        
	        ll count=0;
	        if(pos==-1)
	        {
	            count=n;
	        }
	        else
	        {
    	        char tar=s[pos];
    	        
    	        for(i=0;i<n;i++)
    	        {
    	            if((s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' ) && s[i]!=tar)
    	            {
    	                count+=2;
    	            }
    	            else if(s[i]!='A' && s[i]!='E' && s[i]!='I' && s[i]!='O' && s[i]!='U')
    	            {
    	                count++;
    	            }
    	        }
	        }
	        
	        cout<<"Case #"<<k<<": "<<count<<endl;
	    }
    }
	return 0;
}



