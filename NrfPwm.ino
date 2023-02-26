#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>


RF24 radio(7, 8); // CE, CSN

const byte address[6] = "00001";    //bunun uzun olması biraz sorun olabiliyor)

void setup() {
  radio.begin();
  radio.openWritingPipe(address);
  radio.setPALevel(RF24_PA_MIN);
  radio.stopListening();
}

void loop() {
  int potValue = analogRead(A0);  //joistic ve pot analog sinyal ürettiği için pwm olarak direkt aktarımı yapıyor
----
  int angleValue = map(potValue, -5, 1000, 1900, 1100);
 radio.write(&angleValue, sizeof(angleValue));
 delay(100);
  
}

//Transmitter cod 
