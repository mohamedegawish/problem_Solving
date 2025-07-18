#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) v.begin(), v.end()
bool compare(const pair<string,ll>&a,const pair<string,ll>&b) {
    if (a.second != b.second)
        return a.second > b.second;
    return a.first < b.first;
}
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n; cin>>n;
    vector<pair<string,ll>>v(n);
    for(ll i=0; i<n; i++) {
        cin>>v[i].first>>v[i].second;
    }
    sort(v.begin(),v.end(),compare);
    for (auto x : v) {
        cout<<x.first<<" "<<x.second<<"\n";
    }
}
