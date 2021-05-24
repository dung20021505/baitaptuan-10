#include <iostream>
using namespace std;
struct Point
{
	double x, y;
	void print(struct Point)
	{
		cout <<"(" << x << ";" << y <<")"<< endl;
	}
	
};
Point  trungdiem(const struct Point s1,const struct Point s2) {
	Point a ;
	a.x =  (s1.x+s2.x )/2;
	a.y =  (s1.y+s2.y )/2;
	return a; 
}
int main()
{
	Point s1,s2;
	cin >> s1.x >> s1.y;
	cin >> s2.x >> s2.y;
	Point a = trungdiem(s1,s2);
	 
	a.print(a);
	return 0;
	
}
