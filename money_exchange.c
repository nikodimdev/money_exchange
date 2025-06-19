#include <stdio.h>

int main() {

    int amount, twenties, tens, fives, ones;


    printf("Введите сумму в долларах: ");
    scanf("%d", &amount);


    twenties = amount / 20;
    amount = amount % 20;

    tens = amount / 10;
    amount = amount % 10;

    fives = amount / 5;
    amount = amount % 5;

    ones = amount;


    printf("$20 банкнот: %d\n", twenties);
    printf("$10 банкнот: %d\n", tens);
    printf("$5 банкнот: %d\n", fives);
    printf("$1 банкнот: %d\n", ones);

    return 0;
}


/*

Задача из книги C Programming: A Modern Approach" (2nd Edition) by K.N. King
Цель: напишите программу, которая попросит пользователя
ввести сумму в долларах США, а затем покажет, как заплатить
эту сумму, используя наименьшее количество 20, 10, 5 и 1
долларовых банкнот:
Введите сумму в долларах: 93
$20 банкнот: 4
$10 банкнот: 1
$5 банкнот: 0
$1 банкнот: 3

*/