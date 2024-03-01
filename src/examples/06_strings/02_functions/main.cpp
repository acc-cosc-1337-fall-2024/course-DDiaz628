#include "function_str.h"

using std::string;

int main()
{
    //string lang = "C++";

    //display_str_while(lang);

    //display_str_while_ref(lang);

    //display_str_for(lang);

    //display_for_ref(lang);

    //display_for_range(lang);

    string s0 = "C++ is cool";
    cout<<s0<<"\n";

    string s1(s0, 4, 7);
    cout<<s1<<"\n";

    string s2("Another character sequence", 12);
    cout<<s2<<"\n";

    string s3(10, 'x');
    cout<<s3<<"\n";

    string s4(10, 42);//10 *
    cout<<s4<<"\n";


    return 0;
}