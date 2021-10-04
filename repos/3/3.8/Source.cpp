#include<iostream>
using namespace std;
int main(int argc, char* argv[])
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	for (int z = a; z <= b; ++z)
	{
		for (z ; z % d == c; ++z)
		{
			cout << z;
		}
	}
}