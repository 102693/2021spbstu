#include<iostream>
using namespace std;
int main(int argc, char* argv[])
{
	int a;
	cin >> a;
	for (int s = 1; s<=a; ++s) {
		int w = a % s;
		for (int q = s; w < 1 && q==s; ++q) {
			cout << q<<" ";
		}
	}
	return 0;
}