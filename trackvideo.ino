#include "clicli.h"
#include "camtrack.h"
Camtrack mycamtrack(1);
clicli mycli(mycamtrack);  

void setup() { 
  
  mycli.begin();

 }

void loop() { 
  mycli.run();
 }