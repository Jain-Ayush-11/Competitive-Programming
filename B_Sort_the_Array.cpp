/*******************
    CodeForces:- Ayush_J 
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

void solve(){
}

void reverse(vector<int> &a, int l, int h){
    while(l<h){
        swap(a[l], a[h]); l++, h--;
    }
}

int32_t main()
{
    fast_cin();
    int n; cin>>n;
    vector<int> a(n);
    forn(i, n) cin>>a[i];
    vector<int> b=a;
    sort(b.begin(), b.end());
    int l=n-1, h=0;
    forn(i, n){
        if(a[i]!=b[i]) { l=i; break; }
    }
    rforn(i, n-1){
        if(a[i]!=b[i]) { h=i; break; }
    }
    reverse(a, l, h);
    forsn(i, 1, n) {
        if(a[i]<a[i-1]) { cout<<"no"; return 0; }
    }
    cout<<"yes"<<endl;
    (l<=h?cout<<l+1<<" "<<h+1:cout<<1<<" "<<1<<endl);
    return 0;
}