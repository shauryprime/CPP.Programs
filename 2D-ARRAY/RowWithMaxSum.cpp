#include<iostream>
using namespace std;
int main (){
    int arr[][4]={{5,6,7,4,},{1,2,4,6},{3,5,7,8}};
    int maxRow =-1 ,maxSum=INT_MIN;
    for(int i=0;i<3;i++){
        int sum =0;
        for(int j=0;j<4;j++){
            sum += arr[i][j];
        }
        if(sum > maxSum) {
            maxSum = sum;
            maxRow= i;
    }
}
cout<<maxRow<<" "<<maxSum;
}