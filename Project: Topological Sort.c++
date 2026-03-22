#include <iostream>
#include <vector>
using namespace std;

vector<int> g[5];
bool visited[5];

void dfs(int v){
    visited[v]=true;

    for(int u:g[v])
        if(!visited[u])
            dfs(u);

    cout<<v<<" ";
}

int main(){
    g[0]={1,2};
    g[1]={3};

    for(int i=0;i<4;i++)
        if(!visited[i])
            dfs(i);
}
