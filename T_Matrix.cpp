#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int arr[size][size];
    for (int i = 0; i < size; i++)
    { // i = 1
        for (int z = 0; z < size; z++)
        { // 0 1 2 3 4
            cin >> arr[i][z];
        }
    }
    long long sum1 = 0;
    long long sum2 = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i == j)
            {
                sum1 += arr[i][j];
            }
            if (size - 1 - j == i)
            {
                sum2 += arr[i][j];
            }
        }
    }
    // cout<<abs(sum1) + abs(sum2)<<endl;
    cout << abs(sum1 - sum2) << endl;
}