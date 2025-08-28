#include <unistd.h>

int     ft_iterative_factorial(int nb)
{
  int       r;
  int       i;
  
  r = 1;
  i = 1;
  if (nb < 0)
    return (0);
  while (i <= nb )
  {
    r *= i;
    i++;
  }
  return (r);
}

#include <stdio.h>

int main()
{
printf("%d",ft_iterative_factorial(5));

}
