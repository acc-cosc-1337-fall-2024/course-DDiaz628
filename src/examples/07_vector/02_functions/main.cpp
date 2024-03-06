#include <vector>
#include <iostream>

using std::vector; using std:: cout;

int main()
{
    vector<int> nums{7, 2, 9};

    cout<<"size: "<<nums.size()<<"\n";
    cout<<"capacity: "<<nums.capacity()<<"\n";

    nums.push_back(5);

    cout<<"size: "<<nums.size()<<"\n";
    cout<<"capacity: "<<nums.capacity()<<"\n";

    return 0;
}