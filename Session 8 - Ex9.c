#include <stdio.h>
int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int arr[n];
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int maxCount = 0, max;  
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            max = arr[i];
        }
    }
        printf("Phan tu co so lan xuat hien nhieu nhat la : %d\n", max);
    printf("So lan xuat hien : %d\n", maxCount);
    
    return 0;
}

