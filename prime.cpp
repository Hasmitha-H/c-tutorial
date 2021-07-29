#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number to check if prime or not :" << endl;
    cin >> n;
    int isprime = 1;
    for (int i = 2; i * i <= n; i++)
    {

        if (n % i == 0)
        {
            isprime = 0;
        }
    }

    if (isprime)
    {
        cout << "number is prime" << endl;
    }
    else
    {

        cout << "number not prime" << endl;
    }
    return 0;
}