#include<iostream>
#include<string>
using namespace std;
int main (){
    string s1 ="abc";
    string s2 ="xyz";
    string s3 =s1+s2;
    cout<<s3<<endl;

    string s="abc";
    // string x=s +4 ;  ERROR
    string x = s+'4';
    cout<<x<<endl;

    string s4 ="UNITED";
    s4 +="ARAB";
    cout<<s4<<endl;
}