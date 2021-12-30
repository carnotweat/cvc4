#include <cvc4/cvc4.h>
#include <iostream>

using namespace std;
using namespace CVC4;

void test() {
  cout << "creating bit vector representing 1/2 as 32 bit IEEE754" << endl;
  BitVector bv = BitVector("00111111000000000000000000000000");
  cout << "bit vector is " << bv << " with length " << bv.getSize() << endl;

  cout << "creating floating point from bit vector..." << endl;
  FloatingPoint fp = FloatingPoint(8, 23, bv);
  cout << "floating point number is " << fp << endl;
}

int main (int argc, char* argv[]) {
  test();
  cout << "test succeeded" << endl;
}
