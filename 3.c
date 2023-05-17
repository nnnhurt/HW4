
#include <stdio.h>
#include <string.h>


int main() {
    char password[15]; // массив для хранения введенного пароля
    int i, length = 1, uppercase = 1, lowercase = 1, digit = 1, other = 1;

    scanf("%s", password); // ввод пароля

    length = strlen(password);
    if (length >= 8 && length <= 14) { // проверяем длину пароля
        for (i = 0; i < length; i++) {
            if (password[i] < (char)33 || password[i] > (char)126) { //проверка на аске
                printf("NO");
                return 0; //если не проходит по длине, то сразу выводим "NO"
            }
            if (password[i] >= 'A' && password[i] <= 'Z') { // проверяем есть ли большие буквы
                uppercase=0;
            }
            else if (password[i] >= 'a' && password[i] <= 'z') { // проверяем есть ли маленькие буквы
                lowercase=0;
            }
            else if (password[i] >= '0' && password[i] <= '9') { //  проверяем есть ли цифры
                digit=0;
            }
            else { // проверяем есть ли другие символы
                other=0;
            }
        }
        if ((uppercase + lowercase + digit + other) <= 1) {
            // если пароль удовлетворяет всем ограничениям ( если три 0 и 1 или четыре 0, тогда "Yes")
            printf("YES");
        }
        else {
            // Если пароль не удовлетворяет всем ограничениям
            printf("NO");
        }
    }

    return 0;
}
