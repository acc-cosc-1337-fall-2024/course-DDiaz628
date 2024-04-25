#include "arrays_dyn_1.h"

using std::cout; using std::shared_ptr;

void limit_dynamic_memory_scope(const int SIZE)
{
    int *nums = new int[SIZE];
    nums[0] = 5;

    cout<<nums[0]<<"\n";

    delete[] nums;
}

int* get_dynamic_memory(const int size)
{
    int *nums = new int[size];
    cout<<"Memory allocation: "<<nums<<"\n";
    return nums;

}
void delete_dynamic_memory(int* nums)
{
    cout<<"Deleting memory allocation: "<<nums<<"\n";
    delete[] nums;
}
void use_dynamic_memory(const int size)
{
    shared_ptr<int[]> nums(get_dynamic_memory(size), delete_dynamic_memory);
    nums[0] = 5;
    cout<<nums[0]<<"\n";

    cout<<"Exiting use of dynamic memory function\n";
}
