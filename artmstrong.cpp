#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int num, sum = 0, lastdigit;
    cin >> num;
    int original = num;
    while (num > 0)
    {
        lastdigit = num % 10;
        sum = pow(lastdigit, 3) + sum;
        num = num / 10;
    }
    if (sum == original)
    {
        cout << "armstrong!";
    }
    else
    {
        cout << "not armstrong!";
    }
    return 0;
}