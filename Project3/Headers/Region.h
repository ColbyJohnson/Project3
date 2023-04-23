#pragma once

#include <string>

using namespace std;

class Region {
    private:
    double latitude, longitude, pollutionLevel;
    string name;
    string state;

    public:
    //Constructors
    Region() : name(""), state(""), latitude(0), longitude(0), pollutionLevel(0) {}
    Region(string _name, string _state, double _lat, double _long, double _pollutionLevel) : 
    name(_name), state(_state), latitude(_lat), longitude(_long), pollutionLevel(_pollutionLevel) {}
    //Accessors 
    double getLatitude(), getLongitude(), getPollutionLevel();
    string getName(), getState();
    //Implementations
    double distanceTo(Region r);
};