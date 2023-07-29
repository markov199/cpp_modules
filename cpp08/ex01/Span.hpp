#ifndef SPAN_HPP
#define SPAN_HPP
#include<stdexcept>
#include<vector>
class Span
{
  private:
    unsigned int _N;
	std::vector<int> _array;
    Span();
    
  public:
    Span(unsigned int size);
    ~Span();
    Span(const Span &copy);
    Span &operator=(const Span &rhs);
    void addNumber(int num);
    void fill(int x);
    void fill(std::vector<int>::iterator start, std::vector<int>::iterator end);
    void fill(int *start, int *end);
    unsigned int shortestSpan(void);
    unsigned int longestSpan(void);
    class invalidOperation: public std::exception
	{
		public:
			const char *what() const throw();
	};
};

#endif
