// JUAN PABLO LOPEZ RODRIGUEZ
int led_rojo = 10;//refactorizacion - codigo quemado 13 = numero del pin
int led_amarillo = 11;
int led_verde = 13;

void setup() {
  // put your setup code here, to run once:
  //inicializa
  pinMode(led_rojo,OUTPUT); // (nbr-port & Mode(INPUT or OUTPUT))
  pinMode(led_amarillo,OUTPUT); // (nbr-port & Mode(INPUT or OUTPUT))
  pinMode(led_verde,OUTPUT); // (nbr-port & Mode(INPUT or OUTPUT))
}

void loop() {
  // put your main code here, to run repeatedly:

 digitalWrite(led_verde,HIGH); //LOW para apagar // HIGH prender
 delay(300); // 1000 = 1 seg
 digitalWrite(led_verde,LOW);
 delay(300);

 digitalWrite(led_amarillo,HIGH); //LOW para apagar // HIGH prender
 delay(300); // 1000 = 1 seg
 digitalWrite(led_amarillo,LOW);
 delay(300);

 digitalWrite(led_rojo,HIGH); //LOW para apagar // HIGH prender
 delay(300); // 1000 = 1 seg
 digitalWrite(led_rojo,LOW);
 delay(300);  
  
 digitalWrite(led_amarillo,HIGH); //LOW para apagar // HIGH prender
 delay(300); // 1000 = 1 seg
 digitalWrite(led_amarillo,LOW);
 delay(300);

}
