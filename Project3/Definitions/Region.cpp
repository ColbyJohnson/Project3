#include <cmath>
#include "../Headers/Region.h"

double Region::distanceTo(Region r) {
    double latDiff = r.latitude - this->latitude;
    double longDiff = r.longitude - this->longitude;
    double distance = sqrt(pow(latDiff, 2) + pow(longDiff, 2));
    return distance;
}

//Getters
double Region::getLatitude() {return latitude;}
double Region::getLongitude() {return longitude;}
double Region::getPollutionLevel() {return pollutionLevel;}
string Region::getName() {return name;}
string Region::getState() {return state;}