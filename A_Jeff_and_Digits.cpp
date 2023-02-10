/*******************
    CodeForces:- Ayush_J 
    CodeChef:- stein_1103 
********************/
 
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
 
bool sortbysec(const pair<int,int> &a, const pair<int,int> &b)
{
    if(a.second==b.second)
        return a.first<b.first;
    return (a.second < b.second);
}

int main()
{
    fast_cin();
    int n; cin>>n;
    vector<int> a(n);
    int s=0, z=0;
    forn(i, n) {
        cin>>a[i];
        if(a[i]==0) z++;
        s+=a[i];
    }
    sort(a.begin(), a.end());
    int f=n-z;
    if(s<9){
        cout<<(z?0:-1);
    }
    else{
        // if(s%9==0 ) rforn(i, n-1) cout<<a[i];
        // else {
        if(z>0){
            while(s%9!=0 && f>0){
                s-=5;
                f--;
                // z++;
            }
        if(f==0) { cout<<(z?0:-1); return 0; }
        // cout<<f+z<<endl;
            forn(i, f) cout<<5;
            forn(i, z) cout<<0;
        }
        else cout<<-1;
        // }
    }
    return 0;
}