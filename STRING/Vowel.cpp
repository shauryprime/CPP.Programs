#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s = "Shaury Prime Srivatava";
    int n = s.length();
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        char ch =s[i];
        if (ch>=65 && ch<=90) ch+=32;
          
        if (ch == 'a')count++;
        else if (ch == 'e')count++;
        else if (ch == 'i')count++;
        else if (ch == 'o')count++;
        else if (ch == 'u')count++;




        // else if (s[i] == 'A')count++;
        // else if (s[i] == 'E')count++;
        // else if (s[i] == 'I')count++;
        // else if (s[i] == 'O')count++;
        // else if (s[i] == 'U')count++;
    }
    cout << count << endl;
}