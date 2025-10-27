#include <stdio.h>

int main() {
    int a;

    printf("Nhap mot so nguyen: ");
    scanf("%d", &a);

    if (a % 3 == 0 && a % 5 == 0) {
        printf("So vua nhap chia het cho ca 3 va 5.\n");
    }
    else if (a % 3 == 0) {
        printf("So vua nhap chia het cho 3.\n");
    }
    else if (a % 5 == 0) {
        printf("So vua nhap chia het cho 5.\n");
    }
    else {
        printf("So vua nhap khong chia het cho 3 va 5.\n");
    }

    return 0;
}
