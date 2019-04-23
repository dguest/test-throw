
// stl includes
#include <stdexcept>
#include <string>


//////////////////
// main routine //
//////////////////
int main (int, char *[])
{
  throw std::runtime_error("broken");
  return 0;
}
