#include <cassert>
#include "../Doodlebug.hpp"
#include "DoodlebugTest.hpp"


DoodlebugTest::DoodlebugTest()
{
  test_constructord();
  test_constructor1();
  test_getStatus();
}


void DoodlebugTest::test_constructord()
{
  Critter* c = new Doodlebug();
}


void DoodlebugTest::test_constructor1()
{
  CoordinatePair cp = {4, 7};
  Critter* c = new Doodlebug(cp);
  CritterStatus status = c->getStatus();
  assert(status.type == DOODLEBUG);
  assert(status.coordinates.x == 4);
  assert(status.coordinates.y == 7);
}


void DoodlebugTest::test_getStatus()
{
  Critter* c = new Doodlebug();
  CritterStatus status = c->getStatus();
  assert(status.type == DOODLEBUG);
  assert(status.coordinates.x == 0);
  assert(status.coordinates.y == 0);
}


// END
