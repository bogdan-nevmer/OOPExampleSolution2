#include "Point2D.h"
string toString();

bool Point2D::operator==(Point2D point) {
	return x == point.x && y == point.y;
}

bool Point2D::operator!=(Point2D point){}

bool Point2D::operator>(Point2D point){}

bool Point2D::operator<(Point2D point){}

bool Point2D::operator>=(Point2D point){}

bool Point2D::operator<=(Point2D point){}