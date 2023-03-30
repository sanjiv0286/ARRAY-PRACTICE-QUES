//  important concept

// #include <bits/stdc++.h>
// using namespace std;

// int hsh[100000];

// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//         hsh[arr[i]]++;
//     }
//     for (int i = 0; i <= m; i++)
//     {
//         if (i > 0 && i <= m)
//             cout << hsh[i] << "\n";
//     }

//     return 0;
// }

// ==========================================================================
//  important 

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Read in the input
    int N, M;
    cin >> N >> M;
    vector<int> A(N);
    // Create the count array and initialize all elements to 0
    vector<int> count(M + 1, 0); // 6 element count {0,1,2,3,4,5,6}
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
        count[A[i]]++; // Count the number of times each element appears in A
    }

    // Print the count for each element
    for (int i = 1; i <= M; i++)
    {
        cout << count[i] << endl;
    }

    return 0;
}

// =======================================================

// *********revise concept*******************

// #include <iostream>
// #include <unordered_map>
 
// using namespace std;
 
// int main() {
//   // Read input
//   int n, m;
//   cin >> n >> m;
//   int a[n];
//   for (int i = 0; i < n; i++) {
//     cin >> a[i];
//   }
 
//   // Initialize a map to store the frequency of each number
//   unordered_map<int, int> frequency;
 
//   // Iterate through the array and count the frequency of each number
//   for (int i = 0; i < n; i++) {
//     if (frequency.count(a[i]) > 0) {
//       frequency[a[i]]++;
//     } else {
//       frequency[a[i]] = 1;
//     }
//   }
 
//   // Print the frequency of each number from 1 to m
//   for (int i = 1; i <= m; i++) {
//     if (frequency.count(i) > 0) {
//       cout << frequency[i] << endl;
//     } else {
//       cout << 0 << endl;
//     }
//   }
 
//   return 0;
// }