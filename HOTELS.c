#include <stdio.h>
long int arr[300100];
int main(void) {
    long long int m;
    long long int n;
    long long int i,max_so_far,max_till_here,start_index;
    max_so_far=0;
    max_till_here=0;
    start_index=1;
    scanf("%lli",&n);
    scanf("%lli",&m);
    for(i=1;i<=n;i++)
    scanf("%li",&arr[i]);
    
    for(i=1;i<=n;i++)
    {
        max_till_here+=arr[i];
        while(max_till_here>m)
        {
            max_till_here-=arr[start_index];
            start_index++;
        }
        if(max_till_here>max_so_far)
        max_so_far=max_till_here;
    }
    printf("%lli\n",max_so_far);
	return 0;
}

