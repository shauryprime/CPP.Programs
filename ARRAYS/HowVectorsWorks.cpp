#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(2);
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.push_back(4);
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.push_back(42);
        cout<<v.size()<<" "<<v.capacity()<<endl;
    v.push_back(4);
        cout<<v.size()<<" "<<v.capacity()<<endl;    v.push_back(4);
    v.push_back(14);
        cout<<v.size()<<" "<<v.capacity()<<endl;
    v.pop_back(); 
        cout<<v.size()<<" "<<v.capacity()<<endl;
    v.pop_back(); 
        cout<<v.size()<<" "<<v.capacity()<<endl;
    v.push_back(13);    
    cout<<v.size()<<" "<<v.capacity()<<endl;
    for(int i=0; i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
