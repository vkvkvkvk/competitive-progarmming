#include <stdio.h>
#include <string.h>
int arr1[5010];
char arr2[5010];
void howmany(int arr[], int n)
{   
    long int table[5010];
    int i;
    table[0]=1;
    if((arr[0]*10+arr[1])<=26 && arr[1]!=0)
    table[1]=2;
    else
    table[1]=1;
    int sum;
    for(i=2;i<n;i++)
    {
        sum=arr[i]+arr[i-1]*10;
        if(sum<=26 && arr[i]!=0 && arr[i-1]!=0)
        table[i]=table[i-1]+table[i-2];
        else if(sum<=26 && arr[i-1]!=0)
        table[i]=table[i-2];
        else if(arr[i]!=0)
        table[i]=table[i-1];
    }
    printf("%li\n",table[n-1]);
    return;
}
int main(void) {
	// your code goes here
	int i;
	int n;
    while(1)
    {
        scanf("%s",arr2);
        n=strlen(arr2);
        for(i=0;i<n;i++)
        arr1[i]=arr2[i]-'0';
        if(arr1[0]==0)
        break;
        howmany(arr1,n);
    }
	return 0;
}

