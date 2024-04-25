//
#include <iostream>

#ifndef MY_VECTOR_H
#define MY_VECTOR_H

class Vector
{
public:
    Vector(int size);
    int Size(){return size;}
    int Capacity(){return capacity;}

    ~Vector();
private:
    int size{0};//keep track of current index & num of elements in list
    int capacity; //Max# of elements list can stor
    int* elements;//list of elements in vector
};


#endif