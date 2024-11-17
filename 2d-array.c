#include<stdio.h>
int main()
{
 int i,j;
 int A[3][4]={ {4,23,32,43} , {12,15,19,20} ,{13,25,26,27}    };

 for (i=0;i<3;i++)
 {
  
for (j= 0;j<4; j++)
{
  printf(" %d ",A[i][j]);
}
printf("\n");
 }
 
  
  return 0;
}
