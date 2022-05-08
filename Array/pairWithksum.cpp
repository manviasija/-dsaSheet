#include<stdio.h>

#include<iostream>
using namespace std;
int main(){
    int arr[100];
    int i,n,k,j,flag=0;
  
    cout<<"Enter size:";
    cin>>n;
    
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter number:";
    cin>>k;

    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]+arr[j]==k){
                flag++;
            }
        }
    }
    cout<<flag;    
}