#ifndef EASYFIND_HPP
#define EASYFIND_HPP

template <typename T> T::iterator easyfind(const T &cont, int x)
{
  T::iterator itr;
  itr = find_first_of(cont, x);
  if (itr == std::npos)
    std::cout << "NO occurance of " << x << " found\n";
  return (itr);      
}

template <typename T> void printElements(const T &input)
{
  T::iterator itr;
  for(itr = t.begin; itr != t.end; itr++)
    std::cout << *itr << << " ";
  std::cout << std::endl;
}

#endif
