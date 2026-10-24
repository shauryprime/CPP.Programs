#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string x=  "abcdef";
    string y="abz";
    if(x==y) cout<<"Same"<<endl;
    else cout<<"Not Same \n";

    if(x>y) cout<<x<<" is greater than"<<y<<endl;
    if(y>x) cout<<y<<" is greater than"<<x<<endl;
}