#include <stdio.h>
int main()
{
    int i, sum = 0;

    for(i = 0; i <=10; i++)
    {
         sum += i;
     printf("%d ", i);    
    }
    printf("\nThe Sum is : %d\n", sum);

   
    return (0);
}