
// //GOOD LUCK
// //    | |      |    Ķ
// //   (         |  Ķ
// //    | |      |Ķ     
// //       )     |  Ķ
// //    | |   •  |    Ķ

// //DATE: 09-12-2022 
// //TIME: 22-55-00 
// #include<bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define sq(a) (a)*(a)

// #define f first
// #define s second
// #define pb push_back
// #define mp make_pair

// #define forn(i, n) for (int i = 0; i < n; i++)
// //#define forn(i,n) for (const int &n : numbers)
// #define REP(i,a,b) for (int i = a; i <= b; i++)
// #define DEP(i, b, a) for (int i = b; i >= a; i--)

// int main(){
// ios_base::sync_with_stdio(0);
// cin.tie(0);  
// cout.tie(NULL); 

// int n;
// cin >> n;
// int arr[n];
// forn(i,n) 
// {
// cin>>arr[i];
// }
// // use auto it is better to use 
// auto  min = *min_element(arr,arr+n);
// auto max = *max_element(arr,arr+n);
// forn (i,n){
//     if(arr[i]== min ){
//         arr[i]= max;
//     }
//     else if(arr[i]== max){
//         arr[i]= min;
//     }
// }
// forn(i,n) 
// {
// cout<<arr[i]<<" ";
// }
// return 0;
// } 


// // ====================================================================


// GOOD LUCK
//     | |      |    Ķ
//    (         |  Ķ
//     | |      |Ķ
//        )     |  Ķ
//     | |   •  |    Ķ

// DATE: 09-12-2022
// TIME: 22-55-00
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define sq(a) (a) * (a)

#define f first
#define s second
#define pb push_back
#define mp make_pair

#define forn(i, n) for (int i = 0; i < n; i++)
// #define forn(i,n) for (const int &n : numbers)
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define DEP(i, b, a) for (int i = b; i >= a; i--)

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);

    int n;
    cin >> n;
    int arr[n];
    forn(i, n)
    {
        cin >> arr[i];
    }
    int d = *min_element(arr, arr + n);
    int itr = min_element(arr, arr + n);
    // cout << d << "\n";
    // cout << *itr << "\n";
    int e = *max_element(arr, arr + n);
    int it = max_element(arr, arr + n);
    // cout << e << "\n";
    // cout << *it << "\n";
    swap(*itr, *it); // the original array arr changed.
    // swap(itr, it);   // the original array arr remains unchanged.
    // swap(d, e); // the original array arr remains unchanged. only change value
    forn(i, n)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
// // ======================================================================
// // very very important revise time to time . 👀👀👀👀👀
// // ======================================================================
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(NULL);

//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int d = *min_element(arr, arr + n);
//     auto itr = min_element(arr, arr + n);
//     int e = *max_element(arr, arr + n);
//     auto it = max_element(arr, arr + n);

//     // // cout << "Before swapping (using local variables): ";
//     // // for (int i = 0; i < n; i++)
//     // // {
//     // //     cout << arr[i] << " ";
//     // // }
//     // // cout << endl;

//     // // swap(d, e); // don't effect of this 

//     // for (int i = 0; i < n; i++)
//     // {
//     //     if (arr[i] == d)
//     //     {
//     //         arr[i] = e;
//     //     }
//     //     else if (arr[i] == e)
//     //     {
//     //         arr[i] = d;
//     //     }
//     // }
   
//     // // cout << "After swapping (using local variables): ";
//     // for (int i = 0; i < n; i++)
//     // {
//     //     cout << arr[i] << " ";
//     // }
//     // cout << endl;
// // *****************************************************************
//     // // cout << "Before swapping (using iterators): ";
//     // for (int i = 0; i < n; i++)
//     // {
//     //     cout << arr[i] << " ";
//     // }
//     // cout << endl;

//     swap(*itr,*it);

//     // cout << "After swapping (using iterators): ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }
