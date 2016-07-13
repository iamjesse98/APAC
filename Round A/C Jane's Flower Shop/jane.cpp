#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int T, M;
long long C[101];

double result(double left, double right, int limit)
{
	double r = (left + right)/2;
	double lhs = C[0];
	double rhs = 0;

	for (int i = 1; i <= M; i++)
		rhs += C[i]/pow(1+r, i);

	if (abs(lhs - rhs) < 0.000000000001 || limit == 0)
		return r;
	else if (rhs < lhs)
		return result(left, r, limit-1);
	else if (lhs < rhs)
		return result(r, right, limit-1);

	return 0;
}

int main()
{
	cin >> T;
	
	for (int k=1; k <= T; k++)
	{
		cin >> M;
		
		for (int i=0; i <= M; i++)
			cin >> C[i];

		printf("Case #%d: %.12lf\n", k, result(-1, 1, 100));
	}
	
	return 0;	
}
