#include <iostream>
#include <vector>

#include "graph.cpp"


int main()
{
    graph g;
    g.add_arc(0, 1);
    g.add_arc(1, 2);
    g.add_arc(2, 0);
    g.add_arc(2, 3);
    g.add_arc(3, 1);

    g.dfs(0);
    g.display();
    return 0;
}