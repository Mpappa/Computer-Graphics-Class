// Write program that takes as an input, a number in decimal ("regular") notation and outputs that same number but in binary
//2=10, 3=11. 4=100, etc.)
#include<iostream>
using namespace std; 

int main ()
{
    int num, bin;
    cout << "Enter a number in decimal form : ";
    cin >> num;
    cout << "The binary equivalent of " << num << " is ";
    while (num > 0)
    {
        bin = num % 2;
        cout << bin;
        num /= 2;
    }
    return 0;
}

