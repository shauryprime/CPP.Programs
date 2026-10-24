#include<iostream>
#include<vector>
using namespace std;
void print(vector<int> &arr){
    for(int ele : arr){
        cout<<ele<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int> arr= {7,4,7,2,8,0,5,3,8};
    int n = arr.size();
    print(arr);
    // Insertion Sort
    for(int i=1;i<=n-1;i++){
        int j=i;
        while(j>=1 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
    print(arr);


}

