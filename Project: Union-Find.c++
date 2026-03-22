#include <iostream>
using namespace std;

int parent[10];

int find(int x){
    if(parent[x]==x) return x;
    return parent[x]=find(parent[x]);
}

void unite(int a,int b){
    parent[find(a)]=find(b);
}

int main(){
    for(int i=0;i<5;i++) parent[i]=i;

    unite(1,2);
    unite(2,3);

    cout<<(find(1)==find(3));
}
