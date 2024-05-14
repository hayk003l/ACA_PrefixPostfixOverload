#include "A_Class.hpp"

A::A(const int& num) : _num(num) {}
A::~A() {}

///////////////////////////////////////////////////////////////////////////////
// Prefix

int& A::operator++() {
    _num = _num + 1;
    return _num;
}

int& A::operator--() {
    _num = _num - 1;
    return _num;
}

// Postfix

int A::operator++(int) {
    int temp(_num);
    _num = _num + 1;
    return temp;
}

int A::operator--(int) {
    int temp(_num);
    _num = _num - 1;
    return temp;
}

/////////////////////////////////////////////////////////////////////////////////

int A::getNum() const {
    return _num;
}

void A::setNum(const int& num) {
    _num = num;
}