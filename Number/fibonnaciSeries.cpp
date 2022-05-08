#include<stdio.h>

#include<iostream>
using namespace std;

int main(){
    int n,i,c;
    
    cin>>n;
    int n1=0;
    int n2=1;

    cout<<n1<<" "<<n2<<" ";

    for(i=2;i<n;i++){
        c=n1+n2;
        cout<<c<<" ";
        n1=n2;
        n2=c;
    }
}