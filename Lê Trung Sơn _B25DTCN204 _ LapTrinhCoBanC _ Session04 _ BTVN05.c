#include <stdio.h>

int main() {
    int chi_so_cu, chi_so_moi;
    int so_dien;
    double tien_dien;

    printf("Nhap chi so cu: ");
    scanf("%d", &chi_so_cu);

    printf("Nhap chi so moi: ");
    scanf("%d", &chi_so_moi);

    so_dien = chi_so_moi - chi_so_cu;

    if (so_dien < 0) {
        printf("Chi so moi phai lon hon chi so cu.\n");
        return 1;
    }

    if (so_dien < 50) {
        tien_dien = so_dien * 10000;
    }
    else if (so_dien < 100) {
        tien_dien = so_dien * 15000;
    }
    else if (so_dien < 150) {
        tien_dien = so_dien * 20000;
    }
    else if (so_dien < 200) {
        tien_dien = so_dien * 25000;
    }
    else {
        tien_dien = so_dien * 30000;
    }

    printf("So dien tieu thu: %d kWh\n", so_dien);
    printf("Tien dien phai tra: %.3f VND\n", tien_dien);

    return 0;
}
