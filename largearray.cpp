#include <stdio.h>
int main() {
  int n;
  double arr[100];
  printf("Enter the number of elements : ");
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    printf("Enter number%d: ",i+1);
    scanf("%lf", &arr[i]);
  }

  
  for (int i = 1; i < n; i++) {
    if (arr[0] < arr[i]) {
      arr[0] = arr[i];
    }
  }

  printf(" The Largest element = %.2f", arr[0]);

  return 1;
}

