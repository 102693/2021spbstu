#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a;
	int b;
	cin >> a >> b;

	int count = 0;
	int g = 1;
	while (count < a)
	{
		count = count + 1;
		g = g * count;
	}

	int count2 = 0;
	int g2 = 1;
	while (count2 < b)
	{
		count2 = count2 + 1;
		g2 = g2 * count2;
	}

	int count3 = 0;
	int z = a - b;
	int g3 = 1;
	while (count3 < z)
	{
		count3 = count3 + 1;
		g3 = g3 * count3;
	}

	cout << g / (g2 * g3);
	return 0;

}