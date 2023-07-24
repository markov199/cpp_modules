#ifndef EASYFIND_HPP
#define EASYFIND_HPP

 #include<iostream>
 #include<vector>
 #include<array>
 #include<iterator>
 #include<sstream>
 #include<algorithm>

template <typename T> typename T::iterator easyfind(T &cont, int x)
{
typename T::iterator itr;
 
  	itr = std::find(cont.begin(), cont.end(), x);
	if (*itr != x)
	{
		std::cout << "No match found for " << x << "\n";
	}
	else
		std::cout << "Match found (" << x << ")\n";
  	return (itr);      
}

template <typename T> void printElements(T &input) 
{
  typename T::iterator itr;
  for(itr = input.begin(); itr != input.end(); itr++)
    std::cout << *itr << " ";
  std::cout << std::endl;
}

#endif
