 #include<bits/stdc++.h>
 using namespace std;

 int tilingways(int n)
 {
     if(n==0 or n==1)
         return n;
     return (tilingways(n-1)+tilingways(n-2));
 }

 int main()
 {
     cout<<tilingways(4);
 }
