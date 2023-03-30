
//GOOD LUCK
//    | |      |    Ķ
//   (         |  Ķ
//    | |      |Ķ     
//       )     |  Ķ
//    | |   •  |    Ķ

//DATE: 09-12-2022 
//TIME: 22-55-00 
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sq(a) (a)*(a)

#define f first
#define s second
#define pb push_back
#define mp make_pair

#define forn(i, n) for (ll i = 0; i < n; i++)
//#define forn(i,n) for (const ll &n : numbers)
#define REP(i,a,b) for (ll i = a; i <= b; i++)
#define DEP(i, b, a) for (ll i = b; i >= a; i--)

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);  
cout.tie(NULL); 

ll n;
cin >> n;
ll arr[n];
ll sum =0;
forn(i,n) 
{
cin>>arr[i];
sum+=arr[i];
}
cout<<abs(sum)<<"\n";
return 0;
} 