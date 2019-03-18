#include "LedControlMS.h"
#define NumMatrix 1       // Cuantas matrices vamos a usar

LedControl lc=LedControl(12,11,10, NumMatrix);  // Creamos una instancia de LedControl

 void setup() 
 {
  for (int i=0; i< NumMatrix ; i++){
    lc.shutdown(i,false);    // Activar las matrices       
    lc.setIntensity(i,3);    // Poner el brillo a un valor intermedio
    lc.clearDisplay(i);      // Y borrar todo
  }
  
}

void loop() 
{
  //lc.writeString(0,"8");  
  int R = random(1,7);
  lc.displayChar(0,R+40);
  delay(900);
  //for(int i=41;i<47;i++){
  //  lc.displayChar(0, i);
  //  delay(1000);
  //}  
}
