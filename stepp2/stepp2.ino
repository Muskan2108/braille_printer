int dirpina=3;
int steppina=2;
int dirpinb=5;
int steppinb=4;

int in=0;

void setup() {
  Serial.begin(9600);
  pinMode(dirpina, OUTPUT);
  pinMode(steppina, OUTPUT);
  pinMode(dirpinb, OUTPUT);
  pinMode(steppinb, OUTPUT);
  digitalWrite(dirpina,LOW);
  digitalWrite(dirpinb,LOW);

}

void loop() {
 if (Serial.available() > 0) {
in=Serial.parseInt();
  int steps=in/1.8;
 Serial.println(steps);
  for(int n=0;n<steps;n++)
  {
    digitalWrite(steppina,HIGH);
    digitalWrite(steppinb,HIGH);
    delayMicroseconds(2000);
    digitalWrite(steppina,LOW);
    digitalWrite(steppinb,LOW);
    delayMicroseconds(2000);
  }
  delay(1000);
  digitalWrite(dirpina,HIGH);
  digitalWrite(dirpinb,HIGH);
  for(int n=0;n<steps;n++)
  {
    digitalWrite(steppina,HIGH);
    digitalWrite(steppinb,HIGH);
    delayMicroseconds(2000);
    digitalWrite(steppina,LOW);
    digitalWrite(steppinb,LOW);
    delayMicroseconds(2000);
  }
  delay(1000);
  digitalWrite(dirpina,LOW);
  digitalWrite(dirpinb,LOW);
}
}

