/* Include files */

#include "flightControlSystem_cgxe.h"
#include "m_MzC2xl4HWRKP1Dkswc00K.h"

unsigned int cgxe_flightControlSystem_method_dispatcher(SimStruct* S, int_T
  method, void* data)
{
  if (ssGetChecksum0(S) == 401239454 &&
      ssGetChecksum1(S) == 4157675173 &&
      ssGetChecksum2(S) == 2919529083 &&
      ssGetChecksum3(S) == 4209478304) {
    method_dispatcher_MzC2xl4HWRKP1Dkswc00K(S, method, data);
    return 1;
  }

  return 0;
}
