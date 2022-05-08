#include<stdio.h>

#include<iostream>
using namespace std;

int main(){
    int arr[100][100];
    
    int i,j;
    int n,k;
    cout<<"Enter size:";
    cin>>n;
    
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
        cin>>arr[i][j];
    }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}