#include <stdio.h>

int timSoLonNhat(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int arr[] = {3, 5, 7, 2, 8, -1, 4, 10, 12};
    int size = sizeof(arr) / sizeof(arr[0]);

    int soLonNhat = timSoLonNhat(arr, size);
    printf("So lon nhat trong mang la: %d\n", soLonNhat);

    return 0;
}

