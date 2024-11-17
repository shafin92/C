#include <stdio.h>
int findHCF(int a, int b) 
{
    int temp;
    while (b!= 0) 
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
    int findLCM(int a, int b) 
{
    int hcf = findHCF(a, b);
    int lcm = (a * b) / hcf;
    return lcm;
}
int main() 

{
    int num1, num2;
    printf("Enter the first  and second number: ");

    scanf("%d %d", &num1,&num2);
    int lcm = findLCM(num1, num2);
    printf("The LCM of %d and %d is: %d\n", num1, num2, lcm);

    return 0;
}
