#include "cassert"
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
  const int HORIZONTAL_SIZE = 20;
  const int VERTICAL_SIZE = 15;
  CritterContainer c(HORIZONTAL_SIZE, VERTICAL_SIZE);

  const int ANT_COORDINATE_X = 4;
  const int ANT_COORDINATE_Y = 6;
  const CoordinatePair ANT_COORDINATES = {ANT_COORDINATE_X, ANT_COORDINATE_Y};
  c.spawnAnt(ANT_COORDINATES);
  assert(c.getCellStatus(ANT_COORDINATES) == OCCUPIED_BY_ANT);

  const int DOODLEBUG_COORDINATE_X = 10;
  const int DOODLEBUG_COORDINATE_Y = 11;
  const CoordinatePair DOODLEBUG_COORDINATES = {DOODLEBUG_COORDINATE_X, DOODLEBUG_COORDINATE_Y};
  c.spawnDoodlebug(DOODLEBUG_COORDINATES);
  assert(c.getCellStatus(DOODLEBUG_COORDINATES) == OCCUPIED_BY_DOODLEBUG);

  const int LEFT_BOUNDARY = 0;
  const int RIGHT_BOUNDARY = HORIZONTAL_SIZE - 1;
  const int TOP_BOUNDARY = 0;
  const int BOTTOM_BOUNDARY = VERTICAL_SIZE - 1;

  const CoordinatePair TOP_LEFT_CORNER = {LEFT_BOUNDARY, TOP_BOUNDARY};
  assert(c.getCellStatus(TOP_LEFT_CORNER) == EMPTY);

  const CoordinatePair BOTTOM_LEFT_CORNER = {LEFT_BOUNDARY, BOTTOM_BOUNDARY};
  assert(c.getCellStatus(BOTTOM_LEFT_CORNER) == EMPTY);

  const CoordinatePair BOTTOM_RIGHT_CORNER = {RIGHT_BOUNDARY, BOTTOM_BOUNDARY};
  assert(c.getCellStatus(BOTTOM_RIGHT_CORNER) == EMPTY);

  const CoordinatePair TOP_RIGHT_CORNER = {RIGHT_BOUNDARY, TOP_BOUNDARY};
  assert(c.getCellStatus(TOP_RIGHT_CORNER) == EMPTY);

  const int LEFT_OUT_OF_BOUNDS = LEFT_BOUNDARY - 1;
  const int RIGHT_OUT_OF_BOUNDS = RIGHT_BOUNDARY + 1;
  const int TOP_OUT_OF_BOUNDS = TOP_BOUNDARY - 1;
  const int BOTTOM_OUT_OF_BOUNDS = BOTTOM_BOUNDARY + 1;

  const CoordinatePair ABOVE_TOP_LEFT_CORNER = {LEFT_BOUNDARY, TOP_OUT_OF_BOUNDS};
  assert(c.getCellStatus(ABOVE_TOP_LEFT_CORNER) == OUT_OF_BOUNDS);

  const CoordinatePair LEFT_OF_TOP_LEFT_CORNER = {LEFT_OUT_OF_BOUNDS, TOP_BOUNDARY};
  assert(c.getCellStatus(LEFT_OF_TOP_LEFT_CORNER) == OUT_OF_BOUNDS);

  const CoordinatePair ABOVE_LEFT_OF_TOP_LEFT_CORNER = {LEFT_OUT_OF_BOUNDS, TOP_OUT_OF_BOUNDS};
  assert(c.getCellStatus(ABOVE_LEFT_OF_TOP_LEFT_CORNER) == OUT_OF_BOUNDS);

  const CoordinatePair BELOW_BOTTOM_LEFT_CORNER = {LEFT_BOUNDARY, BOTTOM_OUT_OF_BOUNDS};
  assert(c.getCellStatus(BELOW_BOTTOM_LEFT_CORNER) == OUT_OF_BOUNDS);

  const CoordinatePair LEFT_OF_BOTTOM_LEFT_CORNER = {LEFT_OUT_OF_BOUNDS, BOTTOM_BOUNDARY};
  assert(c.getCellStatus(LEFT_OF_BOTTOM_LEFT_CORNER) == OUT_OF_BOUNDS);

  const CoordinatePair BELOW_LEFT_OF_BOTTOM_LEFT_CORNER = {LEFT_OUT_OF_BOUNDS, BOTTOM_OUT_OF_BOUNDS};
  assert(c.getCellStatus(BELOW_LEFT_OF_BOTTOM_LEFT_CORNER) == OUT_OF_BOUNDS);

  const CoordinatePair BELOW_BOTTOM_RIGHT_CORNER = {RIGHT_BOUNDARY, BOTTOM_OUT_OF_BOUNDS};
  assert(c.getCellStatus(BELOW_BOTTOM_RIGHT_CORNER) == OUT_OF_BOUNDS);

  const CoordinatePair RIGHT_OF_BOTTOM_RIGHT_CORNER = {RIGHT_OUT_OF_BOUNDS, BOTTOM_BOUNDARY};
  assert(c.getCellStatus(RIGHT_OF_BOTTOM_RIGHT_CORNER) == OUT_OF_BOUNDS);

  const CoordinatePair BELOW_RIGHT_OF_BOTTOM_RIGHT_CORNER = {RIGHT_OUT_OF_BOUNDS, BOTTOM_OUT_OF_BOUNDS};
  assert(c.getCellStatus(BELOW_RIGHT_OF_BOTTOM_RIGHT_CORNER) == OUT_OF_BOUNDS);

  const CoordinatePair ABOVE_TOP_RIGHT_CORNER = {RIGHT_BOUNDARY, TOP_OUT_OF_BOUNDS};
  assert(c.getCellStatus(ABOVE_TOP_RIGHT_CORNER) == OUT_OF_BOUNDS);

  const CoordinatePair RIGHT_OF_TOP_RIGHT_CORNER = {RIGHT_OUT_OF_BOUNDS, TOP_BOUNDARY};
  assert(c.getCellStatus(RIGHT_OF_TOP_RIGHT_CORNER) == OUT_OF_BOUNDS);

  const CoordinatePair ABOVE_RIGHT_OF_TOP_RIGHT_CORNER = {RIGHT_OUT_OF_BOUNDS, TOP_OUT_OF_BOUNDS};
  assert(c.getCellStatus(ABOVE_RIGHT_OF_TOP_RIGHT_CORNER) == OUT_OF_BOUNDS);



}


// END
