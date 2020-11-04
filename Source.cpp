#include <iostream>
#include <cmath>
using namespace std;
double s(const double x);
int main()
{
	double tp, tk, z;
	int k;
	cout << "tp = "; cin >> tp;
	cout << "tk = "; cin >> tk;
	cout << "k = "; cin >> k;
	double dt = (tk - tp) / k;
	double t = tp;
	while (t <= tk)
	{
		z = s(2*t+1) + 2*s(t*t)+sqrt(s(1));
		cout << t << " " << z << endl;
		t += dt;
	}
	return 0;
}
double s(const double x)
{
	if (abs(x) >= 1 || x==0)
		return (cos(x)*cos(x) + 1) / (exp(x));
	if(abs(x)<1||x!=0)
	{
		double S = 0;
		int k = 0;
		double a = 2*x;
		S = a;
		do
		{
			k++;
			double R = 4*x*x*(2.*k-1)/(2.*k+1);
			a *= R;
			S += a;
		} while (k < 4);
		return S * 1/sin(2*x);
	}
}