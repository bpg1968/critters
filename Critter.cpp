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


// END
