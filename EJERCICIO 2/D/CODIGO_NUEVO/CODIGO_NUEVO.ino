int Left=9;
int Right=8;
int MLEFT=6;
int MRIGHT=7;

void setup() {
 Serial.begin(9600);
  pinMode(Left,INPUT);
  pinMode(Right,INPUT);
  pinMode(MLEFT,OUTPUT);
  pinMode(MRIGHT,OUTPUT);
 
}

void loop() {

 
 
 
  if ((digitalRead(Left) == LOW) && (digitalRead(Right) == HIGH)) 
  {
   digitalWrite(MLEFT,LOW);
  delay(1000);
   digitalWrite(MRIGHT,HIGH);
 delay(1000);
 
   } 
 else  if ((digitalRead(Left) == HIGH) && (digitalRead(Right) == LOW))
 
 {
 digitalWrite(MLEFT,HIGH);
 delay(1000);
 digitalWrite(MRIGHT,LOW);
 delay(1000);
          }
         else
       {
 digitalWrite(MLEFT,HIGH);
 delay(1000);
 digitalWrite(MRIGHT,HIGH);
 delay(1000);
       }
  }
