#include <stdio.h>
#include <stdlib.h>

int isArmstrong(int num);
void printArmstrongs(int lowerLimit, int upperLimit);

int main()
{
    int lowerLimit, upperLimit;

    printf("Gib die untere und obere Grenze ein, um Armstrong-Zahlen zu zeigen: \n");
    if (scanf("%d %d", &lowerLimit, &upperLimit) != 2)
    {
        printf("Ungültige Eingabe. Bitte zwei ganze Zahlen eingeben.\n");
        return 1;
    }

    if (lowerLimit > upperLimit)
    {
        int temp = lowerLimit;
        lowerLimit = upperLimit;
        upperLimit = temp;
    }

    printArmstrongs(lowerLimit, upperLimit);

    return 0;
}

void printArmstrongs(int lowerLimit, int upperLimit)
{
    printf("Armstrong-Zahlen zwischen %d und %d:\n", lowerLimit, upperLimit);
    for (int num = lowerLimit; num <= upperLimit; num++)
    {
        if (isArmstrong(num))
        {
            printf("%d\n", num);
        }
    }
}

int isArmstrong(int num)
{
    int original = num;
    int sum = 0;
    int digits = 0;
    int temp = num;

    if (num == 0)
    {
        return 1;
    }

    if (num < 0)
    {
        return 0;
    }

    while (temp > 0)
    {
        digits++;
        temp /= 10;
    }

    temp = num;
    while (temp > 0)
    {
        int digit = temp % 10;
        int power = 1;
        for (int i = 0; i < digits; i++)
        {
            power *= digit;
        }
        sum += power;
        temp /= 10;
    }

    return sum == original;
}
