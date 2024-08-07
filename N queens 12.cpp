#include <stdio.h>
#include <math.h>

int place(int x[], int k) {
    int i;
    for (i = 1; i < k; i++) {
        if ((x[i] == x[k]) || (abs(x[i] - x[k]) == abs(i - k))) {
            return 0;
        }
    }
    return 1;
}

int nqueens(int n) {
    int x[10], k, count = 0, i, j;
    k = 1;
    x[k] = 0;
    while (k != 0) {
        x[k]++;
        while (x[k] <= n && place(x, k) == 0) {
            x[k]++;
        }
        if (x[k] <= n) {
            if (k == n) {
                printf("\nSolution %d:\n", ++count);
                for (i = 1; i <= n; i++) {
                    for (j = 1; j <= n; j++) {
                        printf("%c", j == x[i] ? 'Q' : 'x');
                    }
                    printf("\n");
                }
            } else {
                k = k + 1;
                x[k] = 0;
            }
        } else {
            k--;
        }
    }
    return count;
}

int main() {
    int n, res;
    printf("Enter the size of chess board: ");
    scanf("%d", &n);
    res = nqueens(n);
    if (res == 0) {
        printf("No solution\n");
    } else {
        printf("Number of solutions = %d\n", res);
    }
    return 0;
}
