#include <stdio.h>
#define N 10

int main()
{
  float A[N][N], B[N], X[N];
  int n;
  int i, j;
  float s;

  printf("Enter the size of the matrix: ");
  scanf("%d", &n);

  /* Filling the matrix A */
  printf("Filling the matrix A\n");
  for(i = 0; i < n; i++)
  {
    for(j = 0; j < n; j++)
    {
      printf("A[%d][%d] = ", i, j);
      scanf("%f", &A[i][j]);
    }
  }

  /* Filling the matrix B*/
  printf("Filling the matrix B\n");
  for (i = 0; i < n; i++)
  {
    printf("B[%d] = ", i);
    scanf("%f", &B[i]);
  }

  /*Apllying back substitution*/
  X[n - 1] = B[n - 1]/A[n - 1][n - 1];
  for(i=n-2;i>=0;i--)
  {
    s = 0;
    for(j=i+1;j<=n-1;j++)
      s += A[i][j] * X[j];
    X[i] = (B[i] - s)/A[i][i];
  }

  /* Printing the results */
  printf("\nThe resulting vector: [");
  for (i = 0; i < n; i++)
    printf("%f%c", X[i], ",]"[i == n - 1]);
}
