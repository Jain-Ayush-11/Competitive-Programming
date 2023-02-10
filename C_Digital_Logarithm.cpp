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

void solve(){
    int n; cin>>n;
    vector<int> a(n), b(n);
    map<int, int> ma, mb;
    forn(i, n) { cin>>a[i]; ma[a[i]]++; }
    forn(i, n) { cin>>b[i]; mb[b[i]]++; }
    int c=0;

    forn(i, n){
        if(mb[a[i]]) mb[a[i]]--, ma[a[i]]--;
    }
    vector<int> v;
    forn(i, n) {
        if(ma[a[i]]) v.pb(a[i]);
        if(mb[b[i]]) v.pb(b[i]);
    }
    if(v.size()>0){
        map<int, int> mp;
        forn(i, v.size()) mp[v[i]]++;
        sort(v.begin(), v.end());
        forn(i, v.size()) cout<<v[i]<<" ";
        // cout<<mp[6]<<endl;
        // cout<<v.size();
        // cout<<int(log10(709259))+1;
        cout<<endl;
        rforn(i, v.size()-1) {
            if(v[i]!=1){
                // cout<<"gg";
                if(mp[int(log10(v[i]))+1]%2){
                    cout<<"1 ";
                    c++;
                    mp[int(log10(v[i]))+1]++;
                    mp[v[i]]--;
                }
                else if(mp[int(log10(v[i-1]))+1]==mp[int(log10(v[i]))+1]){
                    cout<<"2 ";
                    c+=2;
                    mp[int(log10(v[i-1]))+1]+=2;
                    mp[v[i]]--;
                    mp[v[i-1]]--;
                }
                else if(mp[int(log10(v[i-1]))+1]==0){
                    cout<<"3 ";
                    c+=2;
                    mp[1]++;
                    mp[v[i]]--;
                }
                // cout<<c<<endl;
            }
        }
        // cout<<int(log10(100))+1<<endl;
        // for(auto i:mp) cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<c<<endl;
}

int main()
{
    fast_cin();
    ll t;
    cin >> t;
    for(int it=1;it<=t;it++) {
        // cout<<it;
        solve();
    }
    return 0;
}