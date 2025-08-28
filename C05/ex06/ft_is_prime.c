#include <unistd.h>

int ft_is_prime(int nb)
{
  int i = 2;
  if (nb <= 1)
    return 0;
  while (i * i <= nb)
  {
    if (nb % i == 0)
      return 0;
    i++;
  }
  return 1;
}

#include <stdio.h>

int main ()
{
  printf("%d\n",ft_is_prime(23));
  printf("%d\n",ft_is_prime(24));
}
