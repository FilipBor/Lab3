#include <iostream>
#include <cstdlib>
#include <array>
#include <cmath>
struct Point2D
{
    double x;
    double y;
};

Point2D create_point()
{
    Point2D tmp;
    tmp.x = rand() % 10;
    tmp.y = rand() % 10;

    return tmp;
}
void create_in_place(Point2D& point)
{
    point.x = rand()% 10;
    point.y = rand()% 10;
}
float triangle_area(Point2D a, Point2D b, Point2D c)
{
    float product = a.x * (b.y - c.y) + b.x *(c.y - a.y) + c.x*(a.y - b.y);
    return abs(product / 2);
}
int main (){
    std::array<Point2D, 10> points;

    for ( int i = 0; i < 10; i++)
    {
        points[i] = create_point();
        std::cout <<"Point ["<<i <<"] = ("<<points[i].x <<", "<<points[i].y <<")"<<std::endl;
    }

    float largest_area = 0.0;
    Point2D first, second, third;

    for ( int i = 0; i < 10; i++)
    {
        for ( int j = 0; j < 10; j++)
        {
            for ( int k = 0; k < 10; k++)
            {
                float area = triangle_area(points[i], points[j], points[k]);
                        if ( area > largest_area)
                        {
                            largest_area = area;
                            first = points[i];
                            second = points[j];
                            third = points[k];
            }

            }
        }
    }
    std::cout <<"Largest area is: "<<largest_area<<std::endl;
    std::cout <<"First point is: ("<<first.x <<", "<< first.y<< ") "<<std::endl;
    std::cout <<"Second point is: ("<<second.x <<", "<< second.y<< ") "<<std::endl;
    std::cout <<"Third point is: ("<<third.x <<", "<< third.y<< ") "<<std::endl;
    return 0;

}
