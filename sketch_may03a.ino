#include <Servo.h>
#define pinGarra 8
#define pinDerecha 10
#define pinBase 11
#define pinIzquierda 12


Servo Garra;
Servo Derecha;
Servo Base;
Servo Izquierda;

int incremento=1;
int ang;

void setup() {
  // put your setup code here, to run once:
  Garra.attach(pinGarra);
  Derecha.attach(pinDerecha);
  Base.attach(pinBase);
  Izquierda.attach(pinIzquierda);
  
  
}



void loop() {
  Garra.write(ang);
  Derecha.write(ang);
  Base.write(ang);
  Izquierda.write(ang);
  delay(20);
  // put your main code here, to run repeatedly:
  if(incremento)
  ang++;
  else
  ang--;

  if(ang<=1){
    ang = 1;
    incremento =1;
    delay (200);
  }
    if(ang>=180){
    ang = 180;
    incremento=0;
    delay (200);
  }
  

}
