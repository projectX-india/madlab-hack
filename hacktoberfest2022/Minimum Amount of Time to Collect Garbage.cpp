class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
          vector<int>prefix(travel.size());
        prefix[0] = travel[0];
        
        for(int i=1;i<prefix.size();i++)
        {
            prefix[i] = prefix[i-1] + travel[i];
        }
        
        int ans = 0;
        int g = 0;
        int m = 0;
        int p = 0;
        //["g". "p", "gm", "mp", "m"]
        //travel = [ 1,2,3,4]
        
        //prefix = [1,3,6,10 ]
        for(int i=0;i<garbage.size();i++)
        {
            string current = garbage[i]; //["m"]
            for(char x:current)
            {
                if(x =='M')m = i; //m=4
                if(x == 'P')p = i; //p =3
                if(x =='G')g = i; //g =2
            }
            ans+= current.size(); //ans+= 7 
        }
        
        if(g>=1)ans+=prefix[g-1]; //ans+=3 //travel time for glass
        if(p>=1)ans+=prefix[p-1]; //ans+=6 // travel time for plastic
        if(m>=1)ans+=prefix[m-1]; //ans+=10 //travel time for metal
        return ans;

    }
};
