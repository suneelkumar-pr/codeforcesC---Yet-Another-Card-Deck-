#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,q;
    cin>>n>>q;
    int a[n+1];
    for(int i=1;i<=n;i++)
        cin>>a[i];
    int temp[51][1];
    for(int i=0;i<51;i++)
    {
        temp[i][0]=0;
    }
    
    for(int i=1;i<=n;i++)
    {
        if(temp[a[i]][0]==0)
          temp[a[i]][0] = i;
    }
   while(q--){
       int x;
       cin>>x;
       cout<<temp[x][0]<<" ";
       int tt= temp[x][0];
       
       for(int i=1;i<51;i++)
       {
            if(temp[i][0]<temp[x][0])
                 temp[i][0]++;
       }
       temp[x][0]=1;
   }
    return 0;
}