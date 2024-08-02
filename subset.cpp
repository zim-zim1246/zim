#include <stdio.h>

int x[10], w[10], d;
static int count = 0;

void sos(int s, int k, int rem) {
    int i;
    x[k] = 1;
    if (s + w[k] == d) {
        printf("Subset %d: ", ++count);
        for (i = 0; i <= k; i++)
            if (x[i] == 1)
                printf("%d ", w[i]);
        printf("\n");
    } else if (s + w[k] < d) {
        sos(s + w[k], k + 1, rem - w[k]);
    }

    if ((s + rem - w[k] >= d) && (s + w[k + 1] <= d)) {
        x[k] = 0;
        sos(s, k + 1, rem - w[k]);
    }
}

int main() {
    int sum = 0, n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    printf("Enter the elements in increasing order: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &w[i]);
        sum += w[i];
    }
    
    printf("Enter the desired sum: ");
    scanf("%d", &d);
    
    if (sum < d) {
        printf("No subset possible\n");
    } else
    {
        sos(0, 0, sum);
        if (count == 0)
            printf("No subset possible\n");
    }

    return 0;
}

