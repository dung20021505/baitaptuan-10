#include <iostream>
using namespace std;
struct Point
{
	double x, y;
	void print(struct Point)
	{
		cout << &x << " " << &y << endl;
	}
};
void truyenthamtri (struct Point s)
{
	cout << &s.x << " " << &s.y << endl;
}
void truyenthamchieu (struct Point* s)
{
	cout << &s->x << " " << &s->y << endl;
}
int main()
{
	Point s;
	cin >> s.x >> s.y;
	cout << &s.x << " " << &s.y << endl;
	truyenthamtri(s);
	truyenthamchieu(&s);
	return 0;
}
