#include <iostream>
#define MAX 2001
using namespace std;
int n, m, k;
int result = 0;
char room[MAX+1][MAX+1];
bool check[MAX+1][MAX+1];
int dr[] = {1,-1,0,0};
int dc[] = {0,0,1,-1};
void dfs(int r, int c, int cnt) {
    for(int k=0; k<4; k++) {
        int nr = r + dr[k];
        int nc = c + dc[k];
        if(0 <= nr && nr <= n && 0 <= nc && nc <= m) {
            if(check[nr][nc] == false && room[nr][nc] == '.'){
                check[nr][nc] = true;
                cnt++;
                if(cnt == k) {
                    result+=1;
                    return;
                }
                dfs(nr, nc, cnt+1);
                check[nr][nc] = false;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> m >> k;
    int count_dots = 0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin >> room[i][j];
            if(room[i][j] == '.') count_dots++;
        }
    }
    if(k == 1) printf("%d\n", count_dots);
    else {
        for(int i=0; i<=n; i++) {
            for(int j=0; j<=m; j++) {
                if(room[i][j] == '.') {
                    check[i][j] = true;
                    dfs(i,j,1);
                    check[i][j] = false;
                }
            }
        }
        printf("%d\n", result);
        
    }
    return 0;
}
