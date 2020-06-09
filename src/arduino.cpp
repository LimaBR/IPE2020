#include <Arduino.h>
#include <Servo.h>
//Melhorar passagem de parâmetros nessa biblioteca. Trocar os char e os int por constantes
#include <tcs3200.h>

Servo picker, rampa;
tcs3200 tcs(3, 4, 5, 6, 7, 8); //Colocar pinos certos

void setup() {
  //Inicialização das bibliotecas
  Serial.begin(115200);
  picker.attach(9);
  rampa.attach(10);

  //Inicialização das portas
  pinMode(LED_BUILTIN, OUTPUT); //LED da placa

}

//Podemos mexer no main.cpp e trocar esse loop por uma função qualquer com while dentro
void loop() {
  
}