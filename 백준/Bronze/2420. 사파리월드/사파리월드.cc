#include <iostream>
using namespace std;

int main()
{
    long long n, m;
    cin >> n >> m;
    cout << (n > m ? n - m : m - n);
}