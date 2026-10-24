#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s ="Zerald";
    s.pop_back();
    s.push_back('M');
    cout<<s<<endl;

    //sort(s.begin(),s.end());
    reverse(s.begin()+1,s.end()-1);
    cout<<s<<endl;
}