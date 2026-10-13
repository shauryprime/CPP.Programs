#include <iostream> 
using namespace std;
void printSum(int num1, int num2, int num3) {
    int sum = num1 + num2 + num3;
  cout << "The sum of three numbers is: " << sum << std::endl;
}

int main() {
    int a = 5;
    int b = 10;
    int c = 15;

 printSum(a, b, c);

    return 0;
}