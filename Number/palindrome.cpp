#include<stdio.h>

#include<iostream>
using namespace std;

int main(){
    int n;
    int rev=0, rem;

    cin>>n;
    int n1=n;

    while(n>0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    cout<<rev;
    if(rev==n1){cout<<"Palindrome";}
    else{cout<<"Not Palindrome";}
}