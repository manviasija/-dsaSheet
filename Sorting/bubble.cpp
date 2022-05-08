#include<stdio.h>

#include<iostream>
using namespace std;

int main(){
    int arr[100];
    
    int i,j;
    int n;
    cout<<"Enter size:";
    cin>>n;
    
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;

            }
        }
    }
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}    