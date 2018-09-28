#include <bits/stdc++.h>
using namespace std;

typedef long double ll;


int main() {
    
    long long t;
    cin>>t;
    
    for(long long i=0;i<t;i++)
    {
        long long n;
        cin>>n;
        
        ll ar[n][3];
        
        for(long long j=0;j<n;j++)
            cin>>ar[j][0]>>ar[j][1]>>ar[j][2];
        ll loss=0;
        
        for(long long j=0;j<n;j++)
        {
            ll temp=ar[j][0]+ar[j][0]*ar[j][2]*0.01;
            temp-=temp*ar[j][2]*0.01;
            temp-=ar[j][0];
            loss-=temp*ar[j][1];
        }
        
        printf("%0.9llf\n",loss);
    }
}
