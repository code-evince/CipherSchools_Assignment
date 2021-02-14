#include<bits/stdc++.h>
using namespace std;

int mergeAndCount(int arr[],int l,int m,int r){
    int n1 = m-l+1;
    int n2 = r-m;
    int L[n1],R[n2];
    for(int i =0;i<n1;i++){
        L[i]=arr[l+i];
    }
    for(int i =0;i<n2;i++){
        R[i]=arr[m+1+i];
    }

    int i=0,j=0,res=0,k=l;
    while(i<n1 && j<n2){
        if(L[i]<=R[j]){arr[k++]=L[i++];}
        else{arr[k++]=R[j++]; res=res+(n1-i);}
        // cout<<"res "<<res<<i<<j;
    }
    while(i<n1){
        arr[k++]=L[i++];
    }
    while(j<n2){
        arr[k++]=R[j++];
    }
    return res;
}

int countInversions(int arr[],int l, int r){
    int res = 0;
    if(r>l){
        int m = l + (r-l)/2;
        res+=countInversions(arr,l,m);
        res+=countInversions(arr,m+1,r);
        res+=mergeAndCount(arr,l,m,r);
    }

    return res;
}

int main(){
    int n ;
    cin>>n;
    int arr[n];
    for (int i =0;i<n;i++){
        cin>>arr[i];
    }
    int l = 0;
    int r = n;
    cout<<countInversions(arr,l,r);

}
