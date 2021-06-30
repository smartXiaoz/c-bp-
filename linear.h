#ifndef INCLUDE_LINEAR_H
#define INCLUDE_LINEAR_H
#include "iostream"
#include "assert.h"
#include "mat.h"
//#include "mat.cpp"
using namespace std;

class Linear{
public:
    Linear(int i_dim, int o_dim);//1，输入 2，输出
    ~Linear(){};
    void forward(Mat<float> in_mat);

public:
    int _input_dim;//输入维数
    int _output_dim;//输出维数
    Mat<float> _weight;
    Mat<float> _bias;  
    Mat<float> _out_Mat;  
};


#endif