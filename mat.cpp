#include "mat.h"

template <class T>
Mat<T>::Mat(int row, int col){
    // if(row <= 0 || col <= 0){
    //     perror("矩阵维度小于0!");
    // }
    assert(row > 0 && col > 0);
    vector<T> temp(col);
    _mat.resize(row, temp);
    this->_row = row;
    this->_col = col;
    _size.push_back(row);
    _size.push_back(col);
}


template <class T>
void Mat<T>::operator ()(const int row, const int col, T value){
    _mat[row][col] = value;
}
template <class T>
T& Mat<T>:: operator ()(const int row, const int col){
    return _mat[row][col];
}
//重载+号
template <class T>
Mat<T> Mat<T>::operator +(const Mat<T> &p){
    assert(_row == p._row && _col == p._col);
    Mat<T> temp(_row , _col);
    for (int i = 0; i < _row; ++i){
        for (int j = 0; j < _col; ++j){
            temp._mat[i][j] = _mat[i][j] + p._mat[i][j];
        }
    }
    return temp;
}

template <class T>
Mat<T> Mat<T>::operator -(const Mat<T> &p){
    assert(_row == p._row && _col == p._col);
    Mat<T> temp(_row , _col);
    for (int i = 0; i < _row; ++i){
        for (int j = 0; j < _col; ++j){
            temp._mat[i][j] = _mat[i][j] - p._mat[i][j];
        }
    }
    return temp;
}

template <class T>
Mat<T> Mat<T>::operator *(const Mat<T> &p){
    assert(_col == p._row);
    Mat<T> temp(_row , p._col);
    for (int i = 0; i < _row; ++i){
        for (int j = 0; j < p._col; ++j){
            for (int k = 0; k < _col; ++k){
                temp._mat[i][j] += _mat[i][k] * p._mat[k][j];
            }       
        }
    }
    return temp;
}

template <class T>
Mat<T> Mat<T>::operator *(int v){
    Mat<T> temp(_row , _col);
    for (int i = 0; i < _row; ++i){
        for (int j = 0; j < _col; ++j){           
            temp._mat[i][j] = _mat[i][j] * v;                
        }
    }
    return temp;
}

template <class T>
Mat<T> Mat<T>::trans(){//转置矩阵
    Mat<T> temp(_col, _row);
    for (int i = 0; i < _col; ++i){
        for (int j = 0; j < _row; ++j){
            temp._mat[i][j] = _mat[j][i];
        }
    }
    return temp;
}

template <class T>
string Mat<T>::size(bool isString){
    return "(" + to_string(_row) + ", " + to_string(_col) + ")";
}

template <class T>
vector<int> Mat<T>::size(){   
    return {_row, _col};
}