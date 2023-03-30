#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, m;
    cin >> n >> m;
    long long a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int b[m];
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    int z = 0;
    int counter = 0;
    for (int i = 0; i < n; i++)
    {
       
        if (a[i] == b[z])
        {
            counter++; // 2
            z++;       // 1
        }
    }
    // cout<<counter;
    if (counter == m)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}