#include <iostream>
#include <vector>


void print(std::vector<unsigned int> list)
{
    for(const unsigned int& number : list)
    {
        std::cout << number << " ";
    }
    std::cout << std::endl;
}

unsigned int findmax(std::vector<unsigned int> list, unsigned int limit)
{
    unsigned int maxi = 0;
    for (unsigned int i = 0; i <= limit; i++)
    {
        if (list[i] > list[maxi])
        {
            maxi = i;
        }
    }
    return maxi;
}

std::vector<unsigned int> selsort(std::vector<unsigned int> list)
{
    for (unsigned int i = list.size(); i > 0; i--)
    {
        unsigned int maxi = findmax(list, i-1);

        unsigned int temp = list[i-1];
        list[i-1] = list[maxi];
        list[maxi] = temp;
    }
    return list;
}

int main()
{
    const std::vector<unsigned int> unsorted_list = {0, 2, 5, 2, 8, 9, 4, 7, 1, 5};
    const std::vector<unsigned int> sorted_list   = selsort(unsorted_list);
    
    print(unsorted_list);
    print(sorted_list);
    return 0;
}