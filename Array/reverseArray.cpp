#include<stdio.h>

#include<iostream>
using namespace std;

int main(){
    int arr[100];
    
    int i;
    int n;
    cout<<"Enter size:";
    cin>>n;
    
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=n-1;i>=0;i--){
        cout<<arr[i]<<endl;}
}