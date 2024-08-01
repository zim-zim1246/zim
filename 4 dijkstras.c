#include <stdio.h>
void dijkstras(int n, int s, int cost[][10])
	for(i=0; i<n; i++)
{
	dist[i] = cost[s][i];
	visited[i]= 0;
}
	dist[s]= 0;
	visited[s]= 1;
	for(count=0; count<n-1; count++)
{
	min=999;
	for (i=0; i<n; i++)
	{
		if (visited[i] == 0 && dist[i]<min)
		{
			min = dist[i];
			u=i;
		}
	}
	visited[u]=1;
	for (v=0; v<n; v++)
	{
		if (visitwd[v] == 0 && cost[u][v]!=999 && dist[v]>(dist[u]+ cost[u][v]))
		{
			dist[v]= dist[u]+ cost[u][v];
		}
	}
}
	printf("shortest path from \n");
for (v=0; v<n; v++)
{
	printf("%d to %d = %d \n", s, v, dist[v]);
}
int main()
{
	int n, s, cost[10][10], int i,j;
	printf("enter the number of vertices : \n");
	scanf("%d",&n);
	printf("enter the cost matrix : \n");
	for (i=0; i<n; i++)
	for (j=0; j<n; j++)
	scanf("%d",&s);
	printf("enter the source vertex : \n");
	scanf("%d",&s);
	dijkstras (n, s, cost);
}

