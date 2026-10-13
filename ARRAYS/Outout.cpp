#include<iostream>
using namespace std;
int main (){
    int arr[] = {82,32,58,89,96,67,56};
    int n = sizeof(arr)/4;
    for(int i=0;i<=n-1;i++){   //0 to n-1
        cout<<arr[i]<<" ";
    }
}