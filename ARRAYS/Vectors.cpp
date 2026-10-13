#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr(5,18);  // index o to 4
    for(int i=0; i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}