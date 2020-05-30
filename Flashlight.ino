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
    digitalWrite(LED2,LOW);
    digitalWrite(LED3,LOW);
    delay(5000);
    
    digitalWrite(LED2,LOW);
    digitalWrite(LED0,LOW);
    digitalWrite(LED1,LOW);    
    digitalWrite(LED3,HIGH);
    delay(5000);

    digitalWrite(LED3,LOW);
    digitalWrite(LED0,LOW);
    digitalWrite(LED1,LOW);    
    digitalWrite(LED2,HIGH);
    delay(5000);
    
     
}
