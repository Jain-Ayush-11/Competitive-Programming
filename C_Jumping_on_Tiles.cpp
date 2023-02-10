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
    string s; cin>>s;
    vector<pair<char, int>> r;
    int n=s.length();
    forn(i, n) {
        r.push_back(make_pair(s[i], i));
    }
    sort(r.begin(), r.end());
    int j, p, e;
    forn(i, n){
        if(r[i].first==s[0] || r[i].first==s[n-1]) { j=i, p=i; break; }
    }
    int f=0;
    // cout<<j<<endl;
    // cout<<(r[7].first==s[n-1])<<endl;
    if(r[j].first==s[0]){
        while(r[j+1].first<=s[n-1] && j+1<n){
            f+=abs(r[j].first-r[j+1].first);
            // e=j;
            j++;
        }
        cout<<f<<" "<<j-p+1<<endl;
        for(int i=p;i<=j;i++) cout<<r[i].second+1<<" ";
        // cout<<endl<<j<<endl;
        cout<<endl;
    }
    else{
        while(r[j+1].first<=s[0] && j+1<n){
            f+=abs(r[j].first-r[j+1].first);
            // e=j;
            j++;
        }
        cout<<f<<" "<<j-p+1<<endl;
        cout<<1<<" ";
        for(int i=j;i>=p;i--) if(r[i].second!=0 && r[i].second!=n-1) cout<<r[i].second+1<<" ";
        cout<<n<<endl;
        // if(r[p+1].first==r[p].first) cout<<r[p].second+1<<" "<<r[p+1].second+1;
        // else cout<<r[p+1].second+1<<" "<<r[p].second+1;
        // cout<<endl<<j<<endl;
        // cout<<r[p].second+1<<" "<<r[p+1].second+1;
        // cout<<endl;
    }
    // int l=-1, h=-1;
    // forn(i, n){
    //     if(r[i].first==s[0] && l==-1) l=i;
    //     if(r[i].first==s[n-1]){
    //         if(l==-1) { if(h==-1) h=i; }
    //         else h=i;
    //     }
    // }
    // int res=0;
    // vector<int> k;
    // // cout<<l<<" "<<h<<endl;
    // if(l>h){
    //     for(int i=l;i>=h;i--){
    //         k.pb(r[i].second+1);
    //     }
    //     if(r[l+1].first==r[l].first){
    //         // cout<<"gg";
    //         vector<int> t;
    //         t.push_back(1);
    //         // k.pop_back();
    //         for(int i=l+1;i<n;i++){
    //             // cout<<"gg";
    //             if(r[i].first!=r[l].first) break;
    //             t.pb(r[i].second+1);
    //         }
    //         forsn(i, 1, k.size()) t.pb(k[i]);
    //         k=t;
    //     }
    //     // forn(i, k.size()) cout<<k[i]<<" ";
    // }
    // else{
    //     forsn(i, l, h+1) k.pb(r[i].second+1);
    // }
    // if(l>h) swap(l, h);
    // forsn(i, l, h){
    //     res+=abs(r[i].first-r[i+1].first);
    // }
    // cout<<res<<" "<<k.size()<<endl;
    // forn(i, k.size()) cout<<k[i]<<" ";
    // cout<<endl;
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