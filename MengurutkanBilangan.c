#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int N;
    
    scanf("%d", &N);
    
    int *values = (int *)malloc(N * sizeof(int));
    if (values == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &values[i]);
    }
    
    qsort(values, N, sizeof(int), compare);
    
    for (int i = 0; i < N; i++) {
        printf("%d\n", values[i]);
    }
    
    free(values);
    
    return 0;
}
