Smart_Assertion
===============

Assertion won't give any allerts under release mode, which sometimes might hide potential bugs. 

However, we sometime may prefer to develop the project under release mode simply because of running speed. 

This smart assertion will give an error message output as red text on terminal. 

Notes:

1. This is only compatible under Linux. 
2. Its usage is similar to static_assert in C++ 11

Sample usage
===============

Code

    int i = -1;
    smart_assert(i>=0 && i<3, "Index out of bound" );

Output

    Assertion failed: i>0 && i<3
      Messages: Index out of bound
      Location: file main.cpp, line 17
