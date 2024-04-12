#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int MASK=INT_MAX;
 
int main(){
    ll t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int answer=0;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        multiset<int>ms;
        for(int i:a){
            if(ms.find(MASK^i)!=ms.end()){answer++;ms.erase(ms.find(MASK^i));}
            else ms.insert(i);
        }
        cout<<answer+ms.size()<<endl;
    }
    return 0;
}