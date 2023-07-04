C++ destroys all objects in scope after an exception occurs, thereby reducing resource usage.


Throwing exceptions from C++ constructors
An exception should be thrown from a C++ constructor whenever an object cannot be properly constructed or initialized. Since there is no way to recover from failed object construction, an exception should be thrown in such cases.

Constructors should also throw C++ exceptions to signal any input parameters received outside of allowed values or range of values.

Since C++ constructors do not have a return type, it is not possible to use return codes. Therefore, the best practice is for constructors to throw an exception to signal failure.

The throw statement can be used to throw an C++ exception and exit the constructor code.

Having a try catch in constructor:

https://www.oreilly.com/library/view/c-cookbook/0596007612/ch09s03.html


Try in initializing list:
https://www.oreilly.com/library/view/c-cookbook/0596007612/ch09s04.html



https://cplusplus.com/doc/oldtutorial/exceptions/

using std::boolalpha

https://cplusplus.com/reference/ios/boolalpha/


exceptions:
https://isocpp.org/wiki/faq/exceptions
https://www.ibm.com/docs/en/zos/2.4.0?topic=reference-exception-handling-c-only

nested class:
https://en.cppreference.com/w/cpp/language/nested_types

https://www.scaler.com/topics/nested-class-in-cpp/


using srand() and rand():

https://www.educative.io/answers/what-are-the-rand-and-srand-functions-in-cpp

