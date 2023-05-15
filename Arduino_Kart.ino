#include <SoftwareSerial.h>

const int pinoRX = 10; //PINO DIGITAL 2 (RX)
const int pinoTX = 11; //PINO DIGITAL 3 (TX)

const int IN1 = 2; //PINO DIGITAL UTILIZADO PELO LED
const int IN2 = 3; //PINO DIGITAL UTILIZADO PELO LED
const int IN3 = 4; //PINO DIGITAL UTILIZADO PELO LED
const int IN4 = 5; //PINO DIGITAL UTILIZADO PELO LED
int dadoBluetooth = 0 ; //VARIÁVEL QUE ARMAZENA O VALOR ENVIADO PELO BLUETOOTH
SoftwareSerial bluetooth(pinoRX, pinoTX); 

void setup(){
  bluetooth.begin(9600); //INICIALIZA A SERIAL DO BLUETOOTH
  pinMode(IN1, OUTPUT); //DEFINE O PINO COMO SAÍDA
  pinMode(IN2, OUTPUT); //DEFINE O PINO COMO SAÍDA
  pinMode(IN3, OUTPUT); //DEFINE O PINO COMO SAÍDA
  pinMode(IN4, OUTPUT); //DEFINE O PINO COMO SAÍDA
}
 
void loop(){
  if(bluetooth.available()){ 
       dadoBluetooth = bluetooth.read();
 
    if(dadoBluetooth == '1'){ 
      digitalWrite(IN1, HIGH);
      digitalWrite(IN2, LOW);
      digitalWrite(IN3, HIGH);
      digitalWrite(IN4, LOW);
    }
    else if(dadoBluetooth == '0'){  
      digitalWrite(IN1, LOW);
      digitalWrite(IN2, HIGH);
      digitalWrite(IN3, LOW);
      digitalWrite(IN4, HIGH);
    }
    else
    {
      digitalWrite(IN1, LOW);
      digitalWrite(IN2, LOW);
      digitalWrite(IN3, LOW);
      digitalWrite(IN4, LOW);
    }
  }
}