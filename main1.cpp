#include<iostream>
int main()
{
    int rows;
    std::cout<<"Enter number of rows in Right Triangle Star Pattern: ";
    std::cin>>rows;
    std::cout << "Pattern:" << std::endl;
    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= i; ++j) {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }

    return 0;

}