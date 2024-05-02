//
#include <iostream>

#ifndef MY_VECTOR_H
#define MY_VECTOR_H

class Vector
{
public:
    Vector(int size);//constructor - rule 1 of 3 legacy c++
    Vector(const Vector& v1);//copy constructor - rule 2 of 3 legacy c++
    Vector& operator = (const Vector& v1);//Copy assignment - rule 3 of 3
    Vector(Vector&& v1);// move constructor - rule 4 of 5 modern C++
    Vector& operator = (Vector&& v2); // Move Assignment - rule 5 of 5
    int Size(){return size;}
    int Capacity(){return capacity;}
    int& operator[](int index){return elements[index];}
    int& operator[](int index)const{return elements[index];}
    void Push_Back(int value);


    ~Vector();
private:
    int size{0};//keep track of current index & num of elements in list
    int capacity; //Max# of elements list can stor
    int* elements;//list of elements in vector
    const int RESERVE_DEFAULT_SIZE{8};
    const int RESERVE_DEFAULT_MULTIPLIER{2};
    void Reserve(int new_size);
};


#endif

Vector get_vector();