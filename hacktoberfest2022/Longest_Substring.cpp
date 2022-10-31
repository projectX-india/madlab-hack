 int lengthOfLongestSubstring(string s) {
     unordered_map<char, int> m; //character map to index
     int maxi = 0, l = 0, r = 0;
     
     while (r < size(s)) {
         if (m.find(s[r]) == m.end() || m[s[r]] < l) //element not in window!
             maxi = max(maxi, r-l+1);
         else  l = m[s[r]] + 1;//element in window
         m[s[r++]] = r; //update element in map, and increment r;
     }
     return maxi;
 }
