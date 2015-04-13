#include<stdio.h>
int main()
{
    long long int n,m,a,b,k,i,avg;
    avg=0;
    scanf("%lld %lld",&n,&m);
    while(m--)
    {
        scanf("%lld %lld %lld",&a,&b,&k);
        for(i=a;i<=b;i++)
        {
            avg=(avg+k);
        }
    }
    avg=floor(avg/n);
    printf("%lld",avg);
    return 0;
}
