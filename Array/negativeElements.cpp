//move negative elements in an array to one side.
#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
    int arr[100];
    
    int i,j=0;
    int n;
    cout<<"Enter size:";
    cin>>n;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int temp;

    for(i=0;i<n;i++){
        if(arr[i]<0){
            if(i!=j){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }j++;
    }
}
    
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}