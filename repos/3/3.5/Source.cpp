#include<iostream>
using namespace std;
int main(int argc, char* argv[])
{
	int a = 0;
	cin >> a;
	int s = 0;
	int q = 0;
	int w = 0;
	for (int r = 0; r <a; ++r) {
		int g;
		cin >> g;
		for (int s1 = 0; g == 0&&s1<1; ++s1)
		{
			s = s + 1;
		}
		
		for (int q1 = 0; g > 0 && q1< 1; ++q1)
		{
			q = q + 1;
		}
		
		for (int w1 = 0; g < 0 && w1< 1; ++w1)
		{
			w = w + 1;
		}
		
	}
	cout << s << " " << q << " " << w << " ";
	return 0;
}