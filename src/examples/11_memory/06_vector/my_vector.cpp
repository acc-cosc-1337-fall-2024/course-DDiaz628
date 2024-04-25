#include "my_vector.h"

using std::cout;
//

Vector :: Vector(int s)
:capacity(s), elements{new int [s]}
{
    cout<<"memory allocated at: "<<elements<<"\n";
}

Vector :: ~Vector()
{
    delete[] elements;
    cout<<"Delete memory at: "<<elements<<"\n";
}