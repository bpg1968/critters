#include <cassert>
#include "../Ant.hpp"
#include "AntTest.hpp"


AntTest::AntTest()
{
  test_constructord();
  test_getStatus();
}


void AntTest::test_constructord()
{
  Critter* c = new Ant();
}


void AntTest::test_getStatus()
{
  Critter* c = new Ant();
  CritterStatus status = c->getStatus();
  assert(status.type == ANT);
  assert(status.coordinates.x == 0);
  assert(status.coordinates.y == 0);
}


// END
