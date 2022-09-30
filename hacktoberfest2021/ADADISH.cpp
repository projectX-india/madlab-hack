#include<bits/stdc++.h>
using namespace std;
//hello again again again 

int calculatetime(vector <int> dish){
    sort(dish.begin(),dish.end(),greater<int>());
    int burner1 = 0;
    int burner2 = 0;
    int time = 0;
    while(dish.size()>0){

        if(burner1 == 0 && dish.size()>0){
            burner1 = dish[0];
            dish.erase(dish.begin());
        }
        if(burner2 == 0 && dish.size()>0){
            burner2 = dish[0];
            dish.erase(dish.begin());
        }

        if(dish.size()>=0){
            if(burner1>burner2 && burner1!=0 && burner2 !=0){
                time += burner2;
                burner1 -= burner2;
                burner2 -= burner2;
            }else if(burner1 != 0 && burner2 != 0){
                time += burner1;
                burner2 -= burner1;
                burner1 -= burner1;
            }else{
                if(burner1==0){
                    time +=burner2;
                    burner2 = 0;
                }else{
                    time+=burner1;
                    burner1 = 0;
                }
            }
        }
    }

    if(dish.size()==0){
        if(burner1 !=0 ){
            time += burner1;
            burner1 =0;
        }
        if(burner2 !=0 ){
            time += burner2;
            burner2 = 0;
        }
    }
    return time;
}

int main(void){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector <int> dishtimes;
        for(int i=0;i<n;i++){
            int time;
            cin>>time;
            dishtimes.push_back(time);
        }
        int ans = calculatetime(dishtimes);
        cout<<ans<<endl;
    }
}
