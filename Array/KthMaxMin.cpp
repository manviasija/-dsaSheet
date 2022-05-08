#include<stdio.h>

#include<iostream>
using namespace std;

int main(){
    int arr[100];
    
    int i,j;
    int n,k;
    cout<<"Enter size:";
    cin>>n;
    
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter K: ";
    cin>>k;
    //Sorting in descending order
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[j]>arr[i]){
                int temp;
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
        
    }
for(i=0;i<n;i++){
    cout<<arr[i]<<" ";
    
}
    cout<<endl;
    cout<<"Kth Maximun element: ";
    cout<<arr[k-1]<<endl;
    cout<<"Kth minimum element: ";
    cout<<arr[(n-1)-(k-1)];



}