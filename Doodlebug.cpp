#include "Critter.hpp"
#include "Doodlebug.hpp"


Doodlebug::Doodlebug()
{
  setType(DOODLEBUG);
}


Doodlebug::Doodlebug(CoordinatePair cp)
{
  setType(DOODLEBUG);
  setCoordinates(cp);
}


// END
