#include<iostream>
using namespace std;
int main (){
    int arr[] = {82,32,58,89,96,67,56};
    int n = sizeof(arr)/4;
    int max = 0;
    for(int i=1;i<n;i++){
        if(arr[i] > max) max = arr[i];

    }
    cout<<max;
}