// JUAN PABLO LOPEZ RODRIGUEZ
int led = 13; //refactorizacion - codigo quemado 13 = numero del pin
void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT); // (nbr-port & Mode(INPUT or OUTPUT))
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led,HIGH); //LOW para apagar // HIGH prender
  delay(1000); // 1000 = 1 seg
  digitalWrite(led,LOW);
  delay(1000);
}
