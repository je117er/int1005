#include <stdio.h>

int addIntegers(int a, int b);  //function prototype: used to declare a function, without a body to the compiler that this function may be used later

int main(void)
{
    int n1, n2, sum;

    printf("Enter two numbers: \n");
    scanf("%d%d", &n1, &n2);

    sum = addIntegers(n1, n2); // function call

    printf("The sum of two numbers is %d", sum);

    return 0;
}

int addIntegers(int a, int b)   //function statement
{
    int sum;

    sum = a + b;    

    return sum; // return statement
}
