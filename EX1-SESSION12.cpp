#include <stdio.h>


int tinhTong(int a, int b);

int main() {
    int so1, so2, tong;

  
    printf("Nhap so thu nhat: ");
    scanf("%d", &so1);
    printf("Nhap so thu hai: ");
    scanf("%d", &so2);

 
    tong = tinhTong(so1, so2);

  
    printf("Tong hai so la: %d\n", tong);

    return 0;
}


int tinhTong(int a, int b) {
    return a + b;
}

