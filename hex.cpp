#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
int main ()
{
    char num[20];
    int i, r, len, hex = 0;
    cout << "Enter a hexadecimal number : ";
    cin >> num;
    len = strlen(num);
    for (i = 0; num[i] != '\0'; i++)
    {
        len--;
        if(num[i] >= '0' && num[i] <= '9')
            r = num[i] - 48;
        else if(num[i] >= 'a' && num[i] <= 'f')
                r = num[i] - 87;
             else if(num[i] >= 'A' && num[i] <= 'F')
                    r = num[i] - 55;
        hex += r * pow(16,len);
    }
    cout << "\nDecimal equivalent of " << num << " is : " << hex;
    return 0;
}
