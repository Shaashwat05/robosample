int y1=6;
int x2=9;
int x1=10;
int y2=11;
int count=0;
int a=3;
int b=4;
int c=5;
int f=0;
void setup() {
  Serial.begin(9600);
  pinMode(x1,OUTPUT);  
  pinMode(y1,OUTPUT);
  pinMode(x2,OUTPUT);
  pinMode(y2,OUTPUT);
  pinMode(a,INPUT);
  pinMode(b,INPUT);
  pinMode(c,INPUT);
}
void forward()
{
  analogWrite(x2,150);
  analogWrite(x1,0);
  analogWrite(y2,150);
  analogWrite(y1,0);
  
}
void forward1()
{
  analogWrite(x2,150);
  analogWrite(x1,0);
  analogWrite(y2,150);
  analogWrite(y1,0);
  delay(750);
}

void left()
{

  analogWrite(x2,0);
  analogWrite(x1,150);
  analogWrite(y2,150);
  analogWrite(y1,0);
  delay(3000);
}
void left2()
{

  analogWrite(x2,0);
  analogWrite(x1,150);
  analogWrite(y2,150);
  analogWrite(y1,0);
}
void stp()
{
  analogWrite(x2,0);
  analogWrite(x1,0);
  analogWrite(y2,0);
  analogWrite(y1,0);
  
}
void right()
{
  analogWrite(x2,150);
  analogWrite(x1,0);
  analogWrite(y2,0);
  analogWrite(y1,150);
  delay(3000);
}
void right2()
{
   analogWrite(x2,150);
  analogWrite(x1,0);
  analogWrite(y2,0);
  analogWrite(y1,150);
}
void back()
{
  analogWrite(x2,0);
  analogWrite(x1,150);
  analogWrite(y2,0);
  analogWrite(y1,150);
 
}
void loop()
{
  if(digitalRead(b)==1)
  {
    if(digitalRead(a)==0 && digitalRead(c)==0)
    {
      forward();
    }
    if(digitalRead(a)==0 && digitalRead(c)==1)
    {
      right2();
    }
    if(digitalRead(a)==1 && digitalRead(c)==0)
    {
      left2();
    }
    if(digitalRead(a)==1 && digitalRead(c)==1)
    {
      if(f==0)
      left();
      else
      {f=0;
      right();}
      forward1();
    }
    
  }
  else if(digitalRead(a)==0 && digitalRead(b)==0 && digitalRead(c)==0)
  {
    stp();
    back();
    while(!(digitalRead(a)==1 && digitalRead(b)==1 && digitalRead(c)==1))
    {if(digitalRead(a)==0 && digitalRead(c)==0)
    {
      back();
    }
    if(digitalRead(a)==0 && digitalRead(c)==1)
    {
      left2();
    }
    if(digitalRead(a)==1 && digitalRead(c)==0)
    {
      right2();
    }
    }
    f=1;
  }
}
