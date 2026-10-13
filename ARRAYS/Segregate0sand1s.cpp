#include <iostream>
#include <vector>
#include <algorithm> // swap के लिए
using namespace std;

int main() {
    vector<int> arr = {0, 1, 0, 1, 0, 0, 0, 1, 0};
    
    int i = 0; int j = arr.size() - 1;
    while(i<j){
        if(arr[i]==0) i++;
        if(arr[j]==1) j--;
        if(i>j) break;
        if(arr[i] ==1 && arr[j]==0){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
     for(int x : arr) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
