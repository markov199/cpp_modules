#include <iostream>
#include<array>
#include<vector>
#include"easyfind.hpp"
// template<typename T, typename U>
// U largest_elem(const T number_set, size_t len)
// {
//      double largest = number_set[0];
//     for(size_t index = 0; index < len; ++index)
//         if (number_set[index] > largest)
//             largest = number_set[index];
//     return largest;
// }

int main()
{
	try
	{
		std::array<int, 10> numbers = {20, 10, 30, 53, 40, 200, 50, 1, 0, 100};
		int myints[] = {16,2,77,29};
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