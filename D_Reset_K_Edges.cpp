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
#define pb push_back
#define fi first
#define se second
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
    int n, k; cin>>n>>k;
    map<int, int> mp;
    vector<pair<int, int>> p(n-1);
    vector<int> h(n+1);
    forn(i, n-1) {
        int x; cin>>x;
        p[i]={x, i+2};
    }
    sort(p.begin(), p.end());
    h[1]=0;
    forsn(i, 0, n-1){
        h[p[i].second]=h[p[i].first]+1;
    }
    // forn(i, n+1) cout<<h[i];
    vector<pair<int, int>> height;
    forsn(i, 1, n+1){
        height.push_back(make_pair(h[i], i));
        mp[h[i]]++;
    }
    // forn(i, n) cout<<height[i].first<<" "<<height[i].second<<endl;
    sort(height.begin(), height.end());
    int mx_height=height[n-1].first;
    map<int, int>::reverse_iterator it;
    for(it=mp.rbegin(); it!=mp.rend();it++){
        if(it->first>1){
            if(it->second<=k) { k-=it->second; mx_height--; }
            else break;
        }
        else continue;
    }
    cout<<mx_height<<endl;
}

int main()
{
    fast_cin();
    ll t;
    cin >> t;
    for(int it=1;it<=t;it++) {
        solve();
    }
    return 0;
}