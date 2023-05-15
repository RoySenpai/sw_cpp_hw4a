#include "Point.hpp"

using namespace std;
using namespace ariel;

Point::Point() : _x(0.0), _y(0.0) {}

Point::Point(double pt_x, double pt_y) : _x(pt_x), _y(pt_y) {}

double Point::getX() const
{
	return 0.0;
}

double Point::getY() const
{
	return 0.0;
}

double Point::distance(Point other) const
{
	return 0.0;
}

string Point::print() const
{
	return "";
}

const Point &Point::moveTowards(const Point &curr, const Point &other, const double dist)
{
	return curr;
}