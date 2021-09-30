#include <bits/stdc++.h>
#define endl "\n"
#define MOD 1000000007
#define pi 3.14159265359
#define ll long long
#define speed                \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
using namespace std;

// Author - Naman Malik
// Codechef/Codeforces Id - namanmalikk
// Email - namanmalikk@gmail.com

void solve()
{
    // string a = "11001";
    string a;
    cin >> a;
    set<pair<string, pair<int, int>>> s;
    set<pair<string, pair<int, int>>>::iterator itr1, itr2, ii;
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = i; j < a.size(); j++)
        {
        }
    }
    for (int i = 0; i < a.size(); i++)
    {
        int size = 0, nof1 = 0;
        string t = "";
        for (int j = i; j < a.size(); j++)
        {
            t.push_back(a[j]);
            size++;
            if (a[j] == '1')
                nof1++;
            pair<string, pair<int, int>> x;
            x.first = t;
            x.second.first = size;
            x.second.second = nof1;
            s.insert(x);
        }
    }
    for (ii = s.begin(); ii != s.end(); ++ii)
    {
        cout << (*ii).first << endl;
    }

    int size = s.size();
    // cout << size << endl;
    vector<int> flag(size, 0);
    vector<int>::iterator itr4, itr5;

    vector<vector<string>> vv;
    vector<vector<string>>::iterator itr3;

    for (itr1 = s.begin(), itr4 = flag.begin(); itr1 != s.end(); ++itr1, ++itr4)
    {
        // cout << (*itr1).first << " " << (*itr1).second.first << " " << (*itr1).second.second << endl;
        vector<string> x;
        if ((*itr1).second.second >= 2)
        {
            for (itr2 = itr1, itr5 = itr4; itr2 != s.end(); ++itr2, ++itr5)
            {
                if (itr1 == itr2)
                    continue;
                if ((*itr5) == 0 && (*itr1).second.first == (*itr2).second.first && (*itr1).second.second == (*itr2).second.second)
                {
                    x.push_back((*itr2).first);
                    (*itr5) = 1;
                }
            }
        }
        if (!x.empty())
        {
            x.push_back((*itr1).first);
            vv.push_back(x);
        }
    }
    // for (int i = 0; i < vv.size(); i++)
    // {
    //     for (int j = 0; j < vv[i].size(); j++)
    //         cout << vv[i][j] << " ";
    cout << endl;
    // }
    cout << endl;
    for (int i = 0; i < vv.size(); i++)
    {
        set<string> e;
        for (int j = 0; j < vv[i].size(); j++)
        {
            if (!e.empty())
            {
                set<string>::iterator it6 = e.find(vv[i][j]);
                if (it6 != e.end())
                {
                    cout << vv[i][j - 1] << " " << vv[i][j] << endl;
                    size--;
                }
            }
            for (int k = 0; k < vv[i][j].size(); k++)
            {
                for (int l = k + 2; l < vv[i][j].size(); l++)
                {
                    if (count(vv[i][j].begin() + k, vv[i][j].begin() + l + 1, '1') % 2 == 0)
                    {
                        string t = vv[i][j];
                        reverse(t.begin() + k, t.begin() + l + 1);
                        // cout << t << endl;
                        e.insert(t);
                    }
                }
            }
            // cout << vv[i][j] << " ";
            int q;
            q = 20;
            while (q--)
            {
                set<string>::iterator itr7, itr8 = e.end();
                for (itr7 = e.begin(); itr7 != itr8; ++itr7)
                {
                    // cout << ',' << (*itr7);
                    for (int k = 0; k < (*itr7).size(); k++)
                    {
                        for (int l = k + 2; l < (*itr7).size(); l++)
                        {
                            if (count((*itr7).begin() + k, (*itr7).begin() + l + 1, '1') % 2 == 0)
                            {
                                string t = (*itr7);
                                reverse(t.begin() + k, t.begin() + l + 1);
                                // cout << t << endl;
                                e.insert(t);
                            }
                        }
                    }
                }
            }
            // cout << endl;
        }
    }

    cout << size << endl;
}

int main()
{
    speed;
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}