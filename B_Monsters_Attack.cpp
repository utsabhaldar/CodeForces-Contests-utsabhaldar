#include<bits/stdc++.h>
using namespace std;
#define ll long long

void func(){
    int n,k;
    cin>>n>>k;

    vector<ll> v(n),x(n);
    for(ll &i:v) cin>>i;
    vector<ll> put(n+1,0);
    for(ll i=0;i<n; i++){
        cin>>x[i];
        put[abs(x[i])] += v[i];
    }

    ll tmp = k;
    for(ll i=1; i<=n; i++){
        if(tmp<put[i]){
            cout<<"No"<<endl;
            return;
        }
        tmp-=put[i];
        tmp+=k;
    }
    cout<<"Yes"<<endl;
}

int main() {
    ll t;
    cin >> t;
    while (t--) {
        func();
    }
    return 0;
}
