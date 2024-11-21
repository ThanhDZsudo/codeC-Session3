#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;
	printf("Nhap mot so nguyen co 4 chu so: ",num);
    sum += num % 10;
    num /= 10;
    sum += num % 10;
    num /= 10;
    sum += num % 10;
    num /= 10;
    sum += num % 10;
    
    printf("Tong cac chu so trong so ban nhap la: ",sum);
}

