//This code is created by abhinav and you can find its explanation and coding on youtube .
// check readme file for youtube video link.

int R = 3;
int G = 5;
int B = 6;
int x , y, z , a,b,c;

void setup ()
{
  Serial.begin (9600);
  pinMode (R, OUTPUT);
  pinMode (G, OUTPUT);
  pinMode (B, OUTPUT);
  pinMode (A0, INPUT);
  pinMode (A1, INPUT);
  pinMode (A1, INPUT);
}

void loop ()
{
  x = analogRead(A0);
  y = analogRead(A1);
  z = analogRead(A2);
  
  
  
  a = map(x,0,1024 ,0 , 225);
  b = map(y,0,1024 ,0 , 225);
  c = map(z,0,1024 ,0 , 225);

Serial.print("x = ");Serial.println(x);
  Serial.print("y = ");Serial.println(y);
  Serial.print("z = ");Serial.println(z);
  
  analogWrite(R , a);
  analogWrite(G , b);
  analogWrite(B , c);
  //delay(100);

}   
