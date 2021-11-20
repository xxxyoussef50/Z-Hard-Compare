#include <iostream>
#include<cmath>
using namespace std;
int main()
{

	unsigned long long int a = 0, b = 0, c = 0, d = 0;
	long double e = 0, f = 0;
	cin>> a>> b>>c>>d;
	e = b*log(a);
	f = d*log(c);
	if (e > f)
		cout << "YES";
	else
		cout << "NO";


}