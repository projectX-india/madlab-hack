[10:40 pm, 15/10/2021] Mayank: #include <iostream>
#include <string.h>
using namespace std;
 
#define d 256

void search(char pat[], char txt[], int q)
{
    int M = strlen(pat);
    int N = strlen(txt);
    int i, j;
    int p = 0; 
    int t = 0; 
    int h = 1;
 
    for (i = 0; i < M - 1; i++)
        h = (h * d) % q;
 
    for (i = 0; i < M; i++)
    {
        p = (d * p + pat[i]) % q;
        t = (d * t + txt[i]) % q;
    }
 
    for (i = 0; i <= N - M; i++)
    {
        if ( p == t )
        {  
            bool flag = true;
 
            for (j = 0; j < M; j++)
            {
                if (txt[i+j] != pat[j])
                {
                  flag = false;
                  break;
                }     
            }
    
            if (j == M)
                cout<<"Patt…
[10:42 pm, 15/10/2021] Mayank: #include<iostream>
using namespace std;

int main()
{
	int arr[100];
	int n;
	cout<<"Enter number of elements:";
	cin>>n;
	cout<<"Enter elements of array:\n";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int max=arr[0];
	int min=arr[0];
	for(int i=0;i<n;i++)
	{
		if(arr[i]<min)
			min=arr[i];
		if(arr[i]>max)
			max=arr[i];
	}
	cout<<"Max="<<max<<"\n";
	cout<<"Min="<<min;
}
