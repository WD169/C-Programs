#include <stdio.h> 
int main()
{
  int m, n, c, d, matrix[10][10];
 
  printf("Enter the number of rows and columns of a matrix\n");
  scanf("%d%d", &m, &n);
  printf("Enter elements of the matrix\n");
 
  for (c = 0; c < m; c++)
    for (d = 0; d < n; d++)
    {
    	 scanf("%d", &matrix[c][d]);
	}
      printf("The Matrix is:\n");
   for (c = 0; c < m; c++)
   {
   	for (d = 0; d < n; d++)
    {
    	 printf("%d\t", matrix[c][d]);
	}
	printf("\n");
   }
   return 0;
}
