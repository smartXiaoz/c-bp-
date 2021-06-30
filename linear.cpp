#include "iostream"
#include "linear.h"

Linear::Linear(int i_dim, int o_dim){
    assert(i_dim > 0 && o_dim > 0);
    _input_dim = i_dim;
    _output_dim = o_dim;
    _weight = _weight.randn(o_dim, i_dim);
    _bias = _bias.randn(o_dim, 1);
    _out_Mat = Mat<float>(o_dim, 1);
}
 

void Linear::forward(Mat<float> in_mat){
    _out_Mat = _weight * in_mat + _bias;
}


