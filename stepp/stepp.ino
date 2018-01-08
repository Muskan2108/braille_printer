int dirpin=3;
int steppin=2;
int in=0;

void setup() {
  Serial.begin(9600);
  pinMode(dirpin, OUTPUT);
  pinMode(steppin, OUTPUT);
  digitalWrite(dirpin,LOW);
  
}

void loop() {
 if (Serial.available() > 0) {
 in=Serial.parseInt();
 int steps=in/1.8;
 Serial.println(steps);
  for(int n=0;n<steps;n++)
  {
    digitalWrite(steppin,HIGH);
    delayMicroseconds(1000);
    digitalWrite(steppin,LOW);
    delayMicroseconds(1000);
    
  }
  delay(1000);
  
}
}

