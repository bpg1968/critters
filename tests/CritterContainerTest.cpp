#include "../CritterContainer.hpp"
#include "CritterContainerTest.hpp"


CritterContainerTest::CritterContainerTest()
{
  test_constructord();
  test_constructor2();
  test_getCellStatus();
}


void CritterContainerTest::test_constructord()
{
  CritterContainer c;
}

void CritterContainerTest::test_constructor2()
{
  CritterContainer c(20, 15);
}


void CritterContainerTest::test_spawnAnt()
{
  CritterContainer c(20, 15);
  CoordinatePair cp = {5, 5};
  c.spawnAnt(cp);
}


void CritterContainerTest::test_spawnDoodlebug()
{
  CritterContainer c(20, 15);
  CoordinatePair cp = {5, 5};
  c.spawnDoodlebug(cp);
}


void CritterContainerTest::test_getCellStatus()
{
  CritterContainer c;
}


// END
