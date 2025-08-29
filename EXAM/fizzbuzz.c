#include <unistd.h>

void ft_putnbr(int c)
{
  if (c > 9)
  {
    ft_putnbr (c / 10);
    ft_putnbr (c % 10);
  }
  else if ( c >= 0 && c <= 9)
  {
    c = c + '0';
    write(1,&c,1);
  }
}




int main(int argc, char *argv[])
{
  char c;
  int i = 0;
  while (i <= 100)
  {
    if (i % 4 == 0)
    {
      if (i % 7 == 0)
        write(1,"buzzfizz",8);
      else
        write(1,"buzz",4);
    }
    else if (i % 7 == 0)
    {
      if (i % 4 == 0)
        write(1,"buzzfizz",8);
      else
        write(1,"fizz",4);
    }
    else 
    {
      if (i >= 10)
        ft_putnbr(i);
      else
      {
        c = i + '0';
        write(1,&c,1);
      }
    }
    c = '0';
    i++;
    write(1,"\n",1);
  }
}
