#include<stdio.h>
int min(int a, int b) {
    return a < b ? a : b;
}
void floyds(int d[][10], int n) {
	int i,j,k;
    for (k = 0; k < n; k++) {
        printf("\nD(%d)\n", k);
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
                printf("%d\t", d[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
}
int main() {
    int n,i,j,d[10][10];
    printf("Enter the number of vertices: ");
    scanf("%d", &n);
    printf("Enter the weights: \n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            scanf("%d", &d[i][j]);
    }
    floyds(d, n);
}
