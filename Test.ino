#include <Keyboard.h>
int LED0 = 13;
int LED1 = 12;
int LED2 = 8;
int LED3 = 4;

void setup() {
  pinMode(LED0,OUTPUT);
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
  Serial.begin(9600);
  Keyboard.begin(); 
 }
 
void loop() {
//each switch represents a state 
//write code so that it takes user input straight throughout
    
    int walk=1; 
    
     //red state
    for(int x=1;x<7;x++){ 
         
        switch(x){
      
        case 1: if(key >0 || walk==0){
                  walk=0;
                  digitalWrite(LED0,HIGH);
                }
                else{
                  digitalWrite(LED0,LOW);
                }
                digitalWrite(LED1,HIGH);
                digitalWrite(LED2,LOW);
                digitalWrite(LED3,LOW);
                delay(1000);
                break;
                
        case 2: if(Serial.available() >0 || walk==0){
                 
                  digitalWrite(LED0,HIGH);
                }
                else{
                  digitalWrite(LED0,LOW);
                }
                digitalWrite(LED1,HIGH);
                digitalWrite(LED2,LOW);
                digitalWrite(LED3,LOW);
                delay(1000);
                break;
         case 3: digitalWrite(LED0,LOW);
                digitalWrite(LED1,HIGH);
                digitalWrite(LED2,LOW);
                digitalWrite(LED3,LOW);
                delay(1000);
                break;
         case 4: if(Serial.available() >0 || walk==0){
                  digitalWrite(LED0,HIGH);
                }
                else{
                  digitalWrite(LED0,LOW);
                }
                digitalWrite(LED1,HIGH);
                digitalWrite(LED2,LOW);
                digitalWrite(LED3,LOW);
                delay(1000);
                break;            
        case 5: digitalWrite(LED0,LOW);
                digitalWrite(LED1,HIGH);
                digitalWrite(LED2,LOW);
                digitalWrite(LED3,LOW);
                break;
        case 6: digitalWrite(LED0,LOW);
                digitalWrite(LED1,LOW);
                digitalWrite(LED2,LOW);
                digitalWrite(LED3,HIGH);
                break;
        }
    }
        //reset walk
    //if(Serial.available() >0 || walk==0){
      Serial.end();
      Serial.begin(9600); 
    //}
       
    
    
    
    //green state
    for(int x=1;x<7;x++){ 
          
        switch(x){
      
        case 1: if(Serial.available() >0){
                  walk=0;
                  digitalWrite(LED0,HIGH);
                }
                else{
                  digitalWrite(LED0,LOW);
                }
                digitalWrite(LED1,LOW);
                digitalWrite(LED2,LOW);
                digitalWrite(LED3,HIGH);
                delay(1000);
                break;
                
        case 2: digitalWrite(LED0,LOW);
                digitalWrite(LED1,LOW);
                digitalWrite(LED2,LOW);
                digitalWrite(LED3,HIGH);
                delay(1000);
                break;
        case 3: if(Serial.available() >0 || walk==0){
                  digitalWrite(LED0,HIGH);
                }
                else{
                  digitalWrite(LED0,LOW);
                }
                digitalWrite(LED1,LOW);
                digitalWrite(LED2,LOW);
                digitalWrite(LED3,HIGH);
                delay(1000);
                break;
        case 4: digitalWrite(LED0,LOW);
                digitalWrite(LED1,LOW);
                digitalWrite(LED2,LOW);
                digitalWrite(LED3,HIGH);
                delay(1000);
                break;
        case 5:if(Serial.available() >0 || walk==0){
                  digitalWrite(LED0,HIGH);
                }
                else{
                  digitalWrite(LED0,LOW);
                }
                digitalWrite(LED1,LOW);
                digitalWrite(LED2,LOW);
                digitalWrite(LED3,HIGH);
                delay(1000);
                break;
        case 6: digitalWrite(LED0,LOW);
                digitalWrite(LED1,LOW);
                digitalWrite(LED2,LOW);
                digitalWrite(LED3,HIGH);
                break;
        }
    }
    
    
    //Amber State
    for(int x=1;x<7;x++){ 
          
        switch(x){
      
        case 1: if(Serial.available() >0 || walk==0){
                  digitalWrite(LED0,HIGH);
                }
                else{
                  digitalWrite(LED0,LOW);
                }
                digitalWrite(LED1,LOW);
                digitalWrite(LED2,HIGH);
                digitalWrite(LED3,LOW);
                delay(1000);
                break;
                
        case 2: digitalWrite(LED0,LOW);
                digitalWrite(LED1,LOW);
                digitalWrite(LED2,HIGH);
                digitalWrite(LED3,LOW);
                delay(1000);
                break;
        case 3: if(Serial.available() >0 || walk==0){
                  digitalWrite(LED0,HIGH);
                }
                else{
                  digitalWrite(LED0,LOW);
                }
                digitalWrite(LED1,LOW);
                digitalWrite(LED2,HIGH);
                digitalWrite(LED3,LOW);
                delay(1000);
                break;
        case 4: digitalWrite(LED0,LOW);
                digitalWrite(LED1,LOW);
                digitalWrite(LED2,HIGH);
                digitalWrite(LED3,LOW);
                delay(1000);
                break;
        case 5:if(Serial.available() >0 || walk==0){
                  digitalWrite(LED0,HIGH);
                }
                else{
                  digitalWrite(LED0,LOW);
                }
                digitalWrite(LED1,LOW);
                digitalWrite(LED2,HIGH);
                digitalWrite(LED3,LOW);
                delay(1000);
                break;
        case 6: digitalWrite(LED0,LOW);
                digitalWrite(LED1,LOW);
                digitalWrite(LED2,HIGH);
                digitalWrite(LED3,LOW);
                break;
        }
    }
 
     
}
