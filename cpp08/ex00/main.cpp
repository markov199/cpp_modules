#include <iostream>
#include<list>
#include<vector>
#include"easyfind.hpp"

int main()
{
	try
	{
		// int myints = {20, 10, 30, 53, 40, 200, 50, 1, 0, 100};
		int myints[] = {16,2,77,29};
		std::list<int> numbers (myints, myints + sizeof(myints) / sizeof(int));
		std::vector<int> fifth (myints, myints + sizeof(myints) / sizeof(int) );
		std::cout << "\n ******************* array ******************\n";
		printElements(numbers);
		easyfind(numbers, 530);
		easyfind(numbers, 53);
		std::cout << "\n ******************* vector ******************\n";

		printElements(fifth);
		// std::vector<int>::iterator itvec;
		easyfind(fifth, 230);
		easyfind(fifth, 77);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
    return 0;
}