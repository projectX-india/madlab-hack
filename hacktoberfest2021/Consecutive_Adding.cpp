#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int r,c,x;
		cin>>r>>c>>x;
		int a[r][c], b[r][c];
		int suma=0,sumb=0;
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++){
				cin>>a[i][j];
				suma+=a[i][j];
			}
		}
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++){
				cin>>b[i][j];
				sumb+=b[i][j];
			}
		}
		if(x==2 && 0){
			int pathsum=0;
			for(int i=0;i<r;i++){
				for(int j=0;j<c;j++){
					int mul;
					if((r-i+c-j)%2==0) mul=-1;
					else mul=1;
					if(!(i==r-1 && j==c-1)) pathsum+=mul*(a[i][j]-b[i][j]);
				}
			}
			if(a[r-1][c-1]-pathsum==b[r-1][c-1])  cout<<"Yes"<<endl;
			else cout<<"No"<<endl;
		}
		else{
			int darray[r][c];
			for(int i=0;i<r;i++){
				for(int j=0;j<c;j++){
					darray[i][j]=b[i][j]-a[i][j];
				}
			}
			for(int j=0;j<c;j++){
				int toadd=0;
				int tempaddidx=r-x;
				while(tempaddidx>=0){
					toadd += darray[tempaddidx][j];
					tempaddidx -= x;
				}
				for(int i=r-1;i>r-x;i--){
					int temp=i-x;
					while(temp>=0){
						darray[i][j] += darray[temp][j];
						temp=temp-x;
					}
					darray[i][j] -= toadd;
				}
			}
			for(int i=r-1;i>r-x;i--){
				int toadd=0;
				int tempaddidx=c-x;
				while(tempaddidx>=0){
					toadd += darray[i][tempaddidx];
					tempaddidx -= x;
				}
				for(int j=c-1;j>c-x;j--){
					int temp=j-x;
					while(temp>=0){
						darray[i][j] += darray[i][temp];
						temp=temp-x;
					}
					darray[i][j] -= toadd;
				}
			}
			bool valid=1;
			for(int i=r-1;i>r-x;i--){
				for(int j=c-1;j>c-x;j--){
					if(darray[i][j]!=0) valid=0;
				}
			}
			if(!valid) cout<<"No"<<endl;
			else cout<<"Yes"<<endl;
		}
	}
	return 0;
}
