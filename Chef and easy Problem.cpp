#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    
    ll n,q;
    cin>>n>>q;
    
    ll a[n],bit[100001][31],bits[100001][31];
    
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        ll temp=a[i];
        
        for(ll j=30;j>=0;j--){
            if(temp>0){
            bit[i][j]=temp%2;
            temp=temp/2;
            }
            else
            bit[i][j]=0;
            
            if(i!=0)
            {
                bits[i][j]=bits[i-1][j]+bit[i][j];
            }
            else
            {
                bits[i][j]=bit[i][j];
            }
        }
    }
    
    /*
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<31;j++)
        {
            cout<<bit[i][j]<<" ";
        }
        cout<<endl;
    }
     cout<<endl;
      cout<<endl;
      
     for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<31;j++)
        {
            cout<<bits[i][j]<<" ";
        }
        cout<<endl;
    }
    */
    
    for(ll i=0;i<q;i++){
        ll l,r;
        
        cin>>l>>r;
        
        ll ans[31];
        
        for(ll j=0;j<31;j++){
            ll dif=bits[r-1][j]-bits[l-1][j]+bit[l-1][j];
            ll zero=r-l+1-dif;
            
            if(dif<zero)
            ans[j]=1;
            else
            ans[j]=0;
        }
        
        ll temp=0;
        for(ll k=30;k>=0;k--)
        temp+=ans[k]*pow(2,30-k);
        
        cout<<temp<<endl;
    }
}