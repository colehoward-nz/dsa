#include "graph.h"
#include <iostream>


void graph::add_arc(unsigned int x, unsigned int y)
{
    adj_list[x].push_back(y);
}

void graph::bfs() {
    unsigned int node;
    for (const auto& keyvalue : adj_list) {
        node = keyvalue.first;
        colour[node] = colours::WHITE;
        pred[node] = -1;
    }

    for (const auto& keyvalue : adj_list) {
        node = keyvalue.first;
        if (colour[node] == colours::WHITE) {
            bfs_visit(node);
        }
    }
}

void graph::bfs_visit(unsigned int source) {
    colour[source] = colours::GREY;
    depth[source] = 0;
    q.push(source);

    while (!q.empty()) {
        unsigned int u = q.front();
        for (unsigned int neighbour : adj_list[u]) {
            if (colour[neighbour] == colours::WHITE) {
                colour[neighbour] = colours::GREY;
                pred[neighbour] = u;
                depth[neighbour] = depth[u] + 1;
                q.push(neighbour);
            }
        }
        q.pop();
        colour[u] = colours::BLACK;
    }
}

void graph::display()
{
    for (const auto& keyvalue : adj_list)
    {
        unsigned int node = keyvalue.first;        
        std::cout << node << " " << depth[node] << " (pred=" << pred[node] << ")" << std::endl;
    }
}