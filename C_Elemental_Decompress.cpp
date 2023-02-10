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
    vector<pair<int, int>> a(n);
    bool b=1;
    unordered_map<int, int> mp;
    forn(i, n) {
        int x; cin>>x;
        // cin>>a[i];
        mp[x]++;
        if(mp[x]>2) b=0;
        a[i]={x, i};
    }
    if(mp[1]>1 || mp[n]==0) b=0;
    if(n==1){
        if(a[0].first!=1) cout<<"NO\n";
        else cout<<"YES\n1\n1\n";
        return;
    }
    if(n==2){
        if(a[0].first==2 && a[1].first==2) cout<<"YES\n1 2\n2 1\n";
        else if(!((a[0].first==1 && a[1].first==2) || (a[0].first==2 && a[1].first==1))) cout<<"NO"<<endl;
        else if(a[0].first==1 && a[1].first==2) cout<<"YES\n1 2\n1 2\n";
        else cout<<"YES\n2 1\n2 1\n";
        return;
    }
    sort(a.begin(), a.end());
    forn(i, n){
        if(a[i].first<i+1) { b=0; break; }
    }
    if(!b) cout<<"NO"<<endl;
    else{
        mp.clear();
        vector<int> p(n), q(n), x(n), y(n);
        rforn(i, n-1){
            mp[a[i].first]++;
            if(a[i].first==1) p[a[i].second]=q[a[i].second]=1;
            if(mp[a[i].first]==1) p[a[i].second]=a[i].first;
            else q[a[i].second]=a[i].first;
        }
        set<int> s;
        forn(i, n) s.insert(i+1);
        forn(i, n){
            if(s.count(q[i])) s.erase(q[i]);
        }
        // for(auto i:s) cout<<i;
        // cout<<endl;
        auto it=s.end();
        rforn(i, n-1){
            if(p[a[i].second] && q[a[i].second]==0){
                q[a[i].second]=(*(--it));
            }
        }
        s.clear();
        forn(i, n) s.insert(i+1);
        forn(i, n){
            if(s.count(p[i])) s.erase(p[i]);
        }
        it=s.end();
        rforn(i, n-1){
            if(q[a[i].second] && p[a[i].second]==0){
                p[a[i].second]=(*(--it));
            }
        }
        cout<<"YES\n";
        forn(i, n) cout<<p[i]<<" ";
        cout<<endl;
        forn(i, n) cout<<q[i]<<" ";
        cout<<endl;
    }
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