#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
void FindPrimes(int a[], int n)
{
    for (int i = 2; i <= sqrt(n); ++i)
    {
        if (a[i] == 0)
        {
            for (int j = i + i; j <= n; j += i)
            {
                a[j] = 1;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;

    int a[201] = {1, 1}; // 1代表合数，0代表质数

    FindPrimes(a, 200);

    for (int i = 2; i <= 200; ++i)
    {
        if (a[i] == 0)
            cout << i << ' ';
    }

    return 0;
}