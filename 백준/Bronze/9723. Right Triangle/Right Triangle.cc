#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int T;
    cin >> T;

    for (int i = 1; i <= T; i++)
    {
        int arr[3];
        cin >> arr[0] >> arr[1] >> arr[2];

        sort(arr, arr + 3);

        cout << "Case #" << i << ": ";
        if (arr[0] * arr[0] + arr[1] * arr[1] == arr[2] * arr[2])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}