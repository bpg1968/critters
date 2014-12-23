#ifndef ANTTEST_HPP
#define ANTTEST_HPP

#include "../Critter.hpp"

class AntTest
{
  public:
    AntTest();

  private:
    void test_constructord();
    void test_constructor1();
    void test_getStatus();
    void test_getMove();
    bool isValidMove(CoordinatePair from, CoordinatePair to);
};


#endif     // ANTTEST_HPP
// END
