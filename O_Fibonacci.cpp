#include <iostream>

using namespace std;

int fib(int n)
{
    if (n == 1)
    {
        return 0;
    }
    else if (n == 2)
    {
        return 1;
    }
    else
    {
        return fib(n - 1) + fib(n - 2);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    int n;
    cin >> n;

    int result = fib(n);
    cout << result << endl;

    return 0;
}
// =========================================================================
