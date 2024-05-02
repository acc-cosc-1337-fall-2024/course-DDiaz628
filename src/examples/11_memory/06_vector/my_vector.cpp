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

Vector::Vector(Vector&& v1)
: size{v1.size}, elements{v1.elements}
{
    cout<<"Move copy constructor-memory pointer switch "<<elements<<"\n";
    v1.elements = nullptr;
    v1.size = 0;
}

Vector& Vector::operator = (Vector&& v2)
{
    cout<<"Memory deallocated move assignment "<<elements<<"\n";
    delete[] elements;

    elements = v2.elements;

    cout<<"Memory ptr switched Move assignment "<<elements<<"\n";
    size = v2.size;
    v2.elements = nullptr;
    v2.size = 0;
    cout<<"Move constructor returning...\n";

    return *this;
}

void Vector::Reserve(int new_size)
{
    if(new_size <= capacity)
    {
        return;
    }

    int* temp = new int[new_size];
    cout<<"Memory allocated reserve "<<temp<<"\n";

    for(auto i = 0; i < size; i++)
    {
        temp[i] = elements[i];
    }

    cout<<"Memory deallocated Reserve "<<elements<<"\n";
    delete[] elements;

    elements = temp;
    capacity = new_size;
}

void Vector::Push_Back(int value)
{
    if(capacity == 0)
    {
        Reserve(RESERVE_DEFAULT_SIZE);
    }
    else if (capacity == size)
    {
        Reserve(capacity * RESERVE_DEFAULT_MULTIPLIER);
    }

    elements[size] = value;
    size++;
}

Vector :: ~Vector()
{
    cout<<"Deallocate memory at: "<<elements<<"\n";
    delete[] elements;
}

Vector get_vector()
{
    Vector v(3);
    return v;
}