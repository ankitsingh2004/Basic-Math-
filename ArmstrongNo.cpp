#include<iostream>
using namespace std;
int main(){
    int n, temp, rem , rev =0;
    cout<<"enter the number ";
    cin>>n;
    temp =n;
    while(n>0){
        n=n%10;
        rev =rem*rem*rem;
        n=n/10;
    }
    if(rev=temp){
        cout<<"It is armstrong Number ";
    }
    else{
        cout<<"It is not a Armstorng Number ";
    }
}
