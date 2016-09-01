#include <stdio.h>
#include <stdlib.h>
long long int merge(long int arr[], long int l, long int m, long int r)
{
    long long int inversion=0;
    long int arr1[200000];
    long int arr2[200000];
    long int n1=m-l+1;
    long int n2=r-m;
    long int i,j;
    for(i=0;i<n1;i++)
        arr1[i]=arr[l+i];
    for(i=0;i<n2;i++)
        arr2[i]=arr[m+1+i];
    i=0;
    j=0;
    long int k=l;
    while(i<n1 && j<n2)
    {
        if(arr1[i]<=arr2[j])
            arr[k++]=arr1[i++];
        else
        {
            arr[k++]=arr2[j++];
            inversion=inversion+(n1-i);
        }
    }
    while(i<n1)
    {
        arr[k++]=arr1[i++];
    }
    while(j<n2)
    {
        arr[k++]=arr2[j++];
    }
    return inversion;
}
long long int mergesort(long int arr[], long int  l, long int r)
{
    long long int inversion=0;
    if(r>l)
    {

        long int m=(l+r)/2;
        inversion=mergesort(arr,l,m);
        inversion+=mergesort(arr,m+1,r);
        inversion+=merge(arr,l,m,r);
    }
    return inversion;
}
int main()
{
    long int arr[200002];
    long int t,i,n,j;
    scanf("%li",&t);
    for(i=0;i<t;i++)
    {
        scanf("%li",&n);
        for(j=0;j<n;j++)
        {
            scanf("%li",&arr[j]);
        }
        printf("%lli\n",mergesort(arr,0,n-1));
    }
    return 0;
}
