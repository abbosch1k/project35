#include <iostream>
using namespace std;

int partition(int arr[],int l,int r){
    int pivot=arr[r], i=l-1;

    for(int j=l;j<r;j++)
        if(arr[j]<pivot)
            swap(arr[++i],arr[j]);

    swap(arr[i+1],arr[r]);
    return i+1;
}

void quick(int arr[],int l,int r){
    if(l<r){
        int p=partition(arr,l,r);
        quick(arr,l,p-1);
        quick(arr,p+1,r);
    }
}

int main(){
    int arr[5]={5,1,4,2,3};
    quick(arr,0,4);

    for(int x:arr) cout<<x<<" ";
}
