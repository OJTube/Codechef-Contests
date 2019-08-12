#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

    int t;
    cin>>t;

    for(int tt=0;tt<t;tt++){
        int n;
        cin>>n;
        ll ans[n];
        memset(ans,0,sizeof(ans));
        ll a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            ans[i]+=a[i]*20;
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
            ans[i]-=b[i]*10;
        }
        ll mx=0;
        for(int i=0;i<n;i++){
            mx = max(mx,max(ans[i],0LL));
        }
        cout<<mx<<"\n";
    }
}
