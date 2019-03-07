/* Test File with comments
 * Last Updated: March 7th, 2019
 * Purpose of file: To show how files should be, taken from ROS org
 * Contributers: Jordan Mello
 */

#include <math.h>

class Point
{
    /*What each variable should do*/
public:
    Point(double xc, double yc) :
    x_(xc), y_(yc)
    {
    }
    double distance(const Point& other) const;
    int compareX(const Point& other) const;
    double x_;
double y_;
};
/*Function name, what it does, who wrote it*/
double Point::distance(const Point& other) const
{
    double dx = x_ - other.x_;
    double dy = y_ - other.y_;
    return sqrt(dx * dx + dy * dy);
}
/*Funtion name, what it does, who wrote it*/
int Point::compareX(const Point& other) const
{
    if (x_ < other.x_)
    {
    return -1;
    }
    else if (x_ > other.x_)
    {
    return 1;
    }
    else
    {
    return 0;
    }
}
namespace foo
{
    /*function name, what it does, who wrote it*/
int foo(int bar) 
{
    switch (bar)
    {
    case 0:
        ++bar;
        break;
    case 1:
        --bar;
    default:
    {
        bar += bar;
        break;
    }
  }
}
} // end namespace foo
