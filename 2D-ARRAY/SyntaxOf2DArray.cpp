#include<iostream>
using namespace std ;
int main()
{

    //int arr[3][4];
     int arr[3][4] = {{5,6,7,8},{3,5,7,4},{5,9,2,0}};
     int sum =0 ;
     for(int i=0;i< 3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
            sum+=arr[i][j];
        }
        cout<<endl;
     }
     cout<<sum;
  //REVERSE ARRAYYYY
//    for(int j=0;j<4;j++){
//     for(int i=0;i<3;i++){
//         cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
//    }
}