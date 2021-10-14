 void solve(int open,int close,string res,vector<string> &solution){
        if(open==0&&close==0){
            solution.push_back(res);
            return;
        }
        if(open!=0){
            string res1=res;
            res1.push_back('(');
            solve(open-1,close,res1,solution);
        }
        if(close>open){
            string res1=res;
            res1.push_back(')');
            solve(open,close-1,res1,solution);
            return;
        }
    }
    vector<string> AllParenthesis(int n) 
    {
        vector<string> res;
        solve(n,n,"",res);
        return res;
    }