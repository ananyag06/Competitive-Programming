#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n==2 || n==3){          // if(n<=3) is not correct because it includes n=1, and will give no solution for that.
        cout<<"NO SOLUTION";   // But a single number has no adjacent elements, so it's valid.
    }
    else{
        for(int i=2; i<=n; i+=2)
        cout<<i<<" ";
        for(int i=1; i<=n; i+=2)
        cout<<i<<" ";
    }
    return 0;
}
