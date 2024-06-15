#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n;
    cin>>n;

    ll maxi=INT_MIN;
    ll ans;

    for(ll i=n-1;i>=1;i--){
        ll gcd=__gcd(n,i);
        if(gcd+i>=maxi){
            maxi=max(maxi,gcd+i);
            ans=i;
        }
    }

    cout<<ans<<endl;
    return;

}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}