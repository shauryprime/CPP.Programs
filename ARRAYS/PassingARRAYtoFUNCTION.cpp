#include<iostream>
using namespace std;
void change(int x[]){
    x[0] =20;
}


int main(){
    int x[] ={23,-42,2,435,3,453,-35,45,-875};
     change(x);
     cout<<x[0]<<endl;
}