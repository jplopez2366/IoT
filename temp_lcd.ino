#include <LiquidCrystal.h>

//variables sensor temp
float temp = 0;      //almacena el valor de la temperatura
int sensorValue = 0; //almacena el valor de llegada del sensor

int luz_led = 13;        //pin led 
int motor = 10;      	 //pin motor

LiquidCrystal lcd_1(12, 11, 5, 4, 3, 2);

void setup()
{
  pinMode(luz_led, OUTPUT);
  
  pinMode(motor, OUTPUT);
  
  lcd_1.begin(16, 2);

  lcd_1.print("Temperatura de: ");
  
  //inicializacion sensor temp
  Serial.begin(9600); //baudios

}

void loop()
{  
  temp = (sensorValue * (500.0 / 1024.0)) - 50.0 ;
  sensorValue = analogRead(A0); //analogread = input de A0(pin analogo)
  //Serial.print("Temperatura_°C: ");
  Serial.println(temp);
  
  lcd_1.setCursor(0, 1);
  lcd_1.print(temp);
  delay(1000);  
  
  if(temp<=10){
  	digitalWrite(luz_led, HIGH);
    delay(500);
    digitalWrite(luz_led, LOW);
  	digitalWrite(motor, HIGH);
  }
  
  if(temp>=11 && temp <= 25){
  	digitalWrite(luz_led, LOW);
    delay(500);
  	digitalWrite(motor, LOW);
  }
  
  if(temp>=26){
  	digitalWrite(luz_led, HIGH);
    delay(500);
  	digitalWrite(motor, HIGH);
  }
  

}