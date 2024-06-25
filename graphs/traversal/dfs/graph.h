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
    std::map<unsigned int, unsigned int> seen;
    std::map<unsigned int, unsigned int> done;
    std::map<unsigned int, signed int> pred;
    unsigned int time;

    void add_arc(unsigned int x, unsigned int y);
    void dfs(unsigned int source);
    void display();

private:
    void recursive_dfs(unsigned int source);
};