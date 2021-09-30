# include<stdio.h>
int main()
{
    int i,j,n,t;
    printf("N=");
    scanf("%d",&n);
    int a[n],c;
    for(i=0;i<n;i++)
    {
        printf("enter the element:");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    printf("enter the element to search:");
    scanf("%d",&c);
    int d=0,min=0,max=n-1,mid=(min+max)/2;
    while(mid<=max&&mid>=min)
    {if(c==a[mid])
    {
        printf("element found");
        d++;
        break;
    }
    else if(c>a[mid])
    {
        min=mid+1;
        mid=(min+max)/2;
    }
    else
    {
        max=mid-1;
        mid=(min+max)/2;
    }}
    if(d==0)
    {
        printf("element not found");
    }
}
