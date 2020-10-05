  #include<bits/stdc++.h>
  #define pi 3.14159265359
  #define ll long long
  #define wh(t) int t;cin>>t; while(t--)
  #define speed  ios::sync_with_stdio(0); cin.tie(0);
  #define endl "\n"
  #define f(i,a,b) for(int i=a;i<b;i++)
  using namespace std;
  #include<string.h>

  //aditya ranaut- phoenix_aditya

  void solve()
  {
      ll p,f;
      cin>>p>>f;
      
      ll cnts, cntw;
      cin>>cnts>>cntw;
      
      ll s,w;
      cin>>s>>w;
      
      ll ans=0;
      double psword1=floor((1.0*p/s));
      double paxe1=floor((1.0*p/w));
      double psword2=floor((1.0*f/s));
      double paxe2=floor((1.0*f/w));
      
//      cout<<psword1<<" "<<psword2<<" "<<paxe1<<" "<<paxe2<<endl;
      
      if(s<w)
      {
          if(cnts>=psword1)
          {
              ans+=psword1;
              cnts-=psword1;
              p-=(s*psword1);
          }
          else
          {
              ans+=cnts;
              cnts=0;
              p-=(s*cnts);
          }
          
          if(cnts>=psword2)
          {
              ans+=psword2;
              cnts-=psword2;
              f-=(s*psword2);
          }
          else
          {
              ans+=cnts;
              cnts=0;
              f-=(s*cnts);
          }
          
          paxe1=floor((1.0*p/w));
          paxe2=floor((1.0*f/w));
          
//          cout<<paxe1<<" "<<paxe2<<endl;
          
          if(cntw>=paxe1)
          {
              ans+=paxe1;
              cntw-=paxe1;
              p-=(w*paxe1);
          }
          else
          {
              ans+=cntw;
              cntw=0;
              p-=(w*cntw);
          }
          
          if(cntw>=paxe2)
          {
              ans+=paxe2;
              cntw-=paxe2;
              f-=(w*paxe2);
          }
          else
          {
              ans+=cntw;
              cntw=0;
              f-=(w*cntw);
          }
          
          ll left=p+f;
          ll psword=floor((1.0*(left)/s));

          
          
          if(p+f>0)
          {
              if(cnts>=psword)
              {
                  ans+=psword;
                  left-=(s*psword);
                  
              }
              else
              {
                  ans+=cnts;
                  left-=(s*cnts);
              }
              
              ll paxe=floor((1.0*(left)/w));
              
              if(cntw>=paxe)
              {
                  ans+=paxe;
                  left-=(w*paxe);
              }
              else
              {
                  ans+=cntw;
                  left-=(w*cntw);
              }
          }
    
      }
      else
        {
            if(cntw>=paxe1)
            {
                ans+=paxe1;
                cntw-=paxe1;
                p-=(w*paxe1);
            }
            else
            {
                ans+=cntw;
                cntw=0;
                p-=(w*cntw);
            }
            
            if(cntw>=paxe2)
            {
                ans+=paxe2;
                cntw-=paxe2;
                f-=(w*paxe2);
            }
            else
            {
                ans+=cntw;
                cntw=0;
                f-=(w*cntw);
            }
            
            
            psword1=floor((1.0*p/s));
            psword2=floor((1.0*f/s));
            
//            cout<<psword1<<" "<<psword2<<endl;
            
            if(cnts>=psword1)
            {
                ans+=psword1;
                cnts-=psword1;
                p-=(s*psword1);
            }
            else
            {
                ans+=cnts;
                cnts=0;
                p-=(s*cnts);
            }
            
            if(cnts>=psword2)
            {
                ans+=psword2;
                cnts-=psword2;
                f-=(s*psword2);
            }
            else
            {
                ans+=cnts;
                cnts=0;
                f-=(s*cnts);
            }
            
            ll left=p+f;
            ll paxe=floor((1.0*(left)/w));

            
            
            if(p+f>0)
            {
                if(cnts>=paxe)
                {
                    ans+=paxe;
                    left-=(w*paxe);
                    
                }
                else
                {
                    ans+=cntw;
                    left-=(w*cntw);
                }
                
                ll psword=floor((1.0*(left)/s));
                
                if(cnts>=psword)
                {
                    ans+=psword;
                    left-=(s*psword);
                }
                else
                {
                    ans+=cnts;
                    left-=(s*cnts);
                }
            }
      
        }
      
      cout<<ans<<endl;
      
  }



  int main()
  {
      speed;
      wh(t)
       {solve();}
      
      return 0;
  }
