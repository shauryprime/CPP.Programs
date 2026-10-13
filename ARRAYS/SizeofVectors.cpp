#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr(8,-1);
    int n =arr.size();
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    arr.push_back(5); //adds an element at the end of the vector
    arr.push_back(6);
    arr.pop_back();  // removes the last element
    arr.push_back(7);
      for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
}
}   