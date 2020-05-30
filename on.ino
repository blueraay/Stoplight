int LED0 = 13;
int LED1 = 12;
int LED2 = 8;
int LED3 = 4;
void setup() {
  // put your setup code here, to run once:
  pinMode(LED0,OUTPUT);
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
  
  
 }

void loop() {
  // put your main code here, to run repeatedly:
    digitalWrite(LED0,HIGH);
    digitalWrite(LED1,HIGH);
    digitalWrite(LED2,HIGH);
    digitalWrite(LED3,HIGH);
  
    delay(5000);
    digitalWrite(LED0,LOW);
    delay(5000); 
}
