#include <stdio.h>

int tinhGiaThua(int n) {
    if (n == 0) {
        return 1;
    }
    return n * tinhGiaThua(n - 1);
}

int main() {
    int so;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &so);

    int ketQua = tinhGiaThua(so);
    printf("Giai thua cua %d la: %d\n", so, ketQua);

    return 0;
}

