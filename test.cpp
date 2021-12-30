#include <cvc4/cvc4.h>
#include <iostream>

using namespace std;
using namespace CVC4;

void test () {
  // 32 bit IEEE754
  cout << "creating standard 32 bit floating point size" << endl;
  FloatingPointSize sz = FloatingPointSize(8, 23);

  // standard rounding mode
  cout << "creating rounding mode instance (nearest even)" << endl;
  RoundingMode rm = RoundingMode::roundNearestTiesToEven;

  // 1/2
  cout << "constructing rational 1/2" << endl;
  Rational two = Rational(1, 2);

  // floating point from rational
  cout << "constructing floating point from rational " << two << endl;
  FloatingPoint fp = FloatingPoint(sz, rm, two);

  cout << "resulting floating point number is " << fp << endl;
}

int main (int argc, char* argv[]) {
  test ();
  cout << "test succeeded" << endl;
}
