#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long long arr[91] = {};
    arr[1] = 1;
    arr[2] = 1;

    for (int i = 3; i <= n; i++)
        arr[i] = arr[i - 1] + arr[i - 2];

    cout << arr[n];
}