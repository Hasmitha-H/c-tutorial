#include <iostream>
using namespace std;
int main()
{
    int n, key, first, last, i;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "enter element to search:\n";
    cin >> key;
    first = 0;
    last = n - 1;
    while (first <= last)
    {
        int mid = (first + last) / 2;
        if (key == a[mid])
        {
            cout << "element found at" << mid << endl;
            break;
        }
        else if (a[mid] < key)
        {
            first = mid + 1;
        }
        else
        {
            last = mid - 1;
        }
    }
    if (first > last)
    {
        cout << "element not found" << endl;
    }
    return 0;
}