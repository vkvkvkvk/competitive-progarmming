#include <stdio.h>
long int input[2000];
long int partation(long int l, long int r)
{
    long int pivot=input[r];
    long int j=l;
    long int i=r-1;
    long int temp;
    while(i>=j)
    {
       if(input[j]>pivot)
       {
           temp=input[j];
           input[j]=input[i];
           input[i]=temp;
           i--;
       }
       else
       j++;
    }
    temp=input[i+1];
    input[i+1]=input[r];
    input[r]=temp;
    return i+1;
    
}
void quick_sort(long int l, long int r)
{
    if(r>l)
    {
        int m=partation(l,r);
        quick_sort(l,m-1);
        quick_sort(m+1,r);
    }
}
long int binary_search(long int a, long int n,long int x)
{
    long int l=a;
    long int r=n;
    long int m;
    while(r>l)
    {
        m=l+(r-l)/2;
        if(input[m]>x)
        r=m;
        else
        l=m+1;
    }
    if(input[l]>x)
    return n-l+1;
    else
    return 0;
}
void count(long int n)
{
    quick_sort(1,n);
    long int coutn=0;
    long int i,j;
    for(i=1;i<=n-2;i++)
    for(j=i+1;j<=n-1;j++)
    {
       coutn+=binary_search(j+1,n,input[i]+input[j]); 
    }
   printf("%li\n",coutn);
   return;
}
int main()
{
    long int n,i;
    while(1)
    {
        scanf("%li",&n);
        if(n==0)
        break;
        for(i=1;i<=n;i++)
        scanf("%li",&input[i]);
        count(n);
    }
    return 0;
}
