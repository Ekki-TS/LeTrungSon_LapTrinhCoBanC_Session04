#include <stdio.h>

int main () {
    int a;

    printf("Nhap vao mot so nguyen dai dien cho nam: ");
    scanf("%d", &a);

    if((a % 4 == 0 && a % 100 != 0) || a % 400 == 0) {
        printf("Nam %d la nam nhuan");
    }
    else{
        printf("Nam %d khong phai la nam nhuan");
    }
    
    return 0;
}