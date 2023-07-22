#ifndef SPAN_HPP
define SPAN_HPP

class Span
{
  private:
    unsigned interger _N;
    template <typename T> *_array;

  public:
    Span();
    Span(int size);
    ~Span();
    Span(const &copy);
    Span &operator=(const &rhs);
    void addNumber(int num);
    unsigned int shortestSpan(void);
    unsigned int longestSpan(void);
}

#endif
