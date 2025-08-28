#include <unistd.h>

int       ft_iterative_power(int nb, int power)
{
  int     r;
  int     i;

  i = 0;
  r = 1;
  if (nb == 0 && power == 0)
    return 1;
  if (power < 0)
    return 0;
  while (i < power)
  {
    r *= nb;
    i++;
  }
  return r;
}

#include <stdio.h>

int main(){
  printf("%d",ft_iterative_power(5,4));
}
