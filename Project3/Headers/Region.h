#pragma once

#include <string>

using namespace std;

class Region {
    private:
    double latitude, longitude, pollutionLevel;
    string name;
    string state;

    public:
    Region() : name(""), state(""), latitude(0), longitude(0), pollutionLevel(0) {}
    Region(string _name, string _state, double _lat, double _long, double _pollutionLevel) : 
    name(_name), state(_state), latitude(_lat), longitude(_long), pollutionLevel(_pollutionLevel) {}
    double distanceTo(Region r);
    //Accessors 
    double getLongitude(), getLatitude(), getPollutionLevel();
    string getName(), getState();
};