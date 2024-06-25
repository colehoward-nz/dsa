#pragma once
#include <map>
#include <list>


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
    std::map<unsigned int, unsigned int> pred;
    std::map<unsigned int, unsigned int> depth;

    void add_arc(unsigned int x, unsigned int y);
    void bfs(std::map<unsigned int, std::list<unsigned int>> adj_list);
    void display();

private:
    void bfs_visit(unsigned int source);
};