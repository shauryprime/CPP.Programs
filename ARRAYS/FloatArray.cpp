#include<iostream>
using namespace std;
int main(){
    float arr[] ={3.56,6.34,23.7};
   // cout<<size(marks)<<endl;  GIVING ERROR FOR OLD CPP VERSION
   cout<<sizeof(arr)/sizeof(float)<<endl;
    cout<<arr[2]<<endl;
}  