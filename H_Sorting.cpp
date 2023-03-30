
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
// sort(arr,arr+n);
// forn(i,n) 
// {
// cout<<arr[i]<<" ";
// }

// return 0;
// } 

// =======================================================================


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const double PI = acos(-1.0);
const int N = 1e6;
ll frq[N];
ll pre[N];
int main()
{
    int tt;
    cin >> tt;
    int arr[tt];
    for (int i = 0; i < tt; i++)
    {
        cin >> arr[i];
    }
    int temp;
    for (int i = 0; i < tt; i++)
    {
        for (int j = i + 1; j < tt; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < tt; i++)
        cout << arr[i] << " ";
    return 0;
}