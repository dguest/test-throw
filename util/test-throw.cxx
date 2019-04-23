
// AnalysisBase tool include(s):
#include "xAODRootAccess/Init.h"
#include "xAODRootAccess/TEvent.h"
#include "xAODRootAccess/tools/ReturnCheck.h"

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
  // set up xAOD basics
  // RETURN_CHECK(ALG, xAOD::Init());
  // xAOD::TEvent event(xAOD::TEvent::kClassAccess);

}
