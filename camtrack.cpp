/*

               Video tracking Software for Arduino


               
      by Gal Arbel
       2023
*/

#include <Arduino.h>
#include "clicli.h"
#include "camtrack.h"


Camtrack::Camtrack(int x){
  ;
}

void Camtrack::begin() {
  Serial.begin(115200);
}

