#include <bits/stdc++.h>
using namespace std;
int v[1000][1000];
int n, m, x;
bool cmp(int x, int y)
{
    return x < y;
}
void horsort(int i1, int i2, int j1, int j2)
{
    for (int i = i1; i < i2; ++i)
    {
        vector<int> arr;
        for (int j = j1; j < j2; ++j)
        {
            arr.push_back(v[i][j]);
        }
        sort(arr.begin(), arr.end(), cmp);
        for (int j = j1; j < j2; ++j)
        {
            v[i][j] = arr[j - j1];
        }
    }
}
void vsort(int i1, int i2, int j1, int j2)
{
    for (int j = j1; j < j2; ++j)
    {
        vector<int> arr;
        for (int i = i1; i < i2; ++i)
        {
            arr.push_back(v[i][j]);
        }
        sort(arr.begin(), arr.end(), cmp);
        for (int i = i1; i < i2; ++i)
        {
            v[i][j] = arr[i - i1];
        }
    }
}
bool rt(int i1, int i2, int j1, int j2)
{
    if (i2 - i1 == 1 && j2 - j1 == 1)
    {
        return 1;
    }
    if (i1 - i2 == 0 || j1 - j2 == 0)
    {
        return 1;
    }
    return 0;
}
void dnc(int i1, int i2, int j1, int j2)
{
    if (rt(i1, i2, j1, j2))
    {
        return;
    }
    int md1 = ceil(float(i2 - i1) / 2.0);
    int md2 = ceil(float(j2 - j1) / 2.0);
    md1 += i1;
    md2 += j1;
    dnc(i1, md1, md2, j2);
    dnc(md1, i2, md2, j2);
    dnc(i1, md1, j1, md2);
    dnc(md1, i2, j1, md2);
    horsort(i1, i2, j1, j2);
    vsort(i1, i2, j1, j2);
    return;
}
void solution()
{
    cin >> n >> m;
    int i = 0;
    while (i < n)
    {
        int j = 0;
        while (j < m)
        {
            cin >> x;
            v[i][j] = (x);
            ++j;
        }
        ++i;
    }
    dnc(0, n, 0, m);
}
int main()
{
    solution();
    int i = 0;
    while (i < n)
    {
        int j = 0;
        while (j < m)
        {
            cout << v[i][j] << " ";
            ++j;
        }
        ++i;
    }
}