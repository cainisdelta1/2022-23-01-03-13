#include <stdio.h>
#include <stdlib.h>

int sum(int a[], int len);

int main(void) {
  
  int size = -1;
  printf("how many numbers? ");
  scanf("%d", &size);
  int * a = malloc(size * sizeof(int)); // allocate enough mem for n integers
  
  if (a){
    for (int i = 0; i < size; i++) {
      int d = 0;
      printf("Number (0 to end): ");
      scanf("%d", &d);
      a[i] = d;
    }
    int total = sum(a, size);
    printf("%d\n", total);

    a = realloc(a, 2*sizeof(int));
    if (a)
    {
      a[size] = 99;
      a[size+1] = 100;
      for (int i = 0; i < (size+2); i++) printf("%d\n", a[i]);
      free(a);
    }
    
    
  }
  else{
    printf("ERROR: couldn't allocate memory\n");
  }
  
  
  /*
  int a[3] = {0};
  int i = -1;
  int count = 0;
  while (i != 0) {
    printf("Enter a number (0 to end): ");
    scanf("%d", &i);
    a[count++] = i;
  }
    for (int i = 0; i < count; i++)
      {
        printf("%d\n", a[i]);
      }*/

  /*
  int a[3] = {1,2,3};

  for (int i = 0; i < 3; i++) printf("%d\n", a[i]);

  a[4] = 4; // undefine behavior in c specification
  printf("%d\n", a[4]); */
  return 0;
}

int sum(int a[], int len)
{
  int total = 0;
  for (int i = 0; i < len; i++) total += a[i];
  return total;
  }