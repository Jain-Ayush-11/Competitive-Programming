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
 
bool sortbysec(const pair<ll,ll> &a, const pair<ll,ll> &b)
{
    if(a.first==b.first)
        return a.second>b.second;
    return (a.first < b.first);
}

void solve(){
    ll n, o=0; cin>>n;
    vector<ll> a(n);
    forn(i, n) { cin>>a[i]; if(a[i]==1) o++; }
    vector<ll> b(n);
    forn(i, n) cin>>b[i];
    vector<pair<ll, ll>> p(n);
    forn(i, n) { p[i]={a[i], b[i]}; }
    sort(p.begin(), p.end());
    ll dmg=0, e=n-o;
    vector<bool> visited(n);
    if(o>e){
        int j;
        forn(i, n) if(p[i].first==1) { j=i; break; }
        while(o>e){
            dmg+=p[j].second;
            visited[j]=1;
            j++;
            o--;
        }
    }
    else if(o<e){
        int j=0;
        // forn(i, n) if(p[i].first==1) { j=i; break; }
        while(e>o){
            dmg+=p[j].second;
            visited[j]=1;
            j++;
            e--;
        }
    }
    else{
        ll j;
        forn(i, n) if(p[i].first==1) { j=i; break; }
        if(p[0].second<p[j].second) { dmg+=p[0].second; visited[0]=1; }
        else { dmg+=p[j].second; visited[j]=1; }
    }
    forn(i, n){
        if(!visited[i]) dmg+=2*p[i].second;
    }
    cout<<dmg<<endl;
}

int main()
{
    fast_cin();
    ll t;
    cin >> t;
    for(ll it=1;it<=t;it++) {
        solve();
    }
    return 0;
}