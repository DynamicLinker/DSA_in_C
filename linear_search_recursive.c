#include <stdio.h>

int recursiveLinearSearch(int arr[], int n, int target, int index) {
    if (index == n)
        return -1;
    if (arr[index] == target)
        return index;
    return recursiveLinearSearch(arr, n, target, index + 1);
}

int main() {
    int n, target, result;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &target);

    result = recursiveLinearSearch(arr, n, target, 0);

    if (result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found\n");

    return 0;
}
