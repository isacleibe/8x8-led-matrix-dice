#include "LedControlMS.h"
#define NumMatrix 1       // Cuantas matrices vamos a usar

LedControl lc=LedControl(12,11,10, NumMatrix);  // Creamos una instancia de LedControl

void setup()
{
  pinMode(2,INPUT);//D6
  pinMode(3,INPUT);//D12
  for (int i=0; i< NumMatrix ; i++){
    lc.shutdown(i,false);    // Activar las matrices
    lc.setIntensity(i,1);    // Poner el brillo a un valor intermedio
    lc.clearDisplay(i);      // Y borrar todo
  }
}

void loop()
{
  if (digitalRead(2)==HIGH) {
    for (size_t i = 0; i < 15; i++) {
      int R = random(1,7);//7 excluyente
      lc.displayChar(0,R+30);
      delay(90);
    }
  }
  if (digitalRead(3)==HIGH) {
    for (size_t i = 0; i < 15; i++) {
      int R = random(1,14);//13 excluyente, la pos 0 coincide con 36
      lc.displayChar(0,R+36);
      delay(90);
    }
  }
}
