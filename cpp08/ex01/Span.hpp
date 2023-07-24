#ifndef SPAN_HPP
#define SPAN_HPP
 #include<stdexcept>
class Span
{
  private:
	int *_array;
    unsigned int _N;
	unsigned int _size;
    Span();
    
  public:
    Span(unsigned int size);
    ~Span();
    Span(const Span &copy);
    Span &operator=(const Span &rhs);
    void addNumber(int num);
    unsigned int shortestSpan(void);
    unsigned int longestSpan(void);
	class invalidOperation: public std::exception
	{
		public:
			const char *what() const throw();
	};
};

#endif
