#include <iostream>
#include <queue>
using namespace std;

int main(){
    priority_queue<int, vector<int>, greater<int>> pq;

    pq.push(5);
    pq.push(1);
    pq.push(3);

    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
}
