#pragma once

#include <map>
#include <unordered_map>
#include <vector>
#include "Region.h"

using namespace std; 

class Graph {
    private:
    int vertexCount;
    map<string, Region> mapper; 
    unordered_map<string, unordered_map<string, int>> adjList; 

    public: 
    Graph();
    void Construct();
    void checkNode(Region& r);
    bool isEdge(Region& from, Region& to);
    bool isEdge(string from, string to);
    void addEdge(Region& from, Region& to);
    Region& nearestRegion(string _from);
    Region& mostPollutedRegionInState(string state);
    int Magnitude();
};