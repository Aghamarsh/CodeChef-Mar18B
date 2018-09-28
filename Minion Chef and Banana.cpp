#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;

int main() {
    
    ll t;
    cin>>t;
    
    for(ll i=0;i<t;i++)
    {
        ll n,h;
        cin>>n>>h;
        
        ll ar[n];
        
        cin>>ar[0];
        ll max=ar[0];
        
        for(ll j=1;j<n;j++){
        cin>>ar[j];    
        
        if(ar[j]>max)
        max=ar[j];
        }
        ll flag=0;
        ll start =1,stop=max;
        ll ans=max;
        
        while(start<stop)
        {
            if(stop-start>1)
            {
                ll k=(start+stop)/2;
                ll hrs=0;
 
                for(ll m=0;m<n;m++)
                {
                    hrs=hrs+ar[m]/k;
                    if(ar[m]%k>0)
                    hrs++;
                }
                
                if(hrs>h)
                {
                    start=k;
                }
                else if(hrs<=h)
                {
                    stop=k;
                }
            }
            else
            {
                ll hrs=0;
                ll k=start;
                for(ll m=0;m<n;m++)
                {
                    hrs=hrs+ar[m]/k;
                    if(ar[m]%k>0)
                    hrs++;
                }
                if(hrs==h)
                {
                    ans=k;
                    break;
                }
                else
                {
                    ans=stop;
                    break;
                }
            }
        }
        
        cout<<ans<<endl;
    }
} 