#include <bits/stdc++.h>
using namespace std;
int main()
{
    int h,a,ans,t;
    cin>>t;
    while(t--)
    {
        cin>>h;
        cin>>a;
        h=h+3;
        a=a+2;
        ans=1;
        while(1)
        {
            if(h>20 && a<=10)
            {
                h=h-17;
                a=a+7;
                ans+=2;
            }
            else if(h>5 && a>10)
            {
                h=h-2;
                a=a-8;
                ans+=2;
            }
            else
            {
                cout<<ans<<endl;
                break;
            }
        }
    }
}
