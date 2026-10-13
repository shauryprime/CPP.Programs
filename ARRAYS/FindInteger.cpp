#include<iostream>
using namespace std;
int main(){
    int arr[] ={23,-42,2,435,3,453,-35,45,-875};
    int n= sizeof(arr)/4;
    int target = -35;
    bool flag = false;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            flag = true;
            break;
        }
    }
    if(flag==true) cout<<"Element Found"<<endl;
        else cout<<"Element Not Found"<<endl;
    }