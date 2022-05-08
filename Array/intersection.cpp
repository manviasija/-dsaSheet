#include<stdio.h>

#include<iostream>
using namespace std;

int main(){
    int n1,n2,i,j,flag;
    cout<<"Enter the no. of elements of the 1st array: ";
    cin>>n1;
    
    /* declaring arr1 of size n1 */
    int arr1[n1];
    cout<<"\nEnter the elements of the 1st array: ";
    for(i=0;i<n1;i++)
    {
        cin>>arr1[i];
    }
    
    cout<<"\nEnter the no. of elements of the 2nd array: ";
    cin>>n2;
    
    /* declaring arr2 of size n2 */
    int arr2[n2];
    cout<<"\nEnter the elements of the 2nd array: ";
    for(i=0;i<n2;i++)
    {
        cin>>arr2[i];
    }
    for(i=0;i<n1;i++){
        flag=0;
        for(j=0;j<n2;j++){
            if(arr1[i]==arr2[j]){
                flag=1;
            }
        }
        if(flag==1){
            cout<<arr1[i]<<" ";
        }
    }
}