#include <iostream>
#include <cstdlib>

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

int main (){
    srand(0);
    Point2D mypoint = create_point();


    std::cout<< "Value of X: " << mypoint.x <<std::endl;
    std::cout<< "Value of Y: " << mypoint.y <<std::endl;

    Point2D myotherpoint;
    create_in_place(myotherpoint);
    std::cout<< "Value of X: " << myotherpoint.x <<std::endl;
    std::cout<< "Value of Y: " << myotherpoint.y <<std::endl;
return 0;

}
