#include <stdio.h>
int main() {
    float canh, chieu_cao, dien_tich;
    scanf("%f %f", &canh, &chieu_cao);
    dien_tich = 0.5 * canh * chieu_cao;
    
    printf("%.2f", dien_tich);

}
