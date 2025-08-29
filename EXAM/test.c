#include <unistd.h>

void zigzag(void)
{
  
  int     i;
  i = 0;

  char p[] = "hELLo bro";
  char *arr = p;

  while (*arr) 
  {
    if ( i %2 == 0 && *arr >= 'a' && *arr <= 'z')
      *arr -= 32;

   else if ( i %2 != 0 && *arr >= 'A' && *arr <= 'Z' )
      *arr += 32;

    write(1,arr,1);
    i++;

    arr++;
  }

}
int main()
{
  zigzag();
}
