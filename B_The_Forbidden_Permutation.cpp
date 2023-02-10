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

void rotate(vector<int>& arr, int i, int e)
{
    int t=arr[i];
    while(i<e){
        arr[i]=arr[i+1];
        i++;
    }
    arr[e]=t;
}

void solve(){
    int n, m, d; cin>>n>>m>>d;
    vector<int> p(n), a(m);
    forn(i, n) cin>>p[i];
    forn(i, m) cin>>a[i];
    map<int, int> mp;
    int ans=0;
    forn(i, n) mp[p[i]]=i;
    forn(i, m-1){
        if(mp[a[i]]<mp[a[i+1]] && mp[a[i+1]]<=mp[a[i]]+d){
            int s=mp[a[i]], e=mp[a[i+1]];
            if(mp[a[i+1]]+mp[a[i]]+d-mp[a[i+1]]+1<=n-1){
                while(mp[a[i+1]]<=mp[a[i]]+d){
                    swap(mp[p[e]], mp[p[e+1]]);
                    swap(p[e], p[e+1]);
                    ans++;
                    e++;
                    if(e==n) break;
                }
            }
            else{
                int t=0;
                map<int, int> mp1=mp;
                vector<int> temp=p;
                while(s<e){
                    swap(mp[p[s]], mp[p[s+1]]);
                    swap(p[s], p[s+1]);
                    t++;
                    s++;
                }
                swap(p, temp), swap(mp, mp1);
                int t1=0;
                s=mp[a[i]], e=mp[a[i+1]];
                while(mp[a[i+1]]<=mp[a[i]]+d){
                    if(e<n){
                        swap(mp[p[e]], mp[p[e+1]]);
                        swap(p[e], p[e+1]);
                        t1++;
                        e++;
                    }
                    if(s>0){
                        swap(mp[p[s]], mp[p[s-1]]);
                        swap(p[s], p[s-1]);
                        t1++;
                        s--;
                    }
                    if(e==n && s==0) break;
                }
                if(mp[a[i+1]]<=mp[a[i]]+d || t1>t) { t1=INT_MAX; swap(p, temp), swap(mp, mp1); }
                ans+=min(t1, t);
            }
        }
    }
    cout<<ans<<endl;
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