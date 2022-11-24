#include <bits/stdc++.h>
#include <queue>
typedef std::pair<int,int> ii;

using namespace std;
int r,c,m,n;
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
int d[1000][1000];
int a[1000][1000];

queue<ii>qe;
int solve(){
    qe.push(ii(r,c));
    d[r][c]=0;
    a[r][c]=1;
    while(!qe.empty()){
    ii u=qe.front();
    qe.pop();
    for(int i=0;i<4;i++){
        int x=dx[i]+ u.first;
        int y=dy[i]+ u.second;
        if(a[x][y]!=1){
        if(x<1 || x>m||y<1 ||y>n) return d[u.first][u.second]+1;
            d[x][y]=d[u.first][u.second]+1;
            a[x][y]=1;
            qe.push(ii(x,y));
        }
    }
    }
    return 0;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>m>>n>>r>>c;

    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    cout<<solve();

}