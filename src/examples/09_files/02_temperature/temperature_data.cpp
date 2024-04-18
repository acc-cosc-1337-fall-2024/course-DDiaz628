//temperature_data.cpp
#include "temperature_data.h"

using std::cout; using std::ifstream;
using std::ofstream; using std::vector;

void TemperatureData::save_temps(const vector<Temperature>& temps)
{
    ofstream file;

    cout<<"open file\n";
    file.open(file_name);

    cout<<"Writing to file...\n";

    for(auto temp: temps)
    {
        file<<temp.get_hour();
        file<<" ";
        file<<temp.get_reading();
        file<<"\n";
    }
}

vector<Temperature> TemperatureData::get_temps()
{
    vector<Temperature> temps;

    auto hour = 0;
    auto reading = .1;

    ifstream file;
    cout<<"Open file\n";
    file.open(file_name);

    cout<<"read from file\n";

    if(file.is_open())
    {
        while(file>>hour>>reading)
        {
            Temperature temp(hour, reading);
            temps.push_back(temp);
        }
    }
    else
    {
        cout<<"cannot open file\n";
    }    

    return temps;
}