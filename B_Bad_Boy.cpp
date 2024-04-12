#include<bits/stdc++.h>
using namespace std;
// #define long long ll

int main()
{   
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long a = n/3;
        if(n%3 == 0)
        {
            cout<<a<<" "<<a<<"\n";
        }
        else{

        cout<<a<<" "<<a+1<<"\n";
        }

    }

    
return 0;

};