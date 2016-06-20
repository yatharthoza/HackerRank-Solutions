#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long t,n,a[50000],i,j,max=-1;
    scanf("%lld",&t);
    while(--t>=0)
        {
        max=-1;
        scanf("%lld",&n);
        for(i=0;i<n;i++)
            {
            scanf("%lld",&a[i]);
            if(a[i]>max)
                max=a[i];
        }
        long long count=0,kh=0,final=0;
        for(i=0;i<n;i++)
            {
            if(a[i]!=max)
                {
                count++;
                kh=kh+a[i];
            }
            else
                {
                final=final+(count*a[i]-kh);
                count=0;
                kh=0;
                max=-1;
                for(j=i+1;j<n;j++)
                    {
                    if(max<a[j])
                        max=a[j];
                }
            }
        }
        printf("%lld\n",final);
    }
    return 0;
}
