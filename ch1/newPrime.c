#include <stdio.h>
#include <math.h>

int main()
{
    int n, flag = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    if ((n < 2) || (n % 2 == 0))
        flag = 1;
    else if (n == 2)
        flag = 0;
    else {
        for (int i = 3; i <= round(sqrt(n)); i+=2) {
            if (n % i == 0)
                flag = 1;
                break;
        }
    }

    if (flag == 1)
        printf("%d is not a prime", n);
    else if (flag == 0)
        printf("%d is a prime", n);
    
    return 0;
}
