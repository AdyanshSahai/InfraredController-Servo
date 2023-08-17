#include <Servo.h>

//IRF = InfraRed Sensor. P = Pin. Val = Value
int IrfBigP = 2;
int IrfSmallP = 8;

int ServoBigP = 6;
int ServoSmallP = 5;

Servo ServoBig;
Servo ServoSmall;

int ServoBigVal;
int ServoSmallVal;

int IrfBigVal;
int IrfSmallVal;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(IrfSmallP, INPUT);
  pinMode(IrfBigP, INPUT);

  ServoBig.attach(ServoBigP);
  ServoSmall.attach(ServoSmallP);

  Serial.println("System START.");
  
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(IrfBigP) == 0){
    Serial.println("ON");
    ServoBigVal = 180;
  }else{ServoBigVal = 0;}
    Serial.println("OFF");
  if (digitalRead(IrfSmallP) == 0){
    ServoSmallVal = 180;
  }else{ServoSmallVal = 0;}

  //Serial.println(ServoBigVal);

  //delay(500);
  
  ServoBig.write(ServoBigVal);
  ServoSmall.write(ServoSmallVal);

  //delay(500);
}
