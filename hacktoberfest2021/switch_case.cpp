#include<iostream>
using namespace std;

// Task : Implement switch case 

//switch-case example

void IAB()
{
    cout<<"Insertion At the Beginning"<<endl;
}

void IAE()
{
    cout<<"Insertion At the End"<<endl;
}

void IAI()
{
    cout<<"Insertion At the Index"<<endl;
}
void DAB()
{
    cout<<"Deletion At the Beginning"<<endl;
}
void DAE()
{
    cout<<"Deletion At the End"<<endl;
}
void DAI()
{
    cout<<"Deletion At the Index"<<endl;
}

int main()
{
    int ch;
    string c = "y";
    while (c=="y")
    {
       cout<<"1. IAB\n2. IAE\n3. IAI\n4.DEB\n5.DAE\n6.DAI\n";
       cout<<"Enter your choice"<<endl;
       cin>>ch;
       switch (ch)
       {
       case 1:
           IAB();
           break;
       case 2:
           IAE();
           break;
       case 3:
           IAI();
           break;
       case 4:
           DAB();
           break;
       case 5:
           DAE();
           break;
       case 6:
           DAI();
           break;
       default:
           cout<<"Wrong choice"<<endl;
           break;
       }
       cout<<"Do you want to continue(y/n)"<<endl;
       cin>>c;
    }
    
    return 0;
}
