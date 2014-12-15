#ifndef CRITTER_HPP
#define CRITTER_HPP


enum CritterType {ANT, DOODLEBUG};


typedef struct
{
  int x;
  int y;
} CoordinatePair;


typedef struct
{
  CritterType type;
  CoordinatePair coordinates;
} CritterStatus;


class Critter
{
  public:
    Critter();

  private:
    CoordinatePair coordinates;
};


#endif // CRITTER_HPP
// END
