#include<stdio.h>
void warshall(int r[][10], int n) {
	int i,j,k;
    for (k = 0; k < n; k++) {
        printf("\nR(%d)\n", k);
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                r[i][j] = r[i][j] || (r[i][k] && r[k][j]);
                printf("%d\t", r[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
}
int main() {
    int n,i,j, r[10][10];
    printf("Enter the number of vertices: ");
    scanf("%d", &n);
    printf("Enter the adjacency matrix: \n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            scanf("%d", &r[i][j]);
    }
    warshall(r, n);
}
