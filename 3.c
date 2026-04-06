#include <stdio.h>

int main() {
    int arr[100], n, i, j, found;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find next greater element
    for(i = 0; i < n; i++) {
        found = 0;

        for(j = i + 1; j < n; j++) {
            if(arr[j] > arr[i]) {
                printf("%d -> %d\n", arr[i], arr[j]);
                found = 1;
                break;
            }
        }

        if(found == 0) {
            printf("%d -> -1\n", arr[i]);
        }
    }

    return 0;
}