#define ir_l 5
#define ir_r 7
void setup() {
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(7,INPUT);
  pinMode(9,OUTPUT);
  pinMode(5,INPUT);
  pinMode(6,OUTPUT);
  digitalWrite(6,HIGH);
  pinMode(3,OUTPUT);
  analogWrite(3,HIGH);
  pinMode(4,OUTPUT);
  digitalWrite(4,HIGH);
  
}

void forward()
{digitalWrite(9,HIGH);
digitalWrite(11,HIGH);
digitalWrite(12,LOW);
digitalWrite(10,LOW);
analogWrite(3,180);}

void loop() {
  if (digitalRead(ir_l)== 0 && digitalRead(ir_r)== 0)
  forward();
  if(digitalRead(ir_l)== 1 && digitalRead(ir_r)== 0)
  {
  digitalWrite(9,LOW);
  digitalWrite(10,HIGH);
  analogWrite(3,250);
  }
  
  if(digitalRead(ir_l)== 0 && digitalRead(ir_r)== 1)
  {
  digitalWrite(11,LOW);
  digitalWrite(12,HIGH);
  analogWrite(3,250);
  }
  
  if(digitalRead(ir_l)== 1 && digitalRead(ir_r)== 1)
  {
  digitalWrite(9,LOW);
  digitalWrite(11,LOW);
  }
  }
