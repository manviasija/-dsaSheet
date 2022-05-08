#include<stdio.h>
//kadane's algo, largest continuous sub array
#include<iostream>
using namespace std;
long maxsub(int arr[],int n){
         int csum=0,cmax=0,i;
    for(i=0;i<n;i++){
        csum+=arr[i];
        if (csum>cmax){
            cmax=csum;
        }
        if(cmax<0){
            cmax=0;
        }
    }
    return cmax;
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
    cout<<maxsub(arr,n);   
}