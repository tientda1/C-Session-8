#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("Nhap kich thuoc ma tran (n x n): ");
    scanf("%d", &n);
    int arr[n][n];
    printf("Nhap cac phan tu cho ma tran:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Nhap phan tu arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Cac phan tu trên duong cheo chinh: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i][i]);
        sum += arr[i][i];
    }
    printf("\nTong cac phan tu tren duong cheo chinh là: %d\n", sum);
    
    return 0;
}

