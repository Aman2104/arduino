int buttonPin1=2;
int buttonPin2=3;
int buttonPin3=4;
int buttonPin4=5;
int buttonState1=0;
int buttonState2=0;
int buttonState3=0;
int buttonState4=0;

int led=6;
void setup() 
{
  pinMode(led,OUTPUT);
  pinMode(buttonPin1,INPUT);
  pinMode(buttonPin2,INPUT);
  pinMode(buttonPin3,INPUT);
  pinMode(buttonPin4,INPUT);
}

void loop()
{
  buttonState1 = digitalRead(buttonPin1);
  buttonState2 = digitalRead(buttonPin2);
  buttonState3 = digitalRead(buttonPin3);
  buttonState4 = digitalRead(buttonPin4);
  if(buttonState1 == HIGH && buttonState2 == HIGH && buttonState3 == LOW && buttonState4 == LOW )
  {
      digitalWrite(led,HIGH);
    
  }
  else
  {
  digitalWrite(led,LOW);
  }
}