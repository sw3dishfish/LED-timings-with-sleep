//Control de LEDs con intervalo de bajo consumo de energia.
//por: Aldrick Victor Tadeo Arellano
//con bibliotecas de RocketScream: https://github.com/rocketscream/Low-Power.git
//Feb 2021 

#include <LowPower.h> //Biblioteca externa para control de energia y modulos.
#include <arduino.h> //Biblioteca requerida por LowPower.h

const int LED1 = 3; 
const int LED2 = 8;

void setup(){
    //Selecion del modo de uso de los pines 3 y 8.
    pinMode(LED1, OUTPUT);
    pinMode(LED2, OUTPUT);
}

void loop(){
    //Control del LED 1.
    digitalWrite(LED1, HIGH); 
    delay(2000);
    digitalWrite(LED1, LOW);

    //Control del LED 2.
    digitalWrite(LED2, HIGH);
    delay(1000);
    digitalWrite(LED2, LOW);

    //Usando la funcion powerDown de LowPower para poner en modo de sleep (energia baja) el Arduino.
    LowPower.powerDown(SLEEP_2S, ADC_OFF, BOD_OFF); 
    LowPower.powerDown(SLEEP_1S, ADC_OFF, BOD_OFF);
}
