#include <stdio.h>
#include <conio.h>
 main()
{
    int num, temp, remainder, reverse;
    printf("Enter an integer \n");
    scanf("%d", &num);
    temp = num;
    while (temp > 0)
    {
        remainder = temp % 10;
        reverse = reverse * 10 + remainder;
        temp =temp/10;
    }
    if (num == reverse)
        printf("Number is a palindrome \n");
    else
        printf("Number is not a palindrome \n");
}




