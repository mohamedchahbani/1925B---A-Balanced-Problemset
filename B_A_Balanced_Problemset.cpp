#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long int ans=1,newf, f,x,n,left;
    cin>>x>>n;
    for(f=1;f*f<=x;f++){
        if(x%f==0){
            left=x-f*n;
            if((left>=0) && (left%f==0)){
                ans=max(ans,f);
            }
            if(x/f != f){
                newf=x/f;
                left=x-newf*n;
                if(left>=0 && left%newf==0){
                    ans=max(ans,newf);
                }
            }
        }
    }
    cout<<ans<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}