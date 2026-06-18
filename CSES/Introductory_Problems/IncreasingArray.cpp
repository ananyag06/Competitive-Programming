#include <bits/stdc++.h> //Includes a lot of libraries like iostream, vector, map so on within it
using namespace std;
int main(){
    int n;
    cin>>n;
    vector <long long> a(n);
    long long sum = 0;
    for(int i =0; i<n; i++){
        cin>>a[i];
    }
    for(int i =1; i<n; i++){
        if(a[i-1]>a[i]){
            sum += a[i-1]- a[i];
            a[i]= a[i-1];
        }
    }
    cout<<sum;
    return 0;
}
