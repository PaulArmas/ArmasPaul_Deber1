/*
 * Autor: Armas Paul
 * Materia: Sistemas Embebidos
 * Deber 1: Realizar un programa que accione mediante 4 switchs a un juego de luces diferente
*/

const int led1 = 13;
const int led2 = 12;
const int led3 = 11;
const int led4 = 10;
const int led5 = 9;
const int led6 = 8;
const int sw1 = 7;
const int sw2 = 6;
const int sw3 = 5;
const int sw4 = 4;
int i = 0;
int j = 0;
int k = 0;
int l = 0;

void setup() {
  pinMode(led1,OUTPUT); // pin 13 como salida
  pinMode(led2,OUTPUT); // pin 12 como salida
  pinMode(led3,OUTPUT); // pin 11 como salida
  pinMode(led4,OUTPUT); // pin 10 como salida
  pinMode(led5,OUTPUT); // pin 9 como salida
  pinMode(led6,OUTPUT); // pin 8 como salida
  pinMode(sw1,INPUT); // pin 7 como entrada
  pinMode(sw2,INPUT); // pin 6 como entrada
  pinMode(sw3,INPUT); // pin 5 como entrada
  pinMode(sw4,INPUT); // pin 4 como entrada
}

void loop() {
  // Juego #1: Se usan 6 leds, de los cuales se encienden los pares por 10 ocasiones
  if(digitalRead(sw1)==HIGH && digitalRead(sw2)==LOW && digitalRead(sw3)==LOW && digitalRead(sw4)==LOW){
    for(i=0;k<10;k++){
      digitalWrite(led1,LOW);
      digitalWrite(led2,HIGH);
      digitalWrite(led3,LOW);
      digitalWrite(led4,HIGH);  
      digitalWrite(led5,LOW);
      digitalWrite(led6,HIGH);
      delay(500);
      digitalWrite(led1,LOW);
      digitalWrite(led2,LOW);
      digitalWrite(led3,LOW);
      digitalWrite(led4,LOW);  
      digitalWrite(led5,LOW);
      digitalWrite(led6,LOW);
      delay(500);
    }
  }
  // Juego #2: Se usan 6 leds, de los cuales se encienden los impartes por 10 ocasiones
  if(digitalRead(sw1)==LOW && digitalRead(sw2)==HIGH && digitalRead(sw3)==LOW && digitalRead(sw4)==LOW){
    for(j=0;j<10;j++){
      digitalWrite(led1,HIGH);
      digitalWrite(led2,LOW);
      digitalWrite(led3,HIGH);
      digitalWrite(led4,LOW); 
      digitalWrite(led5,HIGH);
      digitalWrite(led6,LOW);
      delay(500);
      digitalWrite(led1,LOW);
      digitalWrite(led2,LOW);
      digitalWrite(led3,LOW);
      digitalWrite(led4,LOW);  
      digitalWrite(led5,LOW);
      digitalWrite(led6,LOW);
      delay(500);
    }
  }
  // Juego #3: Se encienden secuencialmente cada uno ellos, y luego se apaguen secuencialmente.
  if(digitalRead(sw1)==LOW && digitalRead(sw2)==LOW && digitalRead(sw3)==HIGH && digitalRead(sw4)==LOW){
    digitalWrite(led1,HIGH);
    delay(500);
    digitalWrite(led2,HIGH);
    delay(500);
    digitalWrite(led3,HIGH);
    delay(500);
    digitalWrite(led4,HIGH);
    delay(500); 
    digitalWrite(led5,HIGH);
    delay(500);
    digitalWrite(led6,HIGH);
    delay(500);
    digitalWrite(led1,LOW);
    delay(500);
    digitalWrite(led2,LOW);
    delay(500);
    digitalWrite(led3,LOW);
    delay(500);
    digitalWrite(led4,LOW);
    delay(500); 
    digitalWrite(led5,LOW);
    delay(500);
    digitalWrite(led6,LOW);
    delay(500);
  }
  // Juego #4: Se encienden secuencialmente los leds impares, luego se encienden secuencialmente las luces pares, y al final se apagan todas secuencialmente.
  if(digitalRead(sw1)==LOW && digitalRead(sw2)==LOW && digitalRead(sw3)==LOW && digitalRead(sw4)==HIGH){
    digitalWrite(led1,HIGH);
    digitalWrite(led2,LOW);
    delay(500);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,LOW);
    delay(500); 
    digitalWrite(led5,HIGH);
    digitalWrite(led6,LOW);
    delay(500);
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    delay(500);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,HIGH);
    delay(500); 
    digitalWrite(led5,HIGH);
    digitalWrite(led6,HIGH);
    delay(500);
    digitalWrite(led1,LOW);
    delay(500);
    digitalWrite(led2,LOW);
    delay(500);
    digitalWrite(led3,LOW);
    delay(500);
    digitalWrite(led4,LOW);
    delay(500); 
    digitalWrite(led5,LOW);
    delay(500);
    digitalWrite(led6,LOW);
    delay(500);
  }
}
