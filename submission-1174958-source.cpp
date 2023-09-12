#include <bits/stdc++.h>
using namespace std;
int abs1(int x){
if(x<0)
    return x*(-1);
else
    return x;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int k=0;
    for(int i=0;i<n;i++){
            int c=0;
            for(int j=2;j<a[i];j++){
                if(a[i]%j==0)
                {

                    c=1;
                    break;
                }
            }
            if(a[i]!=1&&c==0){
                k+=1;
            }


    }

    int k1;
    k1=abs1(n-k);
    if(n==k){
        cout<<k/2;
    }
    else if(k==0)
        cout<<k;
else if(k<k1)
    cout<<k;
else{
    int d=k1+(k-k1)/2;
    cout<<d;
}

return 0;
}
