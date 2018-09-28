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
        ll a[n],b[n];
        ll front=0,back=0;
        
        for(ll j=0;j<n;j++)
        cin>>a[j];
        
        for(ll j=0;j<n;j++)
            cin>>b[j];
            
        for(ll j=0;j<n;j++)
        {
            if(a[j]>b[j])
            {
                front=-1;
            }
            if(a[j]>b[n-j-1])
            {
                back=-1;
            }
        }
        
        if(front==0 && back==0)
        cout<<"both"<<endl;
        else if(front==0)
        cout<<"front"<<endl;
        else if(back==0)
        cout<<"back"<<endl;
        else 
        cout<<"none"<<endl;
    }
}
