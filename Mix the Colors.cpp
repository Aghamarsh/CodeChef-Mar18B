#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


int main() {
    
    ll t;
    cin>>t;
    
    for(ll i=0;i<t;i++)
    {
        ll n;
        cin>>n;
        
        ll ar[n]={0};
        
        for(ll j=0;j<n;j++)
        cin>>ar[j];
        
        sort(ar,ar+n);
        ll count=0;
        
        for(ll j=1;j<n;j++)
        {
            if(ar[j]==ar[j-1])
            count++;
        }
        
        cout<<count<<endl;
    }
}
