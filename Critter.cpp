#include "Critter.hpp"


Critter::Critter() {}


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


// END
