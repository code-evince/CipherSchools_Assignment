#include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int p, int r){
    int pivot = arr[p];
    int i = p-1,j=r+1;
    while(true){
        do{i++;}
        while(arr[i]<pivot);

        do{j--;}
        while(arr[j]>pivot);

        if(i>=j) return j;
        swap(arr[i],arr[j]);
    }

}
void Quicksort(int arr[],int l, int h){  // tail recursion, all work is done in the divide step(partition algorithm aclually sorts)
    if(l<h){                               // don't sort 1 element
        int p = partition(arr,l,h);
        Quicksort(arr,l,p);            // the partition returns the index of p, it's not that fixed pivot of lomuto, the hoare's partition only gaurentees that
        Quicksort(arr,p+1,h);             // all elements till p are smaller than all elements from (p+1 - end), so we quicksort both
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Quicksort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
