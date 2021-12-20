#include <bits/stdc++.h>
using namespace std;

#define ff(n) for(int i = 0; i <n ; ++ i)

int main(){
    int t,n;
    cin>>t;
    ff(t){
        cin>>n;
        if(n<4  || n%2!=0)
            cout<<-1<<endl;
        else if(n%2==0){
            int ans=(n/2)-1;
            cout<<ans<<endl;
        }
    }
    return 0;
}