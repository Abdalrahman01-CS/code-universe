#include <cs50.h>
#include <stdio.h>
int digit(long credit_card);
int m_s(int l_digit);

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
        int proud = m_s(l_digit);
        sum += l_digit;
        }
        alt_digit = ! alt_digit;
        credit_card/=10;
    }
    return sum;
}

int m_s(int l_digit)
{
   int multiply = l_digit * 2;
   int sum = 0;
   while(multiply > 0)
   {
    int l_d_m = multiply % 10;
    sum += l_d_m;
    multiply /= 10;
   }
   return sum;
}

