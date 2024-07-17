#include <stdio.h>

void Bill(int kWh) {
    int money;
    
    if (kWh <= 0) {
        printf("So lieu khong hop le!");
        return;
    } else if (kWh <= 50) {
        money = kWh * 1806;
    } else if (kWh <= 100) {
        money = 50 * 1806 + (kWh - 50) * 1866;
    } else if (kWh <= 200) {
        money = 50 * 1806 + 50 * 1866 + (kWh - 100) * 2167;
    } else if (kWh <= 300) {
        money = 50 * 1806 + 50 * 1866 + 100 * 2167 + (kWh - 200) * 2729;
    } else if (kWh <= 400) {
        money = 50 * 1806 + 50 * 1866 + 100 * 2167 + 100 * 2729 + (kWh - 300) * 3050;
    } else {
        money = 50 * 1806 + 50 * 1866 + 100 * 2167 + 100 * 2729 + 100 * 3050 + (kWh - 400) * 3151;
    }
    
    printf("So tien: %d VND", money);
}

int main() {
    int kWh;
    printf("So dien tieu thu (kWh): ");
    scanf("%d", &kWh);
    Bill(kWh);
    return 0;
}

