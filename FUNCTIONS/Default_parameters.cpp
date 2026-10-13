#include<iostream>
using namespace std;
// void fun(int age = 20){
//     cout<<"my age is : "<<age<<endl;

// }
// int main(){
//     fun();
// }
void power(int base,int exponent = 2){
    int ans = 1;
    for(int i =0;i<exponent;i++)
    ans *=base;
    cout<<ans<<endl;

}

int main(){
    power(5);
    power(7,8);
}  