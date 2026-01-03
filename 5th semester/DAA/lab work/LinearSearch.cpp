#include <stdio.h>

int main() {
    int n, search, i, found = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; // Array declaration

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value to search for: ");
    scanf("%d", &search);

    // Linear Search Logic
    for (i = 0; i < n; i++) {
        if (arr[i] == search) {
            printf("%d is present at index %d (position %d).\n", search, i, i + 1);
            found = 1;
            break; // Stop searching once found
        }
    }

    if (!found) {
        printf("%d is not present in the array.\n", search);
    }

    return 0;
}
