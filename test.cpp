/*
2  * A block comment looks like this...
3  */
#include <math.h>
class Point
{
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
double Point::distance(const Point& other) const
{
    double dx = x_ - other.x_;
    double dy = y_ - other.y_;
    return sqrt(dx * dx + dy * dy);
}
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
