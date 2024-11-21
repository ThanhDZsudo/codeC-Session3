#include <stdio.h>
int main() {
    float celsius, nhiet_do;
    scanf("%f", &celsius);
    nhiet_do = (celsius * 9/5) + 32;
    printf("%.2f", nhiet_do);
    return 0;
}
