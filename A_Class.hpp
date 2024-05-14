#ifndef __ACLASS__
#define __ACLASS__

class A {
private:
    int _num = 0;
public:
    A(const int& num);
    ~A();
    int& operator++();
    int operator++(int);

    int& operator--();
    int operator--(int);

public:
    int getNum() const;
    void setNum(const int& num);

};


#endif // __ACLASS__