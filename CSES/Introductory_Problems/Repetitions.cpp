#include<iostream>
using namespace std;
int main(){
    int current =1;
    int best =1;
    string s;
    cin>>s;
    for(int i=0; i<s.length(); i++){
        if(s[i]==s[i+1]){
            current++;
        }
        else{
            current=1;
        }
        if(current>best){ //best = max(best, current); I can directly use this also
            best=current;
        }
    }
    cout<<best;
    return 0;
}
