#include <iostream>
#include <vector>
using namespace std;

vector<int> g[3];
bool vis[3], rec[3];

bool dfs(int v){
    vis[v]=rec[v]=1;

    for(int u:g[v]){
        if(!vis[u] && dfs(u)) return true;
        else if(rec[u]) return true;
    }

    rec[v]=0;
    return false;
}

int main(){
    g[0]={1};
    g[1]={2};
    g[2]={0};

    cout<<dfs(0);
}
