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

void solve(){
    int n; cin>>n;
    vector<vector<int>> a(n, vector<int>(n-1));
    map<pair<int, int>, int> mp;
    map<int, int> mp1;
    forn(i, n){
        forn(j, n-1){
            cin>>a[i][j];
            // mp[{a[i][j], j}]++;
            // s.erase(a[i][j]);
        }
        // mp1[*s.begin()]=i;
    }
    forn(i, n){
        forsn(j, 1, n-1){
            mp[{a[i][j], a[i][j-1]}]++;
        }
    }
    if(n==3){
        for(auto i:mp) {
            // cout<<i.first.first<<" "<<i.first.second<<" "<<i.second<<endl;
            if(i.second==n-2) mp1[i.first.first]++;
        }
        set<int> s;
        s.insert(1);
        s.insert(2);
        s.insert(3);
        for(auto i:mp1) if(i.second==1) {
            for(auto j:mp) {
                if(j.first.first==i.first) {
                    cout<<j.first.second<<" "<<j.first.first<<" ";
                    s.erase(j.first.first);
                    s.erase(j.first.second);
                    cout<<(*(s.begin()))<<endl;
                    return;
                }
            }
        }
        // return;
    }
    // vector<int> res(n);
    for(auto i:mp) {
        // cout<<i.first.first<<" "<<i.first.second<<" "<<i.second<<endl;
        if(i.second==n-2) mp1[i.first.second]=i.first.first;
    }
    set<int> s;
    forn(i, n) s.insert(i+1);
    for(auto i:mp1) s.erase(i.second);
    // cout<<(*s.begin())<<" ";
    int b=(*s.begin());
    s.clear();
    forn(i, n) s.insert(i+1);
    while(mp1[b]!=0){
        cout<<b<<" ";
        s.erase(b);
        b=mp1[b];
    }
    cout<<(*s.begin())<<" ";
    // forn(i, n) cout<<res[i]<<" ";
    cout<<endl;
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