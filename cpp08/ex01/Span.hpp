#ifndef SPAN_HPP
define SPAN_HPP

class Span
{
  private:
    unsigned interger N;

  public:
    Span();
    Span(int size);
    ~Span();
    Span(const &copy);
    Span &operator=(const &rhs);
    addNumber(int num);
    shortestSpan(void);
    longestSpan(void);
}

#endif
