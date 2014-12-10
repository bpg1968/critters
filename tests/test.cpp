#include <iostream>
using std::cout;
using std::endl;
#include "compile_date.hpp"
#include "AntTest.hpp"
#include "DoodlebugTest.hpp"
#include "test.hpp"

int main()
{
  cout << COMPILE_DATE << endl;
  AntTest at;
  DoodlebugTest dt;
}


// END
