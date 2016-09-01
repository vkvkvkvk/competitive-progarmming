#include <stdio.h>
int arr[810];
void happy(long int n)
{
    int i,j,d;
    int ans;
    int count=0;
    while(1)
    {
        ans=0;
    while(n>0)
    {
      d=n%10;
      n=n/10;
      ans=ans+d*d;
    }
    count++;
    if(ans==1)
    {
        printf("%d\n",count);
        return;
    }
    n=ans;
    if(arr[ans]==1)
    {
        printf("%d\n",-1);
        return;
    }
    else
    arr[ans]=1;
    }
}
int main(void) {
	// your code goes here
	long int n;
	scanf("%li",&n);
	happy(n);
	return 0;
}

