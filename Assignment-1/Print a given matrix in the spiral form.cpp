#include<bits/stdc++.h>
using namespace std;

void spiral(vector<int> arr[], int m){
    int top=0,left=0,right=arr[0].size()-1,bottom =m-1;
    while(top<=bottom && left<=right){
        for(int i=left;i<=right;i++){
            cout<<arr[top][i]<<" ";
        }
        top++;
        for(int i =top;i<=bottom;i++){
            cout<<arr[i][right]<<" ";
        }
        right--;

        if(top<=bottom){
            for(int i=right;i>=left;i--){
                cout<<arr[bottom][i]<<" ";
            }
        bottom--;
        }

        if(left<=right){
            for(int i =bottom;i>=top;i--){
                cout<<arr[i][left]<<" ";
            }
        left++;
        }

    }
}
int main(){

    cout<<"enter rows and columns : "<<endl;
    int m,n;
    cin>>m>>n;
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
    spiral(arr,m);

}
