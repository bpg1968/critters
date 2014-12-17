#include "Critter.hpp"


Critter::Critter() {}


void Critter::setType(CritterType t)
{
  type = t;
}


CritterStatus Critter::getStatus() const
{
  CritterStatus s;
  s.type = type;
  s.coordinates = coordinates;
  return s;

}


// END
