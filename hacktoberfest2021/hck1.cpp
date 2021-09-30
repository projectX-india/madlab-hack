#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    int caser=1;
    while(t--){
        int n,m,a,b;
        cin>>n>>m>>a>>b;
        int vert=n;
        int uper=a-vert;
        int niche=b-vert;
        if(uper<m-1 or niche<m-1){
            cout<<"Case #"<<caser<<": Impossible"<<endl;
            caser++;
            continue;
        }
        cout<<"Case #"<<caser<<": Possible"<<endl;
        caser++;
        int mat[n][m];
        for(int i=0;i<n;i++){
            mat[i][m-1]=1;
        }
        for(int i=0;i<m-1;i++){
            mat[0][i]=1;
        }
        for(int i=0;i<m-1;i++){
            mat[n-1][i]=1;
        }
        mat[0][0]=uper-(m-2);
        mat[n-1][0]=niche-(m-2);
        for(int i=1;i<n-1;i++){
            for(int j=0;j<m-1;j++){
                mat[i][j]=1000;
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<mat[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}
