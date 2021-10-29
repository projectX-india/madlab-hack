#include<iostream>
#include<vector>

using namespace std;

void display(vector<int> &arr)
{
	for (int ele : arr)
		cout << ele << " ";
	cout << endl;
}

void display2D(vector<vector<int>> &arr)
{
	for (vector<int> ar : arr)
		display(ar);
	cout << endl;
}

int mcm_rec(vector<int> &arr,int si,int ei,vector<vector<int>> &dp)
{
	//  
	if(si+1==ei)
	{
		return dp[si][ei]=0;
	}
	
	if(dp[si][ei]!=-1)
		return dp[si][ei];

	int ans=(int)1e8;

	for(int cut=si+1;cut<ei;cut++)
		{int left=mcm_rec(arr,si,cut,dp);
			int right=mcm_rec(arr,cut,ei,dp);
			int mycost=left+arr[si]*arr[cut]*arr[ei]+right;
			if(ans>mycost)
			{
				ans=mycost;
			}
		}

		return dp[si][ei]=ans;
	}

	int mcm_dp(vector<int> &arr,vector<vector<int>> &dp)
	{
		for(int gap=1;gap<arr.size();gap++)
		{
			for(int si=0,ei=gap;ei<arr.size();ei++,si++)
			{

				if(si+1==ei)
				{
					 dp[si][ei]=0;
					 continue;
				}


				int ans=(int)1e8;

				for(int cut=si+1;cut<ei;cut++)
					{int left=dp[si][cut];//mcm_rec(arr,si,cut,dp);
						int right=dp[cut][ei];//mcm_rec(arr,cut,ei,dp);
						int mycost=left+arr[si]*arr[cut]*arr[ei]+right;
						if(ans>mycost)
						{
							ans=mycost;
						}
					}

					dp[si][ei]=ans;

				}
			}
			return dp[0][arr.size()-1];
		}

		int mcm_ans_dp(vector<int> &arr,vector<vector<int>> &dp,vector<vector<string>> &sdp)
	{
		for(int gap=1;gap<arr.size();gap++)
		{
			for(int si=0,ei=gap;ei<arr.size();ei++,si++)
			{

				if(si+1==ei)
				{
					sdp[si][ei]=(char)si+'A';
					 dp[si][ei]=0;
					 continue;
				}


				int ans=(int)1e8;
				string sans="";

				for(int cut=si+1;cut<ei;cut++)
					{int left=dp[si][cut];//mcm_rec(arr,si,cut,dp);
						int right=dp[cut][ei];//mcm_rec(arr,cut,ei,dp);
						int mycost=left+arr[si]*arr[cut]*arr[ei]+right;
						if(ans>mycost)
						{
							ans=mycost;
							sans="("+sdp[si][cut]+sdp[cut][ei]+")";
						}
					}

					dp[si][ei]=ans;
					sdp[si][ei]=sans;

				}
			}
			cout<< dp[0][arr.size()-1];
			cout<<sdp[0][arr.size()-1];
		}

int countfreq(int si,int ei,vector<int> &freq)
{
     int a=0;
    for(int i=si;i<=ei;i++)
    {
        a+=freq[i];
    }

    return a;
}
		int obst_rec(int si, int ei,vector<int> &key, vector<int> & freq)
		{

           int ans=(int)1e8;
           for(int cut=si;cut<=ei;cut++)
           {
               int left=if(si==cut)? 0 : obst_rec(si,cut-1,key,freq);
               int right=if(ei==cut)?0 : obst_rec(cut+1,ei,key,freq);

               int mycost=left+countfreq(si,ei,freq)+right;

               if(ans>mycost)
               	ans=mycost;


           }

           return ans;
		}

		int main()
		{
			vector<int> arr={1,2,3,4,5,6};
			vector<vector<int>> dp(arr.size(),vector<int>(arr.size(),-1));
			// cout<<mcm_rec(arr,0,arr.size()-1,dp)<<endl;
			// display2D(dp);

			// cout<<mcm_dp(arr,dp);
			// display2D(dp);
            vector<vector<string>> sdp(arr.size(),vector<string>(arr.size(),""));
			mcm_ans_dp(arr,dp,sdp);

			//display2D(sdp);

			return 0;
		}