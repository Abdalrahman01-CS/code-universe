#include <cs50.h>
#include <stdio.h>
int digit(long credit_card);
int main(void)
{
    long credit = get_long("Credit Card: ");
    int digit_sum = digit(credit);

}

int digit(long credit_card)
{
    int sum = 0;
    bool alt_digit = false;
    while(credit_card > 0)
    {
        if(alt_digit == true)
        {
        int l_digit = credit_card % 10;
        sum += l_digit;
        }
        alt_digit = ! alt_digit;
        credit_card/=10;
    }
    return sum;
}

