#include<bits/stdc++.h>
using namespace std;

int partition(int arr[],int p, int r){  //here r is the index of last arr element
    int x = arr[r];
    int i = p-1;
    for(int j =p;j<=r-1;j++){
        if(arr[j]<x){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[r]);

    return i+1;
}

int kthSmallest(int arr[],int n, int k){
    int l=0,r=n-1;
    while(l<=r){
    int p = partition(arr,l,r);
    if(p==k-1){return arr[p];}
    else if(p>k-1){r=p-1;}
    else{l=p+1;}
    }
return -1;
}
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    cout<<kthSmallest(arr,n,k);

}
