#include <iostream>
#include <queue>
#include "graph.cpp"

int main()
{
    graph g;
    g.add_arc(0, 1);
    g.add_arc(0, 3);
    g.add_arc(1, 2);
    g.add_arc(1, 3);
    g.add_arc(2, 1);
    g.add_arc(3, 4);
    g.add_arc(4, 2);

    g.bfs();
    g.display();
    return 0;
}