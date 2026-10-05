#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "RUS");
    int A, B, C;
    printf("Введите номера трёх игроков: ");
    scanf("%d %d %d", &A, &B, &C);
    if ((A + B + C) % 3 == 0) {
        printf("Тройка игроков (%d, %d, %d) является счастливой\n", A, B, C);
    }
    else {
        printf("Тройка игроков (%d, %d, %d) не является счастливой.\n", A, B, C);
    }
    return 0;
}