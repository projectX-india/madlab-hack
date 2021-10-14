#include <bits/stdc++.h>
#define M 1000000007
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define d(x) cout << #x << " " << x << "\n";
#define min(x1, x2) (x1 > x2 ? x2 : x1)
#define max(x1, x2) (x1 < x2 ? x2 : x1)
#define min3(x1, x2, x3) (x3 > min(x1, x2) ? min(x2, x1) : x3)
#define max3(x1, x2, x3) (x3 < max(x1, x2) ? max(x1, x2) : x3)
#define ll long long int
#define ul unsigned long long int
#define p pair<ll, ll>
#define ld long double
#define dv(v) cerr<< #v<<"  "; for(int i = 0; i < (v).size(); i++) cerr << v[i] << " "; cerr<<"\n";
#define inf INT_MAX
#define mp(x, y) make_pair(x, y)
using namespace std;

int rhombus(int i, int k, int j, int m, int n, vector<vector<int>>&&grid)
{
    // i->smaller
    // k-> bigger
    // j->col
    int x = i, y = k;
    int j1 = j, j2 = j;
    int ans = 0;
    while (x != y)
    {
        if (j2 < 0 || j1 >= n || x >= m || y < 0)
        {
            return -1;
        }
        if (j1 != j2)
        {
            ans += grid[x][j1] + grid[y][j1] + grid[x][j2] + grid[y][j2];
        }
        else
        {
            ans += grid[x][j1] + grid[y][j1];
        }
        ++x;
        --y;
        ++j1;
        --j2;
    }
    if (j2 < 0 || j1 >= n || x >= m || y < 0)
    {
        return -1;
    }
    if (j1 != j2)
    {
        ans += grid[x][j1] + grid[x][j2];
    }
    else
    {
        ans += grid[x][j1];
    }
    return ans;
}

int main()
{
    vector<vector<int>> grid = {{3, 4, 5, 1, 3}, {3, 3, 4, 2, 3}, {20, 30, 200, 40, 10}, {1, 5, 5, 4, 1}, {4, 3, 2, 2, 5}};
    int m = grid.size();
    int n = grid[0].size();
    int x;
    int maxi1 = 0, maxi2 = 0, maxi3 = 0;
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            for (int k = i; k < m; k += 2)
            {
                x = rhombus(i, k, j, m, n, grid);
               
                if (x > maxi1)
                {
                    maxi3 = maxi2;
                    maxi2 = maxi1;
                    maxi1 = x;
                }
                else if (x > maxi2 && x < maxi1)
                {
                    maxi3 = maxi2;
                    maxi2 = maxi1;
                }
                else if (x > maxi3 && x < maxi2)
                {
                    maxi3 = x;
                }
            }
        }
    }
    vector<int> v;
    if (maxi1)
    {
        v.push_back(maxi1);
    }
    if (maxi2)
    {
        v.push_back(maxi2);
    }
    if (maxi3)
    {
        v.push_back(maxi3);
    }
    dv(v);
}