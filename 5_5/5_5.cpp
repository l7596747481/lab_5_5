#include <iostream>
#include <cmath>
using namespace std;
int depth = 0;
int f(int n)
{
	if (n % 10 > 0)
		return n % 10;
	if (n == 0)
		return 0;
	else
		return f(n / 10);
}
double S(const int p, const int q, const int i)
{
	if (i > q)
		return 0;
	else
	{
		
		depth++;
		return f(i) + S(p, q, i + 1);
	}
}
int main()
{
	
	int p;
	int q;
	cout << "p = "; cin >> p;
	cout << "q = "; cin >> q;
	cout << S(p, q, p) << endl;
	cout << "depth = " << depth;
}
