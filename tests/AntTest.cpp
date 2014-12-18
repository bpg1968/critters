#include <cassert>
#include "../Ant.hpp"
#include "AntTest.hpp"


AntTest::AntTest()
{
  test_constructord();
  test_constructor1();
  test_getStatus();
}


void AntTest::test_constructord()
{
  Critter* c = new Ant();
  delete c;
}


void AntTest::test_constructor1()
{
  CoordinatePair cp = {4, 7};
  Critter* c = new Ant(cp);
  CritterStatus status = c->getStatus();
  assert(status.type == ANT);
  assert(status.coordinates.x == 4);
  assert(status.coordinates.y == 7);
  delete c;
}


void AntTest::test_getStatus()
{
  CoordinatePair cp = {0, 0};
  Critter* c = new Ant(cp);
  CritterStatus status = c->getStatus();
  assert(status.type == ANT);
  assert(status.coordinates.x == 0);
  assert(status.coordinates.y == 0);
  delete c;
}



// END
