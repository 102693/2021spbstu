#include<iostream>
using namespace std;
int main(int argc, char* argv[])
{
	int a, b, c, d, x=0;
	cin >> a >> b >> c >> d;
	for (int e = 0; e<1000 ; ++e)
	{
		for (x ; a * x* x* x + b * x * x+ c *x + d == 0; ++x)
		{
			cout << x<<" ";
		}
		x = x + 1;
	}
	return 0;
}