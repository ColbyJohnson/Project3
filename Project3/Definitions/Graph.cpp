#include <iostream>
#include "../Headers/Graph.h"

using namespace std;

Graph::Graph() : vertexCount(0) {}

void Graph::Construct() {
    cout << "Hello, World!" << endl;
}

void Graph::checkNode(Region& r) {
    if(!mapper.count(r.getName())) {
        mapper[r.getName()] = r;
        vertexCount++;
    }        
}

bool Graph::isEdge(string from, string to) {
    return adjList.count(from) && adjList[from].count(to);
}

bool Graph::isEdge(Region& from, Region& to) {
    return adjList.count(from.getName()) && adjList[from.getName()].count(to.getName());
}

void Graph::addEdge(Region& from, Region& to) {
    checkNode(from);
    checkNode(to);

    double weight = from.distanceTo(to);
    adjList[from.getName()][to.getName()] = weight;
}

Region& Graph::nearestRegion(string _from) {
    double highestProximity = adjList[_from].begin()->second;
    string closest = adjList[_from].begin()->first;
    for(auto it = adjList[_from].begin(); it != adjList[_from].end(); it++) {
        if(it->second < highestProximity) {
            highestProximity = it->second; //Weight
            closest = it->first; //Mapped region name
        }
    }

    return mapper[closest];
}

Region& Graph::mostPollutedRegionInState(string state) {
    double highestPollution = 0;
    string output;
    for(auto it = mapper.begin(); it != mapper.end(); it++) {
        if(it->second.getState() == state && it->second.getPollutionLevel() > highestPollution) {
            highestPollution = it->second.getPollutionLevel();
            output = it->second.getName();
        }
    }

    return mapper[output];
}

int Graph::Magnitude() {
    return vertexCount;
}