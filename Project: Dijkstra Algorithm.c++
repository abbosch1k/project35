#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main(){
    int graph[3][3]={{0,1,4},{1,0,2},{4,2,0}};
    int dist[3]={0,INT_MAX,INT_MAX};
    bool visited[3]={0};

    for(int i=0;i<3;i++){
        int u=-1;

        for(int j=0;j<3;j++)
            if(!visited[j] && (u==-1 || dist[j]<dist[u]))
                u=j;

        visited[u]=1;

        for(int v=0;v<3;v++)
            if(graph[u][v] && dist[u]+graph[u][v]<dist[v])
                dist[v]=dist[u]+graph[u][v];
    }

    for(int i=0;i<3;i++)
        cout<<dist[i]<<" ";
}
