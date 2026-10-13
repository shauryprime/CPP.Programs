#include<iostream>
using namespace std;
int main (){
    int n;
    cin>>n;
    int Rev = 0;
    while(n!=0){
        Rev *=10;
         Rev +=(n%10);
         n/=10;

    }
    cout<<Rev;
}