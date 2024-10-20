#include <stdio.h>

int main() {
    int n,elements;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    scanf("%d",&elements);
    for (int i = 0; i < n; i++) {
        printf("Element %d = ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        int index = arr[i] % n; 
        arr[index] += n;        
    }


    int hasDuplicate = 0;
    for (int i = 0; i < n; i++) {
        if ((arr[i] / n) > 1) { 
            printf("Number %d in array occurs more than once.\n", i);
            hasDuplicate = 1;
        }
    }

    if (!hasDuplicate) {
        printf("No duplicates found.\n");
    }

    return 0;
}

