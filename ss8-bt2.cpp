#include <stdio.h>

int main() {
    int x;
    int arr[5]={1,2,3,4,5};
    printf("Nhap phan tu can tim: ");
    scanf("%d", &x);
    int found = 0;
    for (int i = 0; i < 5; i++) {
        if (arr[i] == x) {
            found = 1;
            printf("Vi tri cua phan tu %d trong mang la: %d\n", x, i);
            break;
        }
    }
    if (found == 0) {
        printf("Phan tu %d khong ton tai trong mang\n", x);
    }

    return 0;
}
