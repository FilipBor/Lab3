#include <iostream>
#include <vector>
struct Matrix2D
{
   std::vector <std::vector<int>> contents;
   void print()
   {
       int rows = contents.size();
       int cols = contents[0].size();
       std::cout<<"Contents of the matrix: \n";
       for(int i = 0; i < rows; i++){
           for (int j = 0; j < cols; j++)
           {
               std::cout << contents[i][j]<<" ";
           }
           std::cout << std::endl;
       }
   }

};

int main(){
    Matrix2D a;
    Matrix2D b;

    a.contents = {{1,5,3}, {4,8,7}, {3,9,4}};
    b.contents = {{5,2,9}, {3,2,8}, {1,0,3}};

    a.print();
    b.print();


    return 0;

}
