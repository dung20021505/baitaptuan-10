#include <iostream>
using namespace std;
struct Point
{
	double x, y;
	void print(struct Point)
	{
		cout <<"(" << x << "," << y <<")"<< endl;
	}
};
int main()
{
	Point s;
	cin >> s.x >> s.y;
	s.print(s);
	return 0;
}
