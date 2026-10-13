#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number of Terms: ";
    cin>>n;
// 2 5 8 11 14 17...
    // for(int i=2; i<=3*n-1;i+=3){
    // cout<<i<<" ";} 


    //3 7 11 15 19....
    int a=3,d=4;
    for(int i=1;i<=n;i++){
        cout<<a<<" ";
        a+=d;
    }
    }
    

