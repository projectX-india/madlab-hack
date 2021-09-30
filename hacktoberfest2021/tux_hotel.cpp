#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c;
    cin>>n>>c;
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        cin>>b[i];
    }
    sort(a,a+n);
    sort(b,b+n);
    int i=0,j=0,room=0;
    while(i<n && j<n)
    {
        if(a[i]<b[j])
        {
            room++;
            j++;
        }
        else
        {
            room--;
            j++;      }
    }
    if(room>c)
        cout<<"0"<<endl;
    else
    cout<<"1"<<endl;
    return 0;
}