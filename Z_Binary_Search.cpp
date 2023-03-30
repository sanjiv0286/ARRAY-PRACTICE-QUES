// ****************** TLE *********************

// #include <bits/stdc++.h>
// using namespace std;

// #define forn(i, n) for (int i = 0; i < n; i++)


// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(NULL);

//     int n;
//     int m;
//     cin >> n >> m;
//     int arr[n];
//     forn(i, n)
//     {
//         cin >> arr[i];
//     }

//     while (m--)
//     {
//         int x;
//         cin >> x;
//         int ct = 0;
//         forn(i, n)
//         {
//             if (arr[i] == x)
//             {
//                 cout<<"found"<<endl;
//                 break;
//             }
//         }
     
//     }
//  cout << "not found"
//                  << "\n";
//     return 0;
// }


// ****************** TLE ******************************
// // // DATE: 09-12-2022
// // // TIME: 22-55-00
// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define sq(a) (a) * (a)

// #define forn(i, n) for (int i = 0; i < n; i++)

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(NULL);

//     int n;
//     int m;
//     cin >> n >> m;
//     int arr[n];
//     forn(i, n)
//     {
//         cin >> arr[i];
//     }

//     while (m--)
//     {
//         int x;
//         cin >> x;
//         int ct = 0;
//         forn(i, n)
//         {
//             if (arr[i] == x)
//             {
//                 ct++;
//             }
//         }
//         // cout << ct << "\n";
//         if (ct > 0)
//         {
//             cout << "found"
//                  << "\n";
//         }
//         else
//         {
//             cout << "not found"
//                  << "\n";
//         }
//     }

//     return 0;
// }
// ****************** Runtime error *********************
// //DATE: 18-03-2023 
// //TIME: 14-01-30 
// #include<bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define sq(a) (a)*(a)
// #define all(a) a.begin(), a.end()

// #define f first
// #define s second
// #define pb push_back
// #define mp make_pair

// #define forn(i, n) for (int i = 0; i < n; i++)
// //#define forn(i,n) for (const int &n : numbers)
// #define rep(i,a,b) for (int i = a; i <= b; i++)
// #define dep(i, b, a) for (int i = b; i >= a; i--)

// const double PI = 3.14;
// //extern int x;


// const int N = 1e7 + 10;
// int hsh[N];

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(NULL);
//     int ct;
//     int n;
//     cin >> n;
//     int arr[n];
//     forn(i, n)
//     {
//         cin >> arr[i];
//         hsh[arr[i]]++;
//     }
//     int q;
//     cin >> q;
//     while (q--)
//     {
//         int x;
//         cin >> x;
//         if(hsh[x]>0){
//         cout<<"found"<<"\n";
//         }

//     }
    
//         cout<<"not found"<<"\n";
//     return 0;

//     }

// ======================= using set : pass ====================================

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// int main()
// {
//     ll n, m;
//     cin >> n >> m;
//     set<ll> s;
//     for (ll i = 0; i < n; i++)
//     {
//         ll y;
//         cin >> y;
//         s.insert(y);
//     }

//     while (m--)
//     {
//         ll x;
//         cin >> x;

//         if (s.find(x) != s.end())
//         {
//             cout << "found";
//         }
//         else
//         {
//             cout << "not found";
//         }

//         cout << endl;
//     }
// }

// ======== Using map : pass == only int , int the , string me nhi hota ===================

// #include <iostream>
// #include <map>
// using namespace std;

// int main() {
//     int n, q;
//     cin >> n >> q;
//     map<int, bool> mp;
//     for (int i = 0; i < n; i++) {
//         int x;
//         cin >> x;
//         mp[x] = true;
//     }
//     for (int i = 0; i < q; i++) {
//         int x;
//         cin >> x;
//         if (mp[x]==true) {
//             cout << "found" << endl;
//         } else {
//             cout << "not found" << endl;
//         }
//     }
//     return 0;
// }


// ===================== Binary Search : wrong output ==============================

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);

    int n;
    int m;
    cin >> n >> m;
    vector<int>arr(n);
    // int arr[n];
    forn(i, n)
    {
        // cin >> arr[i];
        int a;
        cin>>a;
        arr.push_back(a);
    }

    while (m--)
    {
        int x;
        cin >> x;       
        bool flag = false;
        if(binary_search(arr.begin(),arr.end(),x)){
            flag =true;
        }
        if (flag == true)
        {
            cout << "found"
                 << "\n";
        }
        else
        {
            cout << "not found"
                 << "\n";
        }
    }

    return 0;
}