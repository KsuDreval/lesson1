#include <iostream>
using namespace std;
main()
{
	int x, y;
	cin >> x >> y;
	if  (x >= y && x <= 2 && (x*x + y*y) >= 4 && y >= 0 ) cout << "yes";
	else cout << "no";
}
