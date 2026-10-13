#include<iostream>
using namespace std;
int main(){
    int arr[] ={23,-42,2,435,3,453,-35,45,-875};
    int n= sizeof(arr)/4;
    cout<<arr<<endl;
    cout<<&arr[0]<<endl; 
    cout<<&arr[1]<<endl;
    cout<<&arr[2]<<endl;
}