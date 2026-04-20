// Automatically generated C++ file on Sun Apr 19 18:45:34 2026
//
// To build with Digital Mars C++ Compiler:
//
//    dmc -mn -WD -o digital.cpp Vdigital*.cpp verilated.lib kernel32.lib
//
// The intended design of the Verilog interface is such that this
// file should not need editing unless you change the symbol.

#include <verilated.h>
#include "Vdigital.h"

extern "C" __declspec(dllexport) void Destroy(Vdigital *instance)
{
   if(instance)
      delete(instance);
}

extern "C" __declspec(dllexport) void digital(Vdigital **instance, double t, union uData *data)
{
   if(!*instance)
      *instance = new Vdigital;
   (*instance)->clk = data[0].b;
   (*instance)->in = data[1].i;

   (*instance)->eval();

   data[2].i = (*instance)->out;
}
