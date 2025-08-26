#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}
int     ft_strlen(char *str)
{
  int        i;

  i = 0;
  while (*str)
  {
    str++;
    i++;
  }
  return (i);
}
int check_base(char *base)
{
  int     i;
  int      j;

  i = 0;
  while (base[i])
  {
    if (base[i] == '+'  || base[i] == '-' || base[i] <= 32)
      return 0;

    j = i + 1;
    while (base[j])
    {
      if (base[i] == base[j])
        return 0;
      j++;
    }
    i++;
  }
  return 1;
}

void ft_putnbr_base(int nbr, char *base)
{
  long n ;

  n = nbr;

  int len;

  len = ft_strlen(base);

  if (len < 2 || !check_base(base))
    return;
  if (n < 0)
  {
    ft_putchar('-');
    n *= -1;
  }

  if (n >= len)
    ft_putnbr_base(n / len, base);

  ft_putchar(base[n % len]);
}



int     main(){
  int       c = 12;
  ft_putnbr_base(c,"0123456789ABCDEF");
}
