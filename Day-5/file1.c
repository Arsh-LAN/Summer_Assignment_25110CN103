// Program to check whether a number is perfect or not <---

#include <stdio.h> 
int main()
{
    int n, r, i, sum=0; 
    printf("Enter a Number: ");
    scanf("%d", &n);
    for (i = 1; i <= (n - 1); i++)
    {
        r = n % i;
	if (r == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == n)
        printf("%d is perfect number", n);
    else
        printf("%d is not a perfect number", n);
    return 0;
}