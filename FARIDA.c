#include <stdio.h>
long long int  table[11000];
long long int  array[11000];
long long int max(long long int a, long long int b)
{
    if(a>b)
    return a;
    return b;
}
void count(int n)
{
    int i,j;
    table[1]=array[1];
    table[2]=array[2];
    for(i=1;i<=n;i++)
    {
        table[i]=max(table[i-2]+array[i],table[i-1]);
    }
    printf("%lli\n",table[n]);
    return;
}
int main()
{
    int t,n;
    int i,j;
    scanf("%d",&t);
    for(j=1;j<=t;j++)
    {
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        scanf("%lli",&array[i]);
        printf("Case %d: ",j);
        count(n);
    }
    return 0;
}
