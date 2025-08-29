#include <unistd.h>

int main()
{

  int     i;
  char    a;


  a = 97;
  i = 1;

    if ( a <= 'z' )
  {
    if ( i % 2 == 0 )
      a -= 32;

    write(1,&a,1);

    a++;
    i++;
  }
}
