#include <stdio.h>
int main() {
    int i, n, num, zero, pos, neg;
    pos = 0;
    neg = 0;
    zero = 0;
    scanf("%d", &n);
    for(i=0; i<n; i++) {
    scanf("%d", &num);
     if (num < 0) {
        neg++;
     }
     else if (num == 0) {
        zero++;
     }
     else if (num > 0) {
        pos++;
     }
}
printf("%d %d %d\n", zero, pos, neg);
return 0;
}
// здесь все просто. создаем переменные ноль(zero), положительное число(pos) и отрицательное число(neg). В цикле for пишем три if
//и в каждом if проверяем число. Если num < 0, то к отрицательному присваиваем +1. Если num == 0, то к нулю присваиваем +1
// Если num > 0, то к положительному присваиваем +1. И выводим их, собственно.
