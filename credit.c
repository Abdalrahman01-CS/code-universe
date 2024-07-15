#include <cs50.h>
#include <stdio.h>
#include <math.h>

int digit(long credit_card);
int m_s(int l_digit);
int digit_no(long credit_card);
bool av(long credit_card, int numdig);
bool vmaster(long credit_card, int numdig);
bool vvisa(long credit_card, int numdig);

int main(void)
{
    long credit = get_long("Credit Card: ");
    int digit_sum = digit(credit);
    int numdig = digit_no(credit);
    bool amex = av(credit,numdig);
    bool mast = vmaster(credit,numdig);
    bool visa = vvisa(credit,numdig);

    if(digit_sum % 10 != 0)
    {
        printf("INVALID\n");
        return 1;
    }
    else if(amex == true)
    {
        printf("Amex\n");
    }
    else if(mast == true)
    {
        printf("Master Card\n");
    }
    else if(visa == true)
    {
        printf("Visa\n");
    }
    else
    {
        printf("INVALID\n");
    }

}

bool av(long credit_card, int numdig)
{
    int f_td = credit_card / pow(10,13);
    if((numdig == 15) && (f_td == 34 || f_td == 37))
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool vmaster(long credit_card, int numdig)
{
    int f_td = credit_card / pow(10,14);
    if((numdig == 16) && (f_td > 50 && f_td < 56))
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool vvisa(long credit_card, int numdig)
{
    if(numdig == 13)
    {
       int f_d = credit_card / pow(10,12);
       if(f_d == 4)
       {
          return true;
       }
    }
       else if(numdig == 16)
       {
               int f_d = credit_card / pow(10,15);
       if(f_d == 4)
       {
          return true;
       }

       }


           return false;

}



int digit_no(long credit_card)
{
    int coun = 0;
    while(credit_card > 0)
    {
        coun++;
        credit_card /= 10;
    }
    return coun;
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
        sum += proud;
        }
        else
        {
            int l_digit = credit_card % 10;
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

