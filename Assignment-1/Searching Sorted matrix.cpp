#include<bits/stdc++.h>
using namespace std;

void greedySearch(vector<int> arr[],int m, int x){
    int i = 0, j = arr[0].size()-1;
    while(i<=m-1 && j>=0){
        if(arr[i][j]==x){
            cout<<"element found at (" <<i<<","<<j<<")"<<endl;
            return;
        }

        else if(arr[i][j]>x){
            j--;
        }
        else
            i++;
    }
    cout<<"Not Found";
}

int main(){

    cout<<"enter rows and columns : "<<endl;
    int m,n,x;
    cin>>m>>n;
    cout<<"enter target element: ";
    cin>>x;
    vector<int> arr[m];
    for(int i=0;i<m;i++){
        cout<<"enter the row "<<i+1<<" : ";
        for(int j=0; j<n; j++){
            int num;
            cin>>num;
            arr[i].push_back(num);
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    greedySearch(arr,m,x);

}
