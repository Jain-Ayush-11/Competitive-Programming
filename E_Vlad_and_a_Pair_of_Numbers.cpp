/*******************
    CodeForces:- _Stein_ 
    CodeChef:- stein_1103 
********************/
 
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long int
int MOD = 998244353;
double eps = 1e-12;
#define forn(i,e) for(int i = 0; i < e; i++)
#define forsn(i,s,e) for(int i = s; i < e; i++)
#define rforn(i,s) for(int i = s; i >= 0; i--)
#define rforsn(i,s,e) for(int i = s; i >= e; i--)
#define pb push_back
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
 
bool sortbysec(const pair<int,int> &a, const pair<int,int> &b)
{
    if(a.second==b.second)
        return a.first<b.first;
    return (a.second < b.second);
}

bool func(vector<int>& a, int n, int idx, int x, int y){
    if(idx==a.size()) {
        if((x+y)/2==n) { cout<<x<<" "<<y<<endl; return 1; }
        return 0;
    }
    if(a[idx]==1){
        bool p=func(a, n, idx+1, x+pow(2, idx), y);
        if(!p) func(a, n, idx+1, x, y+pow(2, idx));
    }
    else{
        bool p=func(a, n, idx+1, x, y);
        if(!p) func(a, n, idx+1, x+pow(2, idx), y+pow(2, idx));
    }
}

vector<int> decToBinary(int n)
{
    vector<int> binaryNum;
    int i = 0;
    while (n > 0) {
        binaryNum.push_back(n % 2);
        n = n / 2;
        i++;
    }
}

void solve(){
    int n; cin>>n;
    vector<int> a=decToBinary(n);
    reverse(a.begin(), a.end());
    for(auto i:a) cout<<i<<" "; 
    bool q=func(a, n, 0, 0, 0);
    if(!q) cout<<-1<<endl;
}

int32_t main()
{
    fast_cin();
    int t;
    cin >> t;
    for(int it=1;it<=t;it++) {
        solve();
    }
    return 0;
}