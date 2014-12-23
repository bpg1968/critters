#include <cstdlib>
using std::rand;
#include "Critter.hpp"


Critter::Critter()
{
  CoordinatePair cp = {0, 0};
  coordinates = cp;
}


Critter::Critter(CoordinatePair cp) : coordinates(cp) {}


void Critter::setType(CritterType t)
{
  type = t;
}


void Critter::setCoordinates(CoordinatePair cp)
{
  coordinates = cp;
}


CritterStatus Critter::getStatus() const
{
  CritterStatus s;
  s.type = type;
  s.coordinates = coordinates;
  return s;

}


bool operator==(CoordinatePair lhs, CoordinatePair rhs)
{
  return (lhs.x == rhs.x && lhs.y == rhs.y);
}


CoordinatePair Critter::getMove()
{
  CoordinatePair result;
  int direction = rand() % 4;
  switch(direction)
  {
    case 0:
      result.x = coordinates.x;
      result.y = coordinates.y+1;
      break;
    case 1:
      result.x = coordinates.x;
      result.y = coordinates.y-1;
      break;
    case 2:
      result.x = coordinates.x+1;
      result.y = coordinates.y;
      break;
    case 3:
      result.x = coordinates.x-1;
      result.y = coordinates.y;
      break;
    default:
      // no default case
      ;
  }
  return result;
}


// END
