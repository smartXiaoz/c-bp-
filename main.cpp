#include "iostream"
#include "linear.h"
#include "vector"
#include "mat.h"

using namespace std;


int main(){

    Mat<float> mat(5, 1);
    mat.randn();
    // Mat<float> mat1(2, 3);
    // Mat<float> mat3(3, 2);
    // mat._mat[0] = {1, 2, 3};
    // mat._mat[1] = {4, 5, 6};
    // mat1._mat[0] = {1, 2, 3};
    // mat1._mat[1] = {4, 5, 6};
    // mat3._mat[0] = {1, 1};
    // mat3._mat[1] = {1, 1};
    // mat3._mat[2] = {1, 1};
    // vector<int> v1;
    // cout << mat(1, 2) << endl;
    // mat(1, 2) = 5.5;
    // cout << mat(1, 2) << endl;
    // Mat<float> mat2 = mat + mat1;
    // mat2 = mat - mat1;
    // mat2 = mat * 2;
    // mat2 = (mat * 2) * mat3;
    // mat2 = mat.trans();
    // cout << 1 << endl;
    // cout << mat.size()[0] << endl;

    // Linear linear = Linear(2, 5);
    // 
    Linear linear(5, 5);
    linear.forward(mat);
    cout << 1 << endl;
    system("pause");
    return 0;
}
