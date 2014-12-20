#ifndef CRITTER_HPP
#define CRITTER_HPP


enum CritterType {ANT, DOODLEBUG};


typedef struct
{
  int x;
  int y;
} CoordinatePair;


bool operator==(CoordinatePair lhs, CoordinatePair rhs);


typedef struct
{
  CritterType type;
  CoordinatePair coordinates;
} CritterStatus;


class Critter
{
  public:
    Critter();
    Critter(CoordinatePair cp);
    CritterStatus getStatus() const;

  protected:
    void setType(CritterType t);
    void setCoordinates(CoordinatePair cp);

  private:
    CoordinatePair coordinates;
    CritterType type;
};


#endif // CRITTER_HPP
// END
