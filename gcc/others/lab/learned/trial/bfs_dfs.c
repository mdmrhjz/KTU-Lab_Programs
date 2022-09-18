#include <stdio.h>

#define max 50
int visited[max],count=0;

void dfs(int a[max][max],int v,int n)
{
    int i;
    visited[v]=1;

    printf("%d\t",v);
    count++;

    for(i=1;i<=n;i++)
        if(a[v][i] !=0 && visited[i]==0)
            dfs(a,i,n);
}


void bfs(int a[max][max],int v,int n)
{
    int i,r=-1,q[max],x;
    visited[v]=1;
    printf("%d\t",v);
    q[++r]=v;
    while(r!=-1)
    {
        x=q[0];
        for(i=1;i<=n;i++)
        q[i]=q[i+1];
        r--;
        for(i=0;i<=n;i++)
        {
            if(a[x][i]!=0 && visited[i]==0)
            {
                visited[i]=1;
                printf("%d\t",i);
                q[++r]=i;
            }
        }
    }
}

void main()
{
    int i,v,n,j,a[max][max];

    printf("Enter the no of vertices: ");
    scanf("%d",&n);

    printf("\nEnter the adjency matrix \n");
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            scanf("%d",&a[i][j]);

    printf("\nEnter the starting vertex: ");
    scanf("%d",&v);

    if(v<1||v>n)
        printf("Error");

    for(i=1;i<=n;i++)
        visited[i]=0;

    printf("\nDFS is\t");
    dfs(a,v,n);

    printf("\n\nBFS is \t");
    for(i=1;i<=n; i++)
        visited[i]=0;

    bfs(a,v,n);

    if (count==1)
        printf("\nGraph is not connected\n");

    printf("\n");
}