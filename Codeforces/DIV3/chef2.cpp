#include <bits/stdc++.h>
using namespace std;

#define ff(n) for(int i = 0; i <n ; ++ i)

int main(){
    long long int t,n,k;
    cin>>t;
    while(t){
        int chds=0,chra=0;
        cin>>n>>k;
        int a[k];
        ff(k)
            cin>>a[i];
        sort(a,a+k);
        int p=0;
        if(k==0){
            if(n%2==0)
                cout<<"DRAW";
            else    
                cout<<"DS";
        }
        else{
            for(int i=1,j=1;i<=n;i++){
                if(j&1){
                    if(i==a[p]){
                        p++;
                        j=1;             
                        continue;
                    }
                    chds++;
                }
                else{
                    if(i==a[p]){
                        p++;
                        j=1;
                        continue;
                    }
                    chra++;
                }
                j++;
            } 
            if(chds>chra)
                cout<<"DS"<<endl;
            else    
                cout<<"RA"<<endl;
  
        }
        
        t--;    
    }
}