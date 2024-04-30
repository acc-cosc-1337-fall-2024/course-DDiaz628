//
#include <iostream>

#ifndef MY_VECTOR_H
#define MY_VECTOR_H

class Vector
{
public:
    Vector(int size);//constructor
    Vector(const Vector& v1);//copy constructor
    Vector& operator = (const Vector& v1);
    int Size(){return size;}
    int Capacity(){return capacity;}
    int& operator[](int index){return elements[index];}
    int& operator[](int index)const{return elements[index];}


    ~Vector();
private:
    int size{0};//keep track of current index & num of elements in list
    int capacity; //Max# of elements list can stor
    int* elements;//list of elements in vector
};


#endif