#include<stdio.h>
long long int arr[500000]={0};
long long int max(long long int a,long long int b)
{
    if(a>b)
    return a;
    return b;
}
long long int doller(long long int n)
{
   
    if(n<12)
    return n;
    if(n<500000)
    {
        if(arr[n]!=0)
        return arr[n];
        arr[n]=max(n,doller(n/2)+doller(n/3)+doller(n/4));
        return arr[n];
    }
    return doller(n/2)+doller(n/3)+doller(n/4);
}
int main()
{
    long long int x;
    while(scanf("%lli",&x)>0)
    {
    printf("%lli\n",doller(x));
    }
    return 0;
}
