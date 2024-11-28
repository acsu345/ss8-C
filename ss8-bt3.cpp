#include <stdio.h>

int main() {
    int n;
    printf("Nhap kich thuoc cua mang 2 chieu: ");
    scanf("%d", &n);
    int arr[n][n];
    printf("Nhap cac phan tu cua mang 2 chieu:\n");
    for (int i=0; i<n;i++) {
        for (int j=0;j<n;j++) {
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Mang 2 chieu vua nhap la:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
