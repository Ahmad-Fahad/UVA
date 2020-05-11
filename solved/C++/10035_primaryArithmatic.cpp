
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int c = 0,carry = 0,number1 = 0,number2 =  0,reminder1  = 0,reminder2 = 0,reminderSum = 0;
    while(1)
    {
        scanf("%lld %lld",&number1,&number2);
        if(number1 == 0 && number2 == 0)
        {
            break;
        }
        else
        {
            if(number1 >= number2)
            {
                while(number1 != 0)
                {
                    reminder1   = number1 % 10;
                    reminder2   = number2 % 10;
                    reminderSum = reminder1 + reminder2 + carry;
                    if(reminderSum >= 10)
                    {
                        c++;
                        carry = 1;
                    }
                    else
                    {
                        carry = 0;
                    }
                    number1 = number1 / 10;
                    number2 = number2 / 10;
                }
            }
            else
            {
                while(number2 != 0)
                {
                    reminder1   = number1 % 10;
                    reminder2   = number2 % 10;
                    reminderSum = reminder1 + reminder2 + carry;
                    carry = 0;
                    if(reminderSum >= 10)
                    {
                        c++;
                        carry = 1;
                    }
                   else
                   {
                       carry = 0;
                   }
                    number1 = number1 / 10;
                    number2 = number2 / 10;
                }
            }

        }
        if(c == 0)
        {
            printf("No carry operation.\n");
        }
        else if(c == 1)
        {
            printf("1 carry operation.\n");
        }
        else
        {
            printf("%lld carry operations.\n",c);
        }
        c = 0;
        carry = 0;
    }
    return 0;
}
