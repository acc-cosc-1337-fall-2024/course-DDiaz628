#include "my_vector.h"

using std::cout;
//

Vector :: Vector(int s)
:capacity(s), elements{new int [s]}
{
    cout<<"memory allocated at: "<<elements<<"\n";
}

Vector::Vector(const Vector& v1) 
: size{v1.size}, capacity{v1.capacity}, elements{new int[v1.size]}
{
    cout<<"Memory allocated in copy constructor "<<elements<<"\n";

    for(auto i = 0; i < v1.size; i++)
    {
        elements[i] = v1.elements[i];
    }
}

Vector& Vector::operator = (const Vector& v1)
{
    int* temp = new int[v1.size];

    for (auto i = 0; i < v1.size; i++)
    {
        temp[i] = v1.elements[i];
    }

    cout<<"deallocate memory copy assignment "<<elements<<"\n";
    delete[] elements;

    elements = temp;
    temp = nullptr;

    cout<<"Memory allocation at "<<elements<<"\n";

    size = v1.size;

    
    return *this;
}

Vector :: ~Vector()
{
    cout<<"Deallocate memory at: "<<elements<<"\n";
    delete[] elements;
}