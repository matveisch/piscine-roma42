int ft_recursive_factorial(int nb)
{
    if (nb >= 1)
        return (nb * ft_recursive_factorial(nb - 1));
    else
        return (1);
}

#include <stdio.h>

int main()
{
    printf("%i\n", ft_recursive_factorial(4));
}