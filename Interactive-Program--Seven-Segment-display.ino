
int VRVALUE = 0;
int LIGHTRESIST = 0;
void setup() {
  // put your setup code here, to run once:
  
  pinMode(11,OUTPUT);////machine
  pinMode(12,OUTPUT);///machine
  pinMode(4,OUTPUT);///seven segment
  pinMode(5,OUTPUT);///seven segment
  pinMode(6,OUTPUT);///seven segment
  pinMode(7,OUTPUT);///seven segment

}


void choose() {
  
  switch(VRVALUE) 
{   
  
    case 0:
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);

    break;
    
    case 250:
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);

    break;

    case 500:
    digitalWrite(4,LOW);
    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);

    break;

    case 750:
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);

    break;

    case 1023:
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,HIGH);
    digitalWrite(7,LOW);

    break;
    

}

  }


void loop() {
  // put your main code here, to run repeatedly:

  VRVALUE = analogRead(A0);
  analogWrite(10,VRVALUE/4);
  digitalWrite(11,HIGH);
  digitalWrite(12,LOW);

  LIGHTRESIST = analogRead(A2);

  /////////// Stop when the voltage increase over 800
  ///////////as the lightresist increase
    if(LIGHTRESIST > 800)
   {
      analogWrite(10,0);

        }
     else

      choose();
}




