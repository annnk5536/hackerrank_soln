#include<stdio.h>
int main()
{
    int t,n,k,i,y,x;
    scanf("%d",&t);
    while(t--)
    {
        x=0;
        scanf("%d %d",&n,&k);
        for(i=1;i<=n;i++)
        {
            scanf("%d",&y);
            if(y<=0)
            {
                x++;
            }
        }
        if(x>=k)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }
    return 0;
}
