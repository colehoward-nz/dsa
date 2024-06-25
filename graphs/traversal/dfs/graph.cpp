#include "graph.h"
#include <iostream>

void graph::add_arc(unsigned int x, unsigned int y)
{
    adj_list[x].push_back(y);
}

void graph::dfs(unsigned int source)
{
    time = 0;
    for (unsigned int node = 0; node < adj_list.size(); node++)
    {
        colour[node] = colours::WHITE;
        pred[node] = -1;
    }
    for (unsigned int node = 0; node < adj_list.size(); node++)
    {
        if (colour[node] == colours::WHITE)
            recursive_dfs(source);
    }
}

void graph::display()
{
    for (const auto& keyvalue : adj_list)
    {
        unsigned int node = keyvalue.first;        
        std::cout << node << " " << seen[node] << "|" << done[node] << " (pred=" << pred[node] << ")" << std::endl;
    }
}

void graph::recursive_dfs(unsigned int source)
{
    colour[source] = colours::GREY;
    seen[source] = time;
    time += 1;

    for (unsigned int arc : adj_list[source])
    {
        if (colour[arc] == colours::WHITE)
        {
            pred[arc] = source;
            recursive_dfs(arc);
        }
    }
    colour[source] = colours::BLACK;
    done[source] = time;
    time += 1;
}