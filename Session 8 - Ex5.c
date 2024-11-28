#include <stdio.h>

int main() {
    int i, j;
    int m = 2, n = 3;
    int sum = 0;
    int arr[2][3] = {{1, 2, 3},{6, 7, 8},};
    for (i = 0; i < n; i++) {
        sum += arr[0][i];  
        sum += arr[m-1][i];
    }
    for (i = 1; i < m - 1; i++) {
        sum += arr[i][0]; 
        sum += arr[i][n-1];
    }
    printf("Tong cac phan tu tren bien la: %d\n", sum);

    return 0;
}

