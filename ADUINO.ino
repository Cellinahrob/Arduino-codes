int BLUELED=10;
int REDLED=2;
int blinknu_BLUE=7;
int blinknu_RED=4;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode (BLUELED,OUTPUT);
  pinMode (REDLED,OUTPUT);
   Serial.println("This is my blinky program #");
   Serial.print(" ");
   }

void loop() {
  for (int f=1;f<=blinknu_BLUE;f=f+1){
    
    Serial.print("BLUELED blinking #");
    Serial.println(f);
    
     digitalWrite(BLUELED,HIGH);
     delay(1000);
     digitalWrite(BLUELED,LOW);
     delay(1000);
     }

     Serial.println(" ");
  
  
  for (int i=1;i<=blinknu_RED;i=i+1){
   Serial.print("REDLED blinking #");
    Serial.println(i);

  
    digitalWrite(REDLED,HIGH);
    delay(1000);
    digitalWrite(REDLED,LOW);
    delay(1000); }
 
    Serial.println(" ");
 
    
  }
  // put your main code here, to run repeatedly:


