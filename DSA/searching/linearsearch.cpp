#include <iostream>
using namespace std;
int main()
{
    int n, search, i;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "enter element to search:\n";
    cin >> search;
    for (int i = 0; i <= n - 1; i++)
    {
        if (a[i] == search)
        {
            cout << "element found at " << i << endl;
            exit(0);
        }
    }
    if (i > n)
    {
        cout << "element not found!" << endl;
    }

    return 0;
}