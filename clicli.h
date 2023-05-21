#ifndef CLICLI_H
#define CLICLI_H
#include "camtrack.h"

 class clicli {

  public:
   clicli(Camtrack &camtrack) ;
   void begin();   //must be called from  void setup()
   void run();   //must be called from  void loop()

  private:
   Camtrack &mycamtrack;
   int number;

 };
#endif 