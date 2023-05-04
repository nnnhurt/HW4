#include <stdio.h>
int main() {
    int month, year, days;
    scanf("%d", &month);
    scanf("%d", &year);

    switch(month) {
        case 2:
            if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) //проверка года на високосный.
                days = 29;
            else
                days = 28;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            days = 30; //если месяц 4, 6, 9 или 11, то имеет 30 дней
            break;
        default:
            days = 31; //по умолчанию 31 день
    }

    printf("%d\n", days);
    return 0;
}
