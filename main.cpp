

#include <iostream>

using namespace std;

int main()
{
    float a, b, c;
    c = 0;
    b = 0;
    cin >> a;
    
    while (a != 0)
    {
        b = b + a;
        cin >> a;
        c = c + 1;
    }
    
    cout << b / c;
}
