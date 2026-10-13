#include<iostream>
#include<vector>
using namespace std;
int main (){
    vector<int> v = {7,67,54,7,3,};
// Multiply even numbers by 2, square the odd numbers
//  for(int =i;i<v.size();i++){
//   if(v[i]%2 ==0) v[i] *=2;
//    else v[i] *=v[i]; 
//}

        for( int ele : v){
            cout<<ele<<" ";
        }

}

