#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v1 = {3,4,6,8,5};
    vector<int> v2 = {3,4};
    vector<int> v3 = {4,8,5};
    vector<int> v4 = {3,6,8,5};

    vector<vector<int>> v ={v1,v2,v3,v4};  // jagges array
    for(int i=0;i<v.size();i++){
        for(int j=0 ;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;

    }
    // v.push_back(v1);
    // v.push_back(v2);
    // v.push_back(v3);
    // v.push_back(v4);

}