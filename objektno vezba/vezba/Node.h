#pragma once
#include "Edge.h"
#include <vector>

class Node{

    private:

         std::vector<Node*>neighbours;
         std::vector<Edge*>edges;

    public:

        Node(){ };
        ~Node(){ };
    int Edge_count(){
        return edges.size();
    }
};
