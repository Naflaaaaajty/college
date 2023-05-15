#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main()
{
    int n,m,c,a,b,count=0,i,j;
    scanf("%d %d %d",&n,&m,&c);
    int arr[1000][1000]={0};
    
    while(c)
    {
        scanf("%d %d",&a,&b);
        if(a==0)//hang
        {
            for(i=0;i<m;i++)
                arr[b-1][i]=1;
        }
        else if(a==1)//lie
        {
            for(i=0;i<n;i++)
                arr[i][b-1]=1;
        }
        c--;
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr[i][j]==0)
                count++;
        }
            printf("%d",count);
    }
    return 0;
}
