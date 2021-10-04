#include<iostream>
using namespace std;
int main(int argc, char* argv[])
{
	int a, b;
	cin >> a >> b;
	for (int z = a; z <= b; z++) 
	{
		for (z; z * z < b; z++) 
		{
			cout << z*z<<" ";
		}
	}
}
