#include <iostream>
using namespace std;

int main()
{
    int t;
    int a[50],b[50];
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> a[i];
        cin >> b[i];
    }
    for (int j = 0; j < 1; j++)
    {
        if (a[i] > b[i])
        {
            int l = a[i] - b[i];
            cout << j + 1 << " " << l;
        }
        else
        {
            cout << j + 2 << " " << b[i] - a[i];
        }
    }
    return 0;
}
