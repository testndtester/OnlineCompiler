#include <stdio.h>

void bubble_sort(int list[], int n) {
    int i, j, temp;
    for (i = 0; i< n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (list[j] > list[j+1]) {
                temp = list[j];
                list[j] = list[j+1];
                list[j+1] = temp;
            }
        }
    }
}

int binary_search(int list[], int n, int target) {
    int left = 0, right = n-1, mid;
    while (left <= right) {
        mid = (left + right) / 2;
        if (list[mid] == target) {
            return mid;
        } else if (list[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;  // element not found
}

int main() {
    int n, i, target, index;
printf("Enter the number of elements: ");
scanf("%d", &n);
    int list[n];
printf("Enter the elements:\n");
    for (i = 0; i< n; i++) {
scanf("%d", &list[i]);
    }
bubble_sort(list, n);
printf("Sorted list: ");
    for (i = 0; i< n; i++) {
printf("%d ", list[i]);
    }
printf("\nEnter the element to search: ");
scanf("%d", &target);
    index = binary_search(list, n, target);
    if (index == -1) {
printf("Element not found.\n");
    } else {
printf("Element found at index %d.\n", index);
    }
    return 0;
}

