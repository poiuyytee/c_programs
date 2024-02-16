#include <stdio.h>
int sumOfDigits(int num)
{
    while (num > 9) 
    {
        int sum = 0;
        while (num != 0)
        {
            sum += num % 10;
            num /= 10;
        }
        num = sum;
    }
    return num;
}
int main() 
{
    int number;
    scanf("%d", &number);
    int result = sumOfDigits(number);
    printf("%d\n", result);
    return 0;
}
