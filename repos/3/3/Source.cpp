#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int count = 0;
	int a = 0;
	int g = 1;
	cin >> a;
	while (count < a)
	{
		count = count + 1;
		g = g * count;
	}
	cout << g << endl;
	return 0;
}