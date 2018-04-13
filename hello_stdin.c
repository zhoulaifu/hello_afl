#include <stdio.h>
#include <stdlib.h>
int main( ) {

  int c;

  printf( "Enter a value :");
  c = getchar( );
  
  printf( "\nYou entered: ");
  putchar( c );
  printf ("\n");
  if (c=='a')
    abort();

  return 0;
}
