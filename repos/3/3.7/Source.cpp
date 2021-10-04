#include<iostream>
using namespace std;
int main(int argc, char* argv[])
{
	int a;
	int t=0;
	cin >> a;
	for (int b = 0; b < a; ++b)
	{
		int z;
		cin >> z;
		t = t + z;
	}
	cout << t;
	return 0;
}