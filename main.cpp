#include <iostream>


struct Point2D
{
    double x;
    double y;
};

int main (){

    Point2D mypoint;
    mypoint.x = 645.34;
    mypoint.y = 43.53;

    std::cout<< "Value of X: " << mypoint.x <<std::endl;
    std::cout<< "Value of Y: " << mypoint.y <<std::endl;

    Point2D myotherpoint;
    myotherpoint.x = 5453.54;
    myotherpoint.y = 4545.34;
    std::cout<< "Value of X: " << myotherpoint.x <<std::endl;
    std::cout<< "Value of Y: " << myotherpoint.y <<std::endl;


}
