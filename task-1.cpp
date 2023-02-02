#include <iostream>
using namespace std;

int calculation(int a, int b, int result) {
    result = result + a;
       if (a==b)
       {
           return result;
       }
       a += 1;
       calculation(a, b, result);
}

int main()
{
    int a = 1;
    int b;
    int result = 0;
    cout << "Enter a 'b' number\n";
    cin >> b;
    cout << calculation(a, b, result);
}