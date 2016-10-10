int Led=13;
int btn=4;
int val=0;


void setup() {
  // put your setup code here, to run once:
  pinMode(Led,OUTPUT);
  pinMode(btn,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  val=digitalRead(btn);
  if(val==HIGH)
  {
    
    digitalWrite(Led,HIGH);
  }
  else
  {
    digitalWrite(Led,LOW);
  }

}
