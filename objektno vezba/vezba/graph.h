#pragma once
#include "Edge.h"
#include "Node.h"
#include <vector>

enum Connection_Types{From, To, Bidirectional};

class Graph{

    private:

    std::vector<Node*> nodes;
    std::vector<Edge*> edges;

    public:

    Graph(){ };
    ~Graph(){ };
      int Node_count(){
        return nodes.size();
    }
       int Edge_count(){
        return edges.size();
    }

    void Add_Node(Node node){
        Node* ptr = &node;
        this->nodes.push_back(ptr);
    }
};
