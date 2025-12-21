#include <stdio.h>

int main() {
    int n, i;
    
    printf("input size of massive N: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("input numbers of elements massive:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("inverse massive: ");
    for(i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}