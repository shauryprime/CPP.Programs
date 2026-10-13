#include<iostream>
#include<vector>
using namespace std;
void change(vector<int> v){
    v[2] = 99;
}
// void change(vector<int> &v){
//     v[2] = 99;
// }
int main (){
    vector<int> v = {4,3,5,6,2}; // 2 3 4 8 9
     change(v);
     cout<<v[2]<<endl;
}