#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
#include<string.h>

int main()
{
    //write code here
    // I could not come up with how to use the Vectors in a simple problem so here's the Vector related problem from Hackerrank :p
    // Variable Sized Arrays | HackerRank
    
    vector<vector<int> > vect;
    int n,q,size,val;
    cin >> n >> q;
    for(int i = 0;i<n;i++){
        cin >> size;
        vector<int> subVect;
        for(int j = 0;j<size;j++){
            cin >> val;
            subVect.push_back(val);
        }
        vect.push_back(subVect);
        subVect.clear();
    }
    int q1,q2;
    for(int i = 1;i<=q;i++){
        cin >> q1 >> q2;
        cout << vect[q1][q2]<<endl;
    }
    
    
    return 0;
}
