#define ll long long
class Solution {
public:
    vector<vector<string>> mostPopularCreator(vector<string>& creators, vector<string>& ids, vector<ll>& views) {
        map<string, ll> mp;
        map<string, map<string, ll>> mp1;
        for(ll i=0;i<creators.size();i++){
            mp[creators[i]]+=views[i];
            mp1[creators[i]][ids[i]]=views[i];
        }
        ll mx=ll_MIN;
        for(auto i:mp){
            mx=max(i.second, mx);
        }
        vector<string> v;
        for(auto i:mp) if(i.second==mx) v.push_back(i.first);
        vector<vector<string>> res;
        for(auto i:v){
            vector<string> temp;
            temp.push_back(i);
            ll m=ll_MIN;
            string k="";
            for(auto j:mp1[i]){
                cout<<"g";
                if(m<j.second) k=j.first, m=j.second;
            }
            temp.push_back(k);
            res.push_back(temp);
        }
        return res;
    }
};