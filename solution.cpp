#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void power(ll a){
    vector<ll>y;
    ll p=a;
    while(p!=0){
        y.push_back(p%2);
        p=p/2;
    }
    ll b=2;
    ll ans=1;
    for(ll j=0;j<y.size();j++){
        if(y[j]==1){
            ans=(ans*b)%1000000007;
        }
        b=(b*b)%1000000007;
    }
    cout<<ans;
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n;
cin>>n;
ll a[n];
vector<ll> b;
for(ll i=0;i<n;i++){
    cin>>a[i];
    b.push_back(i+1);// we create array B
}
vector<ll> c;
while(b.size()!=0){
    int x=b[0]-1;// now we search for b[0]=1
    vector<ll>d;
    d.push_back(x);
    ll j;
    for(j=0;j<n;j++){
        if(a[j]==x+1){
            break;
        }
    }
    if(j!=x)
    d.push_back(j);// we psuh the element we find whose position1 will take
    ll y=j;
    while(x!=y){
        ll j;
        for(j=0;j<n;j++){
            if(a[j]==y+1){
                break;
            }
        }
        if(j!=x){
            d.push_back(j);// so we keep on finding the element of chain until we get
        }                  // the required element and pushing in that
        y=j;
    }
    c.push_back(d.size());
    for(ll u=0;u<d.size();u++){
        ll l;
        for(l=0;l<b.size();l++){
            if(b[l]==d[u]+1){
                break;
            }
        }
        b.erase(b.begin()+l);
    }
}
ll ans=1;
for(ll h=0;h<c.size();h++){
    ans=ans*c[h]/__gcd(ans,c[h]);
}

power(ans);
}