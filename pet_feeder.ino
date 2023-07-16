///RTC//////////////
#include "RTClib.h"
 
RTC_DS1307 rtc;       // Inicia variáveis do RTC
 
int Hor;              // Define variável Hora
int Min;              // Define variável Minuto
int Sec;              // Define variável Segundo
int Data;             // Define variável Data

int INICIO_DE_CURSO = 90;
int FIM_DE_CURSO = 175;
///////////////////

///Servo//////////
#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

 
void setup()  {
  rtc.begin();        // Inicia o módulo RTC

  // Serial.begin(9600);///para monitorar o horário
 
  // pinMode(motorB1, OUTPUT);   // Pino 5 é um pino de saída de sinal
  // pinMode(motorB2, OUTPUT);   // Pino 6 é um pino de saída de sinal
 
  //rtc.adjust(DateTime(F(__DATE__), F(__TIME__)));     // Ajuste Automático da hora e data
  //rtc.adjust(DateTime(2020, 04, 16, 10, 00, 00));   // Ajuste Manual (Ano, Mês, Dia, Hora, Min, Seg)

  // Serial.println("-------------------------");
  myservo.attach(2);
  // Serial.println("calibrating servo...");
  myservo.write(INICIO_DE_CURSO);
  delay(1000);
  // Serial.println("servo calibrated");
  // Serial.println("-------------------------");
}
 
void loop()   {
  Hor = rtc.now().hour();       // Verifica a Hora
  Min = rtc.now().minute();     // Verifica os Minutos
  Sec = rtc.now().second();     // Verifica os Segundos
  Data = rtc.now().day();       // Verifica o Dia

  DateTime time = rtc.now();

  // //////serial
  // Serial.println(String("DateTime::TIMESTAMP_TIME:\t")+time.timestamp(DateTime::TIMESTAMP_TIME)); ///para serial
  // Serial.println("\n");
 
  // Verifica o horário e se o mesmo for igual à 12:40:00
  if ( Hor == 12 &&  Min == 40) {
    // Serial.println("Hora de comer!");
    myservo.write(FIM_DE_CURSO);
    delay(60000);
  }
  else {
    myservo.write(INICIO_DE_CURSO);
    delay(1000);
  }


  // myservo.write(INICIO_DE_CURSO);                // Aguarda 1 segundo e reinicia
}