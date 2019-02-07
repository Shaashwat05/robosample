int m1=9;
int m2=10;
int n1=11;
int n2=12;
void setup()
{
  Serial.begin(9600);
  pinMode(m1,OUTPUT);
  pinMode(m2,OUTPUT);
  pinMode(n1,OUTPUT);
  pinMode(n2,OUTPUT);
  

}

void loop() {
  digitalWrite(m1,HIGH);
  digitalWrite(m2,LOW);
  digitalWrite(n1,HIGH);
  digitalWrite(n2,LOW);
  delay(3000);
  digitalWrite(m1,HIGH);
  digitalWrite(m2,HIGH);
  digitalWrite(n1,HIGH);
  digitalWrite(n2,HIGH);
  delay(3000);
  digitalWrite(m1,LOW);
  digitalWrite(m2,HIGH);
  digitalWrite(n1,LOW);
  digitalWrite(n2,HIGH);
  delay(3000);
  digitalWrite(m1,HIGH);
  digitalWrite(m2,LOW);
  digitalWrite(n1,LOW);
  digitalWrite(n2,HIGH);
  delay(3000);
  digitalWrite(m1,LOW);
  digitalWrite(m2,HIGH);
  digitalWrite(n1,HIGH);
  digitalWrite(n2,LOW);
  delay(3000);
  
  

}
