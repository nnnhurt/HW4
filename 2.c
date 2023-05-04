#include <stdio.h>

int main() {
    int first,count; //first - номер дня недели первого числа месяца. count - количество дней в месяце
    scanf("%d %d", &first, &count);
    int days[100] = {0}; // 100, ибо максимум - 99 дней.
    for (int i=1; i < first+count; i++) {
        if (i >= first) {
            days[i] = (i-first+1); //если день принадлежит к месяцу, то добавляем его в массив
        }
    }
    for (int i=1; i < first + count; i++) {
        if (days[i] == 0) {
            printf("   "); // если день принадлежит к предыдущему месяцу
        }
        else if (days[i] < 10) {
            printf("  %d", days[i]); // день с однозначным номером
        }
        else {
            printf(" %d",days[i]); //день с двузнычным номером
        }
        if (i % 7 == 0) {
            printf("\n"); //каждую неделю(7 дней) делаем перевод строки.
        }

    }
}
