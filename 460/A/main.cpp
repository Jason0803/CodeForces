#include <cstdio>
#include <algorithm>
using namespace std;
double prices[5001];
int main() {
    int n, m;
    int a, b;
    
    scanf("%d %d", &n, &m);
    
    for(int i=0; i<n; i++) {
        scanf("%d %d", &a, &b);
        prices[i] = (double)a/b;

    }
    sort(prices, prices+n);
    printf("%.8f\n", prices[0]*m);
    return 0;
}
