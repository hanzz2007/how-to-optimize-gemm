#include <stdio.h>

#define A( i, j ) a[ (i)*lda + (j) ]

void print_matrix( int m, int n, float *a, int lda )
{
  int i, j;

  for ( j=0; j<n; j++ ){
    for ( i=0; i<m; i++ )
      printf("%le ", A( i,j ) );
    printf("\n");
  }
  printf("\n");
}

