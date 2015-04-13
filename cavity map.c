#include<stdio.h>
int main()
{
    int ar[100][100],n,i,j,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
        scanf("%1d",&ar[i][j]);
    }
    }
    for(i=0;i<n;i++)
    {
    for(j=1;j<n;j++)
    {
    if(i==0||i==n-1)
    {
        break;
    }
     if(ar[i][j]>ar[i][j-1]&&ar[i][j]>ar[i][j+1]&&ar[i][j]>ar[i-1][j]&&ar[i][j]>ar[i+1][j])
            {
                ar[i][j]=88;
            }

        }
        for(k=0;k<n;k++)
        {
          if(ar[i][k]==88)
        printf("%c",ar[i][k]);
        else
            printf("%d",ar[i][k]);
        }
        printf("\n");
    }
    return 0;
}
