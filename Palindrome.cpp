#include <iostream>
using namespace std;
int main()
{
    int n, temp, rev = 0, rem;
    cout << "enter  a number ";
    cin >> n;
   temp = n ;

    while (n >0)
    {
        rem = n % 10;
        rev = (rev * 10) + rem;
        n = n / 10;
    };

    
    if (rev == temp)
    {
        cout << "this is a palindrome number ";
    }
    else
    {
        cout << "this is not palindrome number ";
    
    }
}