#include<stdio.h>
int main()
{
    int v[1000],i,j,n,b[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
        if(b[i]%2==0)
            v[i]=b[i]/2;
        else
            v[i]=(b[i]/2)+1;
    }
    for(j=0;j<n;j++)
    {
        if(v[j]%2==0)
            printf("Bob\n");
        else
            printf("Alice\n");
    }
    return 0;
}
