#include <stdio.h>
#include <stdlib.h>
#define N 10

float *remontee(float A[N][N], float B[N], int n)
{

  /******Implement the solution here******/
  /***************************************/
  
  /***************************************/
  return x;
}

float *gauss(float A[N][N] ,float B[N], int n)
{
  /******Implement the Gaussian elimination******/
  /**********************************************/
  

  /**********************************************/
  /*Resolve the system using the back substitution method*/
  /*You can use your solution of the exercice 1-b*/
  x = remontee(A, B, n);
  return(x);
}

int main()
{
  float   A[N][N], B[N];
  float   *x;
  int     n;

  printf("Enter the size of the matrix: ");
  scanf("%d", &n);

  /* Filling the matrix A */
  printf("Filling the matrix A\n");
  for(int i = 0; i < n; i++)
  {
    for(int j = 0; j < n; j++)
    {
      printf("A[%d][%d] = ", i, j);
      scanf("%f", &A[i][j]);
    }
  }

  /* Filling the vector B*/
  printf("Filling the matrix B\n");
  for (int i = 0; i < n; i++)
  {
    printf("B[%d] = ", i);
    scanf("%f", &B[i]);
  }

  /* The calculation of the result */
  x = gauss(A, B, n);

  /* Printing the results */
  printf("\nThe resulting vector: [");
  for (int i = 0; i < n; i++)
    printf("%f%c", x[i], ",]"[i == n - 1]);
}

