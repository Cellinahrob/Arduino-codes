int BLUELED=10;
int REDLED=2;
int blinknu_BLUE;
int blinknu_RED;
int redon;
int redoff;
int blueon;
int blueoff;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode (BLUELED,OUTPUT);
  pinMode (REDLED,OUTPUT);
   Serial.println("This is my blinky program #");
   Serial.println(" ");

   Serial.println("How many Red blinks ?");
   while(Serial.available ()==0) {};
   blinknu_RED=Serial.parseInt();
   Serial.println("");
   

  Serial.println ("How long Red on?");
  while(Serial.available()==0) {};
  redon=Serial.parseInt();
  Serial.println(" ");
 


  Serial.println("How long Red off?");
  while(Serial.available()==0) {};
  redoff=Serial.parseInt();
  Serial.print(" s");

  Serial.println("How long Blue on?");
  while(Serial.available ()==0) {};
  blueon=Serial.parseInt();
  Serial.print(" ");

  Serial.println("How long blue off?");
  while(Serial.available ()==0) {};
  blueoff=Serial.parseInt();
  Serial.print(" ");

  
  
  
  
   }

void loop() {
  for (int f=1;f<=blinknu_BLUE;f=f+1){
    
    Serial.print("BLUELED blinking #");
    Serial.println(f);
    
     digitalWrite(BLUELED,HIGH);
     delay(redon);
     digitalWrite(BLUELED,LOW);
     delay(redoff);
     }

     Serial.println(" ");
  
  
  for (int i=1;i<=blinknu_RED;i=i+1){
   Serial.print("REDLED blinking #");
    Serial.println(i);

  
    digitalWrite(REDLED,HIGH);
    delay(blueon);
    digitalWrite(REDLED,LOW);
    delay(blueoff); }
 
    Serial.println(" ");
 
    
  }
  // put your main code here, to run repeatedly:


