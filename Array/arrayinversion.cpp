#include<stdio.h>

#include<iostream>
using namespace std;

int main(){
    int arr[100];
    
    int i,j;
    int n,k;
    cout<<"Enter size:";
    cin>>n;
    //or an array, inversion count indicates how far (or close) the array is from being sorted
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int c=0;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
                c++;
            }
        }
    }
    cout<<c;
}