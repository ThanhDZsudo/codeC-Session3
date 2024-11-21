#include <stdio.h>
int main() {
    float van, toan, anh, tong, trung_binh;
    scanf("%f %f %f", &van, &toan, &anh);
    tong = van + toan + anh;
    trung_binh = tong / 3;
    
    printf("%.2f %.2f", tong, trung_binh);
}
