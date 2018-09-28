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
        
        ll ar[n],s[n];
        
        for(ll j=0;j<n;j++)
            cin>>ar[j];
            
        ll ans[n]={0};
        
        for(ll j=0;j<n;j++)
        {
            ll f=j+1;
            ll r=j-1;
            ll ftemp=0;
            ll rtemp=0;
            
            while(ar[j]>=ftemp && f<n)
            {
                ans[f]++;
                ftemp+=ar[f];
                f++;
            }
            
            while(ar[j]>=rtemp && r>=0)
            {
                ans[r]++;
                rtemp+=ar[r];
                r--;
            }
        }
        
        for(ll j=0;j<n;j++)
        cout<<ans[j]<<" ";
        cout<<endl;
    }
} 