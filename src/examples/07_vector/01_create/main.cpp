#include <vector>
#include <iostream>

using std::vector; using std:: cout;

int main()
{
    vector<int> nums{7, 2, 9};
    cout<<nums[1]<<"\n";

    for(auto i = 0; i < nums.size(); i++)
    {
        cout<<nums[i]<<"\n";
    }

    cout<<"\n";

    for(auto num: nums)
    {
        cout<<num<<"\n";
    }

    return 0;
}