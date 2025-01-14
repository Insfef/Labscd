﻿#include <stdio.h>
#include <math.h>
#include <Windows.h>

int main(void) {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    short n;        /* параметр внешнего цикла */
    double x, y;    /* абсцисса и ордината графика */
    short h;        /* позиция точки на экране */
    short a = 1;
    /* внешний цикл - для 5 периодов */
    for (n = 0; n < 5; n++) {
        /* вывод заголовка таблицы */
        printf("|   x   |      y     |\n");
        printf("|-------|------------|\n");
        /* внутренний цикл для одного периода */
        for (x = 0; x < 5; x += 0.25) {
            /* 1-й отрезок */
            if (x < 1) y = -sqrt(1 - x * x);
            /* 2-й отрезок */
            else if (x < 5) y = +sqrt(4 - (x - 3) * (x - 3));
            printf("| %5.2lf | %10.7lf |", x + n * 5, y);
            /* определение позиции точки */
            h = (y + a) * 10;
            /* вывод точки графика */
            for (; h > 0; h--) printf(" ");
            printf("*\n");
        }  /* конец внутреннего цикла */
      /* пауза до команды оператора */
        printf("Нажмите клавишу Enter...");
        getchar();
    }  /* конец внешнего цикла */
    return 0;
} /* конец программы */