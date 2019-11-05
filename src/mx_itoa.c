#include "libmx.h"

int ncount(int n) {
    int count = n < 0 ? 1 : 0;

    while (n > 0 || -n > 0 || n == -2147483648) {
        n /= 10;
        count++;
    }
    return count == 0 ? 1 : count;
}

char *mx_itoa(int number) {
    int count = ncount(number);

    char *temp = mx_strnew(count);

    int min = 0;

    if (number == -2147483648) {
        temp[0] = '-';
        temp[1] = '2';
        min += 2;
        number += 2000000000;
        number *= -1;
    }
    else if (number < 0) {
        temp[0] = '-';
        min++;
        number *= -1;
    }
    for (int i = count - 1; i >= min; i--) {
        temp[i] = (number % 10) + '0';
        number /= 10;
    }
    return temp;
}
