#include <stdio.h>

int main(){
	int arr[3][4]={{1,2,3,4},{5,6,7,8,},{9,10,11,12}};
	int sum = 0;
    for (int i = 0; i < 3; i++) {
        sum += arr[i][0] + arr[i][4 - 1];
    }
    for (int j = 1; j < 4 - 1; j++) {
        sum += arr[0][j] + arr[3 - 1][j];
    }
    printf("Tong cac phan tu tren duong bien cua mang 2 chieu la: %d\n", sum);

    return 0;
} 
