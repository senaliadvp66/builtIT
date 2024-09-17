#include <stdio.h>
#include <string.h>

int main() {
    char A[101]; 
    char B[101]; 

    fgets(A, sizeof(A), stdin);
    fgets(B, sizeof(B), stdin);

    size_t lenA = strlen(A);
    if (lenA > 0 && A[lenA - 1] == '\n') {
        A[lenA - 1] = '\0';
    }

    size_t lenB = strlen(B);
    if (lenB > 0 && B[lenB - 1] == '\n') {
        B[lenB - 1] = '\0';
    }

    if (strlen(A) != strlen(B)) {
        printf("BERBEDA\n");
    } else if (strcmp(A, B) == 0) {
        printf("IDENTIK\n");
    } else {
        printf("MIRIP\n");
    }

    return 0;
}
