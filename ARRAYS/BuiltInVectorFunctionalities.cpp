#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main (){
    vector<int> v = {7,9,5,7,3,};  // 7 as it is the 3 7 5 9
    reverse(v.begin()+1,v.end());
    for( int ele : v) cout<<ele<<" ";


}