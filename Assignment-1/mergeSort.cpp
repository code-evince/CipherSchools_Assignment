#include<bits/stdc++.h>
using namespace std;
//The Merge Routine
void merge(int arr[],int l,int m,int r){
    //creating temp arrays
    int n1 = m-l+1;//size of left half
    int n2 = r-m;//size of right half
    int L[n1];
    int R[n2];
    /* Copy data to temp arrays L[] and R[] */
    for(int i=0;i<n1;i++){
        L[i]=arr[l+i];
    }
    for(int j=0;j<n2;j++){
        R[j]=arr[m+1+j];
    }

    //the merge process
    int i = 0;
    int j = 0;
    int k = l;
    while(i<n1 && j<n2){
        if(L[i]<=R[j]){arr[k++]=L[i++];}
        else{arr[k++]=R[j++];}
    }

    while(i<n1){
        arr[k++]=L[i++];
    }
    while(j<n2){
        arr[k++]=R[j++];
    }
}
//The MergeSort Recursive Version
void mergeSort(int arr[],int l,int r){
    if(r>l){
        int m = l+(r-l)/2;
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        merge(arr,l,m,r);
    }
}

int main(){
    int n ;
    cin>>n;
    int arr[n];
    for (int i =0;i<n;i++){
        cin>>arr[i];
    }
    int l =0;
    int r = n;
    mergeSort(arr,l,r);
    cout<<endl;
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
