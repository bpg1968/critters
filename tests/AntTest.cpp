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


void AntTest::test_getMove()
{
  CoordinatePair cp = {0, 0};
  Critter* c = new Ant(cp);
  CoordinatePair moveTo = c->getMove();
  assert(isValidMove(cp, moveTo));
}


bool AntTest::isValidMove(CoordinatePair from, CoordinatePair to)
{
  return (
    (to.x == from.x && to.y == from.y+1) ||
    (to.x == from.x && to.y == from.y-1) ||
    (to.x == from.x+1 && to.y == from.y) ||
    (to.x == from.x-1 && to.y == from.y)
  );
}


// END
