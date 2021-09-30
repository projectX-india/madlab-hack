#include <iostream>
#include <vector>

using namespace std;


int dec(int a)
{
    return (a-2);
}

//return index if found else -1

// mid-1 should be +ive and mid -ive
// if mid +ive
int binSearch (int l,int h)
{

    if(l<=h)
    {
        int mid=(l+h)/2;

        if(dec(mid)<0 && dec(mid-1)>=0)
        {
            return mid;
        }
        else if(dec(mid)>0)
        {
            l=mid+1;
        }
        else
        {
            h=mid-1;
        }

    }
    return -1;
    
}

int main()
{
    vector <int> v;
    int i,n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        //cin>>k;
        if(dec(i)<0)
        {
            cout<<"value of i required is "<<i;
        }

    }

}

// 3
// value of i required is 0value of i required is 1