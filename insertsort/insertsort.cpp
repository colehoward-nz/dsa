#include <iostream>
#include <vector>


std::vector<unsigned int> insertsort(std::vector<unsigned int>& list)
{
    for (unsigned int i = 1; i < list.size(); i++)
    {
        unsigned int current = list[i];
        int sorted_ptr = i-1;

        while (sorted_ptr >= 0 && current < list[sorted_ptr])
        {
            list[sorted_ptr+1] = list[sorted_ptr];
            sorted_ptr--;
        }
        list[sorted_ptr+1] = current;
    }
    return list;
}

void print(std::vector<unsigned int> list)
{
    for (unsigned int& num : list)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

int main()
{
    std::vector<unsigned int> unsorted_list = {5,1,2,6,8,3,2,6,4,0};
    print(unsorted_list);
    std::vector<unsigned int> sorted_list   = insertsort(unsorted_list);    
    print(sorted_list);
    return 0;
}