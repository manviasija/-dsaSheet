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
    int min=arr[0];
    int max=arr[0];
    for(i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    for(i=0;i<n;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }

    cout<<min<<endl<<max;
}