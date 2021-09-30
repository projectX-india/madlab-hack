#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    int count=1;
while(t--){
int n;
cin>>n;
    char mat[n][n];
    set<int>row;
    set<int>col;
   for(int i=0;i<n;i++){
       bool flg=true;
       for(int j=0;j<n;j++){
           char tmp;
           cin>>tmp;
           mat[i][j]=tmp;
           if(tmp=='O')
           flg=false;
       }
       if(flg)
       row.insert(i);
   }
for(int j=0;j<n;j++){
       bool flg=true;
       for(int i=0;i<n;i++){
           if(mat[i][j]=='O')
           flg=false;
       }
       if(flg)
       col.insert(j);
   }


map<int,int>mappy;
set<pair<int,int>>done;
int ans=INT_MAX;
 for(int i=0;i<n;i++){
       if(row.find(i)==row.end())
       continue;
       int dcnt=0;
       for(int j=0;j<n;j++){
           if(mat[i][j]=='.')
           dcnt++;
       }
       mappy[dcnt]++;
       if(dcnt==1){
            for(int uj=0;uj<n;uj++){
           if(mat[i][uj]=='.'){
               done.insert({i,uj});
               break;
           }
         
       }
       }
   }
     for(int j=0;j<n;j++){
       if(col.find(j)==col.end())
       continue;
       int dcnt=0;
       for(int i=0;i<n;i++){
           if(mat[i][j]=='.')
           dcnt++;
       }
       mappy[dcnt]++;
       if(dcnt==1){
            for(int uj=0;uj<n;uj++){
           if(mat[uj][j]=='.'){
               done.insert({uj,j});
               break;
           }
         
       }
       }
   }
   for(auto x:mappy){
       ans=min(ans,x.first);
   }
   if(ans==1){
       mappy[ans]=done.size();
   }
   if(ans!=INT_MAX)
   cout<<"Case #"<<count<<": "<<ans<<" "<<mappy[ans]<<endl;
   else
     cout<<"Case #"<<count<<": Impossible"<<endl;
     count++;
    
}
}
