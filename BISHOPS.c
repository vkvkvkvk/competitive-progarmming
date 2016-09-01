#include <stdio.h>
#include <string.h>
void bishop(int arr[], int l, int r)
{
    int i,j;
    j=r;
    if(arr[r]>=1)
    arr[r]--;
    else
    {
        arr[j]=10+arr[j]-1;
        while(1)
        {
            if(arr[j-1]==0)
            arr[j-1]=9;
            else
            break;
            j--;
        }
        arr[j-1]--;
    }
    int sum;
    int carry=0;
    for(j=r;j>=l;j--)
    {
        sum=arr[j]*2+carry;
        arr[j]=sum%10;
        carry=sum/10;
    }
    if(carry!=0)
    arr[--l]=carry;
    for(i=l;i<=r;i++)
    printf("%d",arr[i]);
    printf("\n");
    return;
}
int main(void) {
	// your code goes here
	char str[1000];
	int arr[1000];
	int r,i;
	while(scanf("%s",str)!=EOF)
	{
	    r=strlen(str);
	    if(r==1 && str[0]==49)
	    {
	        printf("%d\n",1);
	        continue;
	    }
	    for(i=1;i<=r;i++)
	    arr[i]=str[i-1]-'0';
	    bishop(arr,1,r);
	}
	return 0;
}

