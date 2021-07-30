//time coplexity best case-O(N)

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int pass = 1;
    while (pass < n)
    {
        for (int i = 0; i <= n - pass; i++)
        {
            if (a[i + 1] < a[i])
            {
                int temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
        pass++;
    }
    cout << "sorted array\n";
    for (int i = 0; i < n; i++)
    {
        cout << a[i]<<" ";
    }
    return 0;
}
