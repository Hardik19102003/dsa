#include <stdio.h>
#include <math.h>

int Prime(int num);
int ArmStrong(int num);
int Perfect(int num);

int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);

    if (Prime(num))
        printf("%d is Prime \n", num);
    else
        printf("%d is not Prime \n", num);

    if (ArmStrong(num))
        printf("%d is Armstrong \n", num);
    else
        printf("%d is not Armstrong \n", num);

    if (Perfect(num))
        printf("%d is Perfect \n", num);
    else
        printf("%d is not Perfect \n", num);

    return 0;
}

int Prime(int num)
{
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i != 0)
        {
            return 1;
        }
    }

    return 0;
}

int ArmStrong(int num)
{
    int remainder, sum = 0, temp;
    temp = num;
    while (num > 0)
    {
        remainder = num % 10;
        sum = sum + (remainder * remainder * remainder);
        num = num / 10;
    }

    return (temp == sum);
}

int Perfect(int num)
{
    int i, sum, temp;
    sum = 0;
    temp = num;

    for (i = 1; i < temp; i++)
    {
        if (temp % i == 0)
        {
            sum += i;
        }
    }

    return (num == sum);
}