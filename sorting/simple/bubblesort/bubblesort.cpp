#include <iostream>
#include <vector>


void print(std::vector<unsigned int> list)
{
    for (unsigned int& num : list)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

void bubblesort(std::vector<unsigned int>& list) {
    for (int i = 0; i < list.size()-1; i++) {
        for (int j = 0; j < list.size()-i-1; j++) {
            if (list[j] > list[j+1])
                std::swap(list[j], list[j+1]);
        }
    }
}

int main()
{
    std::vector<unsigned int> list = {0,2,5,7,4,1,8,9,6,3};
    print(list);
    bubblesort(list);
    print(list);
    return 0;
}