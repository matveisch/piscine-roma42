int ft_is_prime(int nb)
{
    int p;

    p = 2;
    if (nb <= 1)
        return (0);
    while (p <= nb / p)
    {
        if (nb % p == 0)
            return (0);
        p++;
    }
    return (1);
}