Smart_Assertion
===============

Assertion won't give any allerts under release mode, which sometimes might hide potential bugs. 

However, we sometime may prefer to develop the project under release mode simply because of running speed. 

This smart assertion will give an error message even under release mode and pause the program by `system("pause")`. 

And also, the output of the original `assert` is ugly and hard to read. The output of smart_assert give the same error message in a much more elegent way. 

This is only tested under windows. 

Sample usage
===============

Code

    int i = -1;
    smart_assert(i>=0 && i<3, "Index out of bound" );

Output

    Assertion failed: i>0 && i<3
      Messages: Index out of bound
      Location: file main.cpp, line 17
