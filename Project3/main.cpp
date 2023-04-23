#include <iostream>
#include "Headers/Graph.h"
#include "Headers/Region.h"

using namespace std;

int main() {
    Graph g;
    g.Construct();
    g.simpleTraversal();
    Region r = g.mostPollutedRegionInState("Arizona");
    cout << r.getName() << endl;
    cout << g.Magnitude() << endl;
    return 0;
}