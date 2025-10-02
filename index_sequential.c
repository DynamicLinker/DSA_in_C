#include <stdio.h>
#include <stdlib.h>

void indexedSequentialSearch(int arr[], int n, int k)
{
    int GN = (n + 2) / 3;
    int elements[GN], indices[GN];
    int i, set = 0, j = 0, ind = 0, start, end;

    for (i = 0; i < n; i += 3) {
        elements[ind] = arr[i];
        indices[ind] = i;
        ind++;
    }

    if (k < elements[0]) {
        printf("Not found\n");
        return;
    } else {
        for (i = 1; i < ind; i++) {
            if (k <= elements[i]) {
                start = indices[i - 1];
                end = indices[i];
                set = 1;
                break;
            }
        }
    }

    if (set == 0) {
        start = indices[ind - 1];
        end = n - 1;
    }

    for (i = start; i <= end; i++) {
        if (k == arr[i]) {
            j = 1;
            break;
        }
    }

    if (j == 1)
        printf("Found at index %d\n", i);
    else
        printf("Not found\n");
}

int main()
{
    int n, k;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d sorted elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter the element to search: ");
    scanf("%d", &k);

    indexedSequentialSearch(arr, n, k);

    return 0;
}
