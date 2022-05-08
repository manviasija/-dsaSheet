#include<stdio.h>

#include<iostream>
using namespace std;
int minh(int arr[],int n){
    int i;
    int min=arr[0],max=arr[0];
    for(i=0;i<n;i++){
        if(min>arr[i]){
            min=arr[i];
        }
         if(max<arr[i]){
            max=arr[i];
        }
    } 
    return max-min;
       
         
}
int main(){
    int arr[100];
    
    int i;
    int n;
    cout<<"Enter size:";
    cin>>n;
    
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<minh(arr,n);   
}