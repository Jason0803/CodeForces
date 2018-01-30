#include <iostream>
using namespace std;
long long memo[1001];
bool fibos[10000];
long long fib(int n) {
    if(n <= 1) {
        return n;
    }
    else {
        if(memo[n] > 0) {
            return memo[n];
        }
        memo[n] = fib(n-1) + fib(n-2);
        fibos[memo[n]] = true;
        return memo[n];
    }
}
int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    fibos[1] = true;
    fibos[2] = true;
    fib(20);
    for(int i=1; i<=n; i++) {
        if(fibos[i]) cout << 'O';
        else cout << 'o';
    }
    puts("");
    return 0;
}
