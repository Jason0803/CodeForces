#include <iostream>
#define MAX 2005
using namespace std;

int a[MAX][MAX], b[MAX][MAX], n, m, k, result, count_dots;
char map[MAX][MAX];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(); cout.tie();
    
    cin >> n >> m >> k;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=m; j++) {
            cin >> map[i][j];
            if(map[i][j] == '.')
                count_dots++;
        }
    }
    if(k != 1) {
        for(int i=1; i<=n; i++) {
            for(int j=1; j<=m; j++) {
                if(map[i][j] == '*') a[i][j] = 0;
                else a[i][j] = a[i][j-1] + 1;
                if(a[i][j] >= k) result++;
            }
        }
        
        for(int j=1; j<=m; j++) {
            for(int i=1; i<=n; i++) {
                if(map[i][j] == '*') b[i][j] = 0;
                else b[i][j] = b[i-1][j] + 1;
                if(b[i][j] >= k) result++;
            }
        }
        
        cout << result << '\n';
    } else cout << count_dots << '\n';
    
    return 0;
}
