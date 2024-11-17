#include<stdio.h>
int main()
{

  int array1[30]={10,5,25,4,50},array2[30],i;
  printf("array1 : ");
  for (i=0;i<5; i++)
  {
    printf("%d",array1[i]);
  }
  for (i=0;i<5; i++)
  {
    printf("array2[i] = array1[i]");
  }
    printf("\n array2 : ");
  for (i=0;i<5; i++)
  {
    printf("%d",array2[i]);
  }
  
  
  return 0;
}
