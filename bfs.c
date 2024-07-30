#include <stdio.h>
#include <stdlib.h>
void BFS (int A[10][10],int n,int v[10],int source)
{
    int Queue[10],rear=-1,front=0,deletenode,i;
    v[source]=1;
    Queue[++rear]=source;
    while (front<=rear)
    {
        delete = Queue[front++];
        for(i=1;i<=1;i++)
        {
            if(a[deletenode][i]==1&&v[i]==0)
            {
                Queue[++rear]=i;
                v[i]=1;
            }

        }
    }
}

int main()
{
    int n,A[10][10],i,j,v[10],count=o;
    printf("\n Enter the number of nodes");
    scanf("%d",&n);
    printf("\n Read adjacent matrix");
    for(i=1;i<=n;i++)
    {

        for(j=1;j<=n;j++)
            scanf("%d",&A[i][j]);
    }
    for(i=1;i<=n;i++)
        v[i]=0;
    for(i=1;i<=1;i++)
    {
        if(v[i]==0)
        {

            BFS(a,n,v,i);
            count++;
        }
    }
    if(count==1)
        printf("\n Graph  connected,%d component",count);
        else
        printf("\n Graph not connected,%d component",count);
    return 0;
}
