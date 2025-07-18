#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) v.begin(), v.end()
ll sum(const pair<string,array<ll,4>>&a) {
    ll sum = 0;
    for (int i = 0; i < 4; i++) {
        sum+=a.second[i];
    }
    return sum;
}
bool compare(const pair<string,array<ll,4>>&a,const pair<string,array<ll,4>>&b) {
    ll suma=sum(a);
    ll sumb=sum(b);
    if (suma != sumb)
        return suma > sumb;
    return a.first < b.first;
 
}
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n; cin>>n;
    vector<pair<string,array<ll,4 >>>v(n);
    for(ll i=0; i<n; i++) {
        cin>>v[i].first;
        for(ll j=0; j<4; j++) {
            cin>>v[i].second[j];
        }
    }
    sort(v.begin(),v.end(),compare);
    for (auto x : v) {
        cout<<x.first<<" "<<sum(x)<<" ";
        for (int j=0; j<4; j++) {
            cout<<x.second[j]<<" ";
        }
        cout<<endl;
    }
}
