#include <iostream>
#include <vector>


struct Matrix2D
{
   std::vector <std::vector<int>> contents;
    int cols(){
        return contents[0].size();
    }
    int rows() {
        return contents.size();
    }
   void multiply(Matrix2D other ){
       if (other.rows() == cols())
       {
           for (int i = 0; i < rows(); i++)
           {
               for (int j = 0; j < cols(); j++)
               {
                   other.contents[i][j] *= contents[i][j];
               }
           }
       }
       else
       {
           std::cout <<"Dimensions must match!"<< std::endl;
       }
   }



   void input_matrix(){
       int rows, cols;
       std::cout<<"Introduce number of rows: "<<std::endl;
       std::cin >> rows;
       std::cout<<"Introduce number of columns: "<<std::endl;
       std::cin >> cols;
       for(int i = 0; i < rows; i++) {
           std::vector<int> row;
           int tmp;
           std::cout <<"Adding a row with "<< cols << " columns"<<std::endl;
           for (int j = 0; j < cols; j++){
           std::cout <<"Introduce value: "<<std::endl;
           std::cin >> tmp;
           row.push_back(tmp);
           }
        contents.push_back(row);
       }
   }

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
    Matrix2D a, b;

    std::cout << "Introduce data for matrix a: "<<std::endl;
    a.input_matrix();
    std::cout << "Introduce data for matrix b: "<<std::endl;
    b.input_matrix();

    std::cout << "Printing matrix a: "<<std::endl;
    a.print();
    std::cout << "Printing matrix b: "<<std::endl;
    b.print();

    a.multiply(b);
    std::cout << "Printing multiplied matrices: "<<std::endl;

    a.print();

    return 0;

}
