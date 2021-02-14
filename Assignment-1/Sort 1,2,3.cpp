#include<bits/stdc++.h>
using namespace std;


void dutchSort(int arr[], int n){
    int lo=0,mid=0,hi=n-1;
    while(mid<=hi){
        switch(arr[mid]){

            case 0: swap(arr[lo],arr[mid]);
                    mid++,lo++;
                    break;

            case 1: mid++;
                    break;

            case 2: swap(arr[mid],arr[hi]);
                    hi--;
                    break;
        }
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    dutchSort(arr,n);
        for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
