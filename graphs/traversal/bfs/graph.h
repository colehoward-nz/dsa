#pragma once
#include <map>
#include <list>
#include <queue>


enum class colours
{
    WHITE,
    GREY,
    BLACK
};

class graph
{
public:
    std::map<unsigned int, std::list<unsigned int>> adj_list;
    std::map<unsigned int, colours> colour;
    std::map<unsigned int, signed int> pred;
    std::map<unsigned int, unsigned int> depth;
    std::queue<unsigned int> q;

    void add_arc(unsigned int x, unsigned int y);
    void bfs();
    void display();

private:
    void bfs_visit(unsigned int source);
};