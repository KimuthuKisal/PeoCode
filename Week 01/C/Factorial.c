#include <stdio.h>

int Factorial( int );

int main()
{
  int n;
  scanf ("%d" , &n );
  printf("%d" , Factorial( n ) ) ;
}

int Factorial( int n )
{
  int result ;
  if ( n == 0 )
    result = 1 ;
  else
    result = n * Factorial( n-1 ) ;
  return( result ) ;
}