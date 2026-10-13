#include<iostream>
using namespace std;
int main (){
    int arr[] = {82,32,58,89,96,67,56};
    int n = sizeof(arr)/4;
     int sum =0;
     for(int i=0;i<n;i++){
        sum+= arr[i];
     }
     cout<<sum;
}   