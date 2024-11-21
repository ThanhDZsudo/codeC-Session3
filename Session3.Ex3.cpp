#include <stdio.h>

int main() {
    float pi = 3.14;
    float ban_kinh = 5;
    float chu_vi = 2 * pi * ban_kinh;
    float dien_tich = pi * ban_kinh * ban_kinh;

    printf("Chu vi cua hinh tron voi ban kinh %.2f là %.2f\n", ban_kinh, chu_vi);
    printf("Dien tich cua hinh tron voi ban kinh %.2f là %.2f\n", ban_kinh, dien_tich);
}

