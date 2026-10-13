#include<iostream>
using namespace std;
int main (){
    int a =3,b = 6;
    cout<<a<<" "<<b<<endl;
    a=(a+b) - (b=a);    //ONE LINER
    //   a=a+b;
    //  b=a-b;
    //   a=a-b;
 
    //   int temp = a;
    //   a=b;
    //   b=temp;
    cout<<a<<" "<<b<<endl;
}
