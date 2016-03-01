#pragma once
//#include "Node.h"


class Edge{

    public:
        Edge(){ };
        //Edge(&Node first,&Node second);
        ~Edge(){ };


    private:
        int* Nodes[2];  // adrese povezanih-susednih (incidentnih) cvorova
        bool Direction;  // da li postoji smer
};
