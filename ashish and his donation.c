#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    long long int x,i,sum;
    scanf("%d",&t);
    while(t--)
    {
        sum=0;
        scanf("%lld",&x);
        for(i=1;i>0;i++)
        {
            sum=sum+(i*i);
            if(sum>x)
            {
                break;
            }
        }
        i=i-1;
        printf("%lld\n",i);
    }
   return 0;
}
