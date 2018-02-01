#include <iostream>
#include <algorithm>
using namespace std;

int n,m,k,a[2005][2005],b[2005][2005],ans;
char t[2005][2005];

int main(){
    ios_base :: sync_with_stdio(0); cin.tie(); cout.tie();
    cin >> n >> m >> k;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin >> t[i][j];
        }
    }
    if(k!=1){
        // 가로로
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(t[i][j]=='*') a[i][j]=0;
                else a[i][j]=a[i][j-1]+1;
                if(a[i][j]>=k) ans++;
            }
        }
        // 세로로
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(t[j][i]=='*') b[j][i]=0;
                else b[j][i]=b[j-1][i]+1;
                if(b[j][i]>=k) ans++;
            }
        }
        cout << ans;
    }
    else{
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(t[i][j]=='.') ans++;
            }
        }
        cout << ans;
    }
}
