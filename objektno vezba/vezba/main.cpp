#include <iostream>

#include "graph.h"

using namespace std;

int main()
{
    Graph Karleusa;
    Node Szto;
    Node Neki;

    Karleusa.Add_Node(Szto);
    Karleusa.Add_Node(Neki);
    cout << Karleusa.Node_count();



    return 0;
}
