#include "LedControlMS.h"
#define NumMatrix 1       // Cuantas matrices vamos a usar

LedControl lc=LedControl(12,11,10, NumMatrix);  // Creamos una instancia de LedControl

void setup()
{
  pinMode(2,INPUT);
  for (int i=0; i< NumMatrix ; i++){
    lc.shutdown(i,false);    // Activar las matrices
    lc.setIntensity(i,1);    // Poner el brillo a un valor intermedio
    lc.clearDisplay(i);      // Y borrar todo
  }
}

void loop()
{
  lc.displayChar(0,46);
  /*
  if (digitalRead(2)==HIGH) {
    for (size_t i = 0; i < 15; i++) {      
      int R = random(1,7);
      lc.displayChar(0,R+40);
      delay(100);
    }
  }
  */
}
