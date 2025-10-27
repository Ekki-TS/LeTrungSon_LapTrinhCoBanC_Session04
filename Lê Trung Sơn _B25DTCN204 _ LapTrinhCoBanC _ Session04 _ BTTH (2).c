#include <stdio.h>

int main() {
    int namsinh;
    float diemTB;
    int namhientai = 2024; 
    int tuoi;

    printf("Nhap nam sinh: ");
    scanf("%d", &namsinh);

    printf("\nNhap diem trung binh: ");
    scanf("%f", &diemTB);

    if (namsinh <= 1900 || namsinh > namhientai) {
        printf("\nNam sinh khong hop le.\n");
        return 0;
    }

    tuoi = namhientai - namsinh;

    printf("\nOutput:\n");
    printf("Thong tin sinh vien:\n\n");
    printf("Nam sinh: %d\n\n", namsinh);
    printf("Tuoi: %d\n\n", tuoi);

    printf("Hoc luc: ");
    if (diemTB < 5.0)
        printf("Yeu\n");
    else if (diemTB < 6.5)
        printf("Trung binh\n");
    else if (diemTB < 8.0)
        printf("Kha\n");
    else
        printf("Gioi\n");

    return 0;
}
