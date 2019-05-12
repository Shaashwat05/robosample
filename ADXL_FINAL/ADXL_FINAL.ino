int av1=A3;
int av2=A4;
int x2=12;
int x1=11;
int y2=10;
int y1=9;
int a,b,x,y;
void setup() {
 // put your setup code here, to run once:
 //Set the LED pins to output mode
  pinMode(x2,OUTPUT);
  pinMode(x1,OUTPUT);
  pinMode(y2,OUTPUT);
  pinMode(y1,OUTPUT);


 a=analogRead(av1); // To store the INITIAL (REFERENCE) VALUES
 b=analogRead(av2);

 Serial.begin(9600);
}
void forward()
{
  digitalWrite(x2,HIGH);
  digitalWrite(x1,LOW);
  digitalWrite(y2,HIGH);
  digitalWrite(y1,LOW);
}
void back()
{
  digitalWrite(x2,LOW);
  digitalWrite(x1,HIGH);
  digitalWrite(y2,LOW);
  digitalWrite(y1,HIGH);
}
stp()
{
   digitalWrite(x2,LOW);
  digitalWrite(x1,LOW);
  digitalWrite(y2,LOW);
  digitalWrite(y1,LOW);
}
void right()
{
  digitalWrite(x2,LOW);
  digitalWrite(x1,HIGH);
  digitalWrite(y2,HIGH);
  digitalWrite(y1,LOW);
}
void left()
{
  digitalWrite(x2,HIGH);
  digitalWrite(x1,LOW);
  digitalWrite(y2,LOW);
  digitalWrite(y1,HIGH);
}
void loop() {
x=analogRead(av1);
y=analogRead(av2);
Serial.println("------");
Serial.print("X value: "); 
Serial.println(x-a);
Serial.print("Y value");
Serial.println(y-b); 
delay(300);

 //Initially set all the ledpins to LOW
  digitalWrite(x2,LOW);
  digitalWrite(x1,LOW);
  digitalWrite(y2,LOW);
  digitalWrite(y1,LOW);
 //for left led
 if(x-a>30)
 {
 left();
 }
//for right led
 if(a-x>30)
 {
 right();
 }
 //for forward led
if(b-y>30)
 {
 forward();
 }
//for back led
 if(y-b>30)
 {
 back();
 }
 delay(100);
}
