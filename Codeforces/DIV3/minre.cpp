#include <bits/stdc++.h>
using namespace std;
int main() {
    int t=-1,n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) 
       cin>>a[i];
    set<int> s;
    for(int i=n-1;i>=0;i--){
        if(s.find(a[i])!=s.end()){
            t=i;
        }
        else
            s.insert(a[i]);
    }
    // for(auto &as : s){
    //     cout<<as<<" ";
    // }

    if(t!=-1)
        cout<<a[t];
    else
        cout<<"No";
}