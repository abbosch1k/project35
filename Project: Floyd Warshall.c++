#include <iostream>
using namespace std;

int main(){
    int graph[3][3]={{0,3,1000},{3,0,1},{1000,1,0}};

    for(int k=0;k<3;k++)
        for(int i=0;i<3;i++)
            for(int j=0;j<3;j++)
                if(graph[i][j] > graph[i][k]+graph[k][j])
                    graph[i][j] = graph[i][k]+graph[k][j];

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
            cout<<graph[i][j]<<" ";
        cout<<endl;
    }
}
