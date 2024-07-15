#include <cs50.h>
#include <stdio.h>
int digit(long credit_card);
int main(void)
{
    long credit = get_long("Credit Card: ");
    int digit_sum = 

}
int digit(long credit_card)
{
    int sum = 0;
    while(credit_card > 0)
    {
        int l_digit = credit_card % 10;
        credit_card/=10;
    }
    return sum;
}

