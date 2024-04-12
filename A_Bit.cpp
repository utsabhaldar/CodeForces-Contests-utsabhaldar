#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n=0;
    int t;
    cin>>t;
    string st;
    
    for(int i=0; i<t; i++){
        cin>>st;
        if(st == "++X" || st == "X++") n++;
        else n--;
    }

    cout<<n<<endl;

    return 0;
};