#include "Doodlebug.hpp"
#include "Ant.hpp"


Ant::Ant()
{
  setType(ANT);
}


Ant::Ant(CoordinatePair cp)
{
  setType(ANT);
  setCoordinates(cp);
}


// END
