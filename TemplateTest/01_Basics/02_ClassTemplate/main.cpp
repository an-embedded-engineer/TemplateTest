#include <iostream>
#include "Stack.h"

int main(void)
{
    std::cout << "Int Stack : " << std::endl;

    Stack<int> int_stack(5);

    for (size_t i = 0; i < 5; i++)
    {
        std::cout << "Push : " << i << std::endl;
        int_stack.Push((int)i);
    }

    for (size_t i = 0; i < 5; i++)
    {
        const auto& data = int_stack.Top();
        std::cout << "Top : " << data << std::endl;
        std::cout << "Pop : " << data << std::endl;
        int_stack.Pop();
    }

    std::cout << "Double Stack : " << std::endl;

    Stack<double> double_stack(10);

    for (size_t i = 0; i < 10; i++)
    {
        double data = 1.234 * (i + 1);
        std::cout << "Push : " << data << std::endl;
        double_stack.Push(data);
    }

    for (size_t i = 0; i < 10; i++)
    {
        const auto& data = double_stack.Top();
        std::cout << "Top : " << data << std::endl;
        std::cout << "Pop : " << data << std::endl;
        double_stack.Pop();
    }

    return 0;
}
