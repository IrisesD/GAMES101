#include <iostream>
#include <eigen3/Eigen/Core>
#include <eigen3/Eigen/Dense>

using namespace std;
using namespace Eigen;
#define Matrix_Size 50

int main(){
    Matrix<float,2,3> matrix_23;
    matrix_23 << 1,2,3,4,5,6;
    cout << "matrix_23 is \n" << matrix_23 << endl;
    return 0;
}
