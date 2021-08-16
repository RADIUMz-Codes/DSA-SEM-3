#include <stdio.h>

#define endl printf("\n")

int isPrime(int n)
{

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    if (n > 1)
        return 1;
    return 0;
}

int isArmstrong(int n)
{
    int temp = n;
    int sum = 0;
    while (temp != 0)
    {
        int rem = temp % 10;
        sum += (rem * rem * rem);
        temp /= 10;
    }
    if (sum == n)
        return 1;
    else
        return 0;
}

int isPerfect(int n)
{
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    if (n == sum)
        return 1;
    else
        return 0;
}

int main()
{
    int n;
    printf("Enter a Number :");
    scanf("%d",&n);

    if (isPrime(n))
        printf("Prime");
    else
        printf("Not Prime");
    endl;

    if (isArmstrong(n))
        printf("Armstrong");

    else
        printf("Not Armstrong");
    endl;

    if (isPerfect(n))
        printf("Perfect");

    else
        printf("Not Perfect");
    endl;

    return 0;
}