int y1=6;
int x2=9;
int x1=10;
int y2=11;
int count=0;
int a=3;
int b=4;
int c=5;
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
  analogWrite(x2,100);
  analogWrite(x1,0);
  analogWrite(y2,100);
  analogWrite(y1,0);
  delay(3000);
}
void left()
{
  analogWrite(x2,0);
  analogWrite(x1,255);
  analogWrite(y2,255);
  analogWrite(y1,0);
  delay(3000);
}
void stp()
{
  analogWrite(x2,0);
  analogWrite(x1,0);
  analogWrite(y2,0);
  analogWrite(y1,0);
  delay(3000);
  
}
void loop() {
  if(digitalRead(a)==0 && digitalRead(b)==0 && digitalRead(c)==0)
  {
    forward();
  }
  else if(digitalRead(a)==1 && digitalRead(b)==1 && digitalRead(c)==1)
  {
    if(count==8)
    {
      stop();
    }
    else if(count!=4)
    {
      count+=1;
      forward();
    }
    else
    {
      left();
      count+=1;
    }
    
  }
  
  
  

}
