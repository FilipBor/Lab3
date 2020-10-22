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
    tmp.x = rand() % 100;
    tmp.y = rand() % 100;

    return tmp;
}
void create_in_place(Point2D& point)
{
    point.x = rand()% 10;
    point.y = rand()% 10;
}
float distance(Point2D lhs, Point2D rhs)
{
    float res_x = pow((rhs.x - lhs.x), 2);
    float res_y = pow((rhs.y - lhs.y), 2);
   return sqrtf(res_y + res_x);
}
int main (){
    std::array<Point2D, 10> points;

    for ( int i = 0; i < 10; i++)
    {
        points[i] = create_point();
        std::cout <<"Point ["<<i <<"] = ("<<points[i].x <<", "<<points[i].y <<")"<<std::endl;
    }

    float largest_distance = 0.0;
    Point2D first, second;

    for ( int i = 0; i < 10; i++)
    {
        for ( int j = 0; j < 10; j++)
        {
            float d = distance(points[i], points[j]);
            if( d >= largest_distance){
                largest_distance = d;
                first = points[i];
                second = points[j];
            }
        }
    }
    std::cout <<"Largest distance is: "<<largest_distance<<std::endl;
    std::cout <<"First point is: ("<<first.x <<", "<< first.y<< ") "<<std::endl;
    std::cout <<"Second point is: ("<<second.x <<", "<< second.y<< ") "<<std::endl;

    return 0;

}
