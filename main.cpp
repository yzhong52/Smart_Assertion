#include <iostream>
#include "smart_assert.h"

using namespace std;


void example0(void){
    int i = -1;
    smart_assert( i>=0 && i<3, "Index out of bound" );
}

bool example1( void ){
    int i = -1;
    smart_return( i>=0 && i<3, "Index out of bound", false );
    cout << "This part of code is not going to be executed. " << endl;
    return true;
}

int main()
{
    example0();
    example1();

    cout << "Hello world!" << endl;
    return 0;
}
