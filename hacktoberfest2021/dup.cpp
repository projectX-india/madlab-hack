

#include <iostream>
#include<string.h>

using namespace std;
int main()
{
    char string[80];
    cout<<"Enter string: ";
    cin.getline(string,80);

    cout<<"Duplicate characters are following"<<endl;
    for(int i=0;i<strlen(string);i++){                     
        for(int j=i+1;j<strlen(string);j++){
            if(string[i]==string[j]){                   
                cout<<string[i]<<endl;                  
                break;
            }
        }
    }

    return 0;
}
