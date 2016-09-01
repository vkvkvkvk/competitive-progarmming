#include <stdio.h>
long long int table[40];
void count()
{   
    table[0]=1;
    table[1]=0;
    table[2]=3;
    table[3]=0;
    int i;
    for(i=4;i<=30;i++)
    {
        table[i]=4*table[i-2]-table[i-4];
    }
    return;
}
int main()
{
    int n;
    count();
    while(1)
    {
        scanf("%d",&n);
        if(n==-1)
        break;
        printf("%lli\n",table[n]);
    }
    return 0;
}
