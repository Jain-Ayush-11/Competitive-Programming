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

int func(int k, int c){
    if(k>=c){
        int n=k, f=0, s=0;
        while(n){
            // c++;
            if(n%10==4) f++;
            else if(n%10==7) s++;
            n/=10;
        }
        // cout<<k<<endl;
        return (s==f?k:INT64_MAX);
    }
    int p=func(k*100+44, c);
    int q=func(k*100+77, c);
    int r=func(k*100+47, c);
    int s=func(k*100+74, c);
    return min(s, min(r, min(p,q)));
}

int32_t main()
{
    fast_cin();
    int n; cin>>n;
    int k=n, c=0;
    while(n){
        c++;
        n/=10;
    }
    n=k;
    if(c&1){
        c++;
        forn(i, c/2) cout<<4;
        forn(i, c/2) cout<<7;
    }
    else{
        cout<<func(0, n);
    }
    return 0;
}