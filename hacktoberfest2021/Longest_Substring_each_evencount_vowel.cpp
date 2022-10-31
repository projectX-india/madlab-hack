class Solution
{
public:
    void flipBit(int &n, int i)
    {
        n = n ^ (1 << i);
    }
    int findTheLongestSubstring(string s)
    {
        int n = s.size();
        int mask = 0, ans = 0;
        int phlaIndex[37];
        memset(phlaIndex, -1, sizeof(phlaIndex));
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'a')
                flipBit(mask, 0);
            else if (s[i] == 'e')
                flipBit(mask, 1);
            else if (s[i] == 'i')
                flipBit(mask, 2);
            else if (s[i] == 'o')
                flipBit(mask, 3);
            else if (s[i] == 'u')
                flipBit(mask, 4);
            if (phlaIndex[mask] == -1 and mask != 0)
                phlaIndex[mask] = i;
            else
                ans = max(ans, i - phlaIndex[mask]);
        }
        return ans;
    }
};

// class Solution {
// public:
//     bool isVowel(char c)
//     {
//         if(c=='a' or c=='e' or c=='i' or c=='o' or c=='u')
//             return true;
//         return false;
//     }

//     int findTheLongestSubstring(string s) {
//         int n=s.size();
//         int ans=0;
//         for(int i=0;i<n;i++)
//         {
//             unordered_map<char,int> mp;
//             int single=0;
//             for(int j=i;j<n;j++)
//             {
//                 if(isVowel(s[j]))
//                 {
//                     mp[s[j]]++;
//                     if(mp[s[j]]%2==0)
//                         single--;
//                     else
//                         single++;
//                 }
//                 if(single==0)
//                     ans=max(ans,j-i+1);
//             }
//         }
//         return ans;
//     }
// };