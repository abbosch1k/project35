#include <iostream>
using namespace std;

void merge(int arr[],int l,int m,int r){
    int i=l,j=m+1,temp[100],k=l;

    while(i<=m && j<=r)
        temp[k++]=(arr[i]<arr[j])?arr[i++]:arr[j++];

    while(i<=m) temp[k++]=arr[i++];
    while(j<=r) temp[k++]=arr[j++];

    for(int x=l;x<=r;x++)
        arr[x]=temp[x];
}

void sort(int arr[],int l,int r){
    if(l<r){
        int m=(l+r)/2;
        sort(arr,l,m);
        sort(arr,m+1,r);
        merge(arr,l,m,r);
    }
}

int main(){
    int arr[5]={5,4,3,2,1};
    sort(arr,0,4);

    for(int x:arr) cout<<x<<" ";
}
