int iteractive_factorial(int nb)
{
    int i;
    int factorial;

    i = 1;
    factorial = 1;
    while (i <= nb)
    {
        factorial *= i;
        i++;
    }
    return (factorial);
}

#include <stdio.h>

int main()
{
    printf("%i\n", iteractive_factorial(4));
}
