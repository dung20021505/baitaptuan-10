#include <iostream>
#include <cmath>
using namespace std;
struct Point
{
	double x, y;
};

int main()
{
	Point s;
	cout << &s << " " << &s.x << " " << &s.y;
	//Ðia chi cua bien dau tien khai bao trong point trung voi dia chi cua s 
	return 0;
}
