#include <iostream>
using namespace std;

int main()
{
    int n; 
    cin >> n;

    long long total = 1LL * n * (n + 1) / 2; 
    // 1LL forces the expression to be evaluated as long long.
    // Otherwise n*(n+1) would be computed as int*int first, which will lead to overflow.
    long long sum = 0;
    for(int i = 0; i < n - 1; i++)
    {
        int x;
        cin >> x;
        sum += x; // sum = sum +x
    }

    cout << total -sum; 

    return 0;
}
