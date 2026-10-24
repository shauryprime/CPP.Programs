#include<iostream>
#include<vector>
using namespace std;
void print(vector<int> &arr){
    for(int ele : arr){
        cout<<ele<<" ";
    }
    cout<<endl;
}
int main ()
{
    vector<int> arr={7,9,6,4,2,7,3,6,9,0,1};
    int n=arr.size();
    print(arr);
    // Selection Sort
    for(int j=0;j<n-1;j++){
        int mx=arr[j],mxIdx=j;
        for(int i=j+1;i<n;i++){
            if(arr[i]>mx){
                mx=arr[i];
                mxIdx=i;
            }

        }
        swap(arr[j],arr[mxIdx]);
    }
    print(arr);
}