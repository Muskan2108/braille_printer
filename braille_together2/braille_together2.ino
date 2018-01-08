#define INA1  2
#define INA2  3
#define INA3  4
#define INA4  5
#define INB1  8
#define INB2  9
#define INB3  10
#define INB4  11
char c;
int Stepsa = 0;
int Stepsb =0;
unsigned long last_timea=micros(),last_timeb=micros();
unsigned long currentMillisa,currentMillisb;
int steps_lefta,steps_leftb;
void setup()
{
  Serial.begin(9600);
  pinMode(INA1, OUTPUT); 
  pinMode(INA2, OUTPUT); 
  pinMode(INA3, OUTPUT); 
  pinMode(INA4, OUTPUT);
  pinMode(INB1, OUTPUT); 
  pinMode(INB2, OUTPUT); 
  pinMode(INB3, OUTPUT); 
  pinMode(INB4, OUTPUT); 
}
void loop()
{
  if(Serial.available()>0)
  {
    c=Serial.read();
    //Serial.println(c);
    switch(c)
    {
       case 'a':
               number(7,0);
               delay(1000);
               number(1,0);
               break;
       case 'A':
               number(7,0);
               delay(1000);
               number(1,0);
               break;
       case 'b':
               number(6,0);
               delay(1000);
               number(2,0);
               break;
        case 'B':
               number(6,0);
               delay(1000);
               number(2,0);
               break;
        case 'c':
               number(7,1);
               delay(1000);
               number(1,7);
               break;
       case 'C':
               number(7,1);
               delay(1000);
               number(1,7);
               break;
       case 'd':
               number(7,4);
               delay(1000);
               number(1,4);
               break;
        case 'D':
               number(7,4);
               delay(1000);
               number(1,4);
               break;
        case 'e':
               number(7,3);
               delay(1000);
               number(1,5);
               break;
       case 'E':
               number(7,3);
               delay(1000);
               number(1,5);
               break;
       case 'f':
               number(6,1);
               delay(1000);
               number(2,7);
               break;
        case 'F':
               number(6,1);
               delay(1000);
               number(2,7);
               break;
        case 'g':
               number(6,4);
               delay(1000);
               number(2,4);
               break;
       case 'G':
               number(6,4);
               delay(1000);
               number(2,4);
               break;
       case 'h':
               number(6,3);
               delay(1000);
               number(2,5);
               break;
        case 'H':
               number(6,3);
               delay(1000);
               number(2,5);
               break;
        case 'i':
               number(3,1);
               delay(1000);
               number(5,7);
               break;
       case 'I':
               number(3,1);
               delay(1000);
               number(5,7);
               break;
       case 'j':
               number(3,4);
               delay(1000);
               number(5,4);
               break;
        case 'J':
               number(3,4);
               delay(1000);
               number(5,4);
               break;
        case 'k':
               number(2,0);
               delay(1000);
               number(6,0);
               break;
       case 'K':
               number(2,0);
               delay(1000);
               number(6,0);
               break;
       case 'l':
               number(5,0);
               delay(1000);
               number(3,0);
               break;
        case 'L':
               number(5,0);
               delay(1000);
               number(3,0);
               break;
        case 'm':
              number(2,1);
               delay(1000);
               number(6,7);
               break;
       case 'M':
               number(2,1);
               delay(1000);
               number(6,7);
               break;
       case 'n':
               number(6,4);
               delay(1000);
               number(2,4);
               break;
        case 'N':
               number(6,4);
               delay(1000);
               number(2,4);
               break;
        case 'o':
               number(2,3);
               delay(1000);
               number(6,5);
               break;
       case 'O':
               number(2,3);
               delay(1000);
               number(6,5);
               break;
       case 'p':
               number(5,1);
               delay(1000);
               number(3,7);
               break;
        case 'P':
               number(5,1);
               delay(1000);
               number(3,7);
               break;
        case 'q':
               number(5,4);
               delay(1000);
               number(3,4);
               break;
       case 'Q':
               number(5,4);
               delay(1000);
               number(3,4);
               break;
       case 'r':
               number(5,3);
               delay(1000);
               number(3,5);
               break;
        case 'R':
               number(5,3);
               delay(1000);
               number(3,5);
               break;
        case 's':
               number(4,1);
               delay(1000);
               number(4,7);
               break;
       case 'S':
               number(4,1);
               delay(1000);
               number(4,7);
               break;
       case 't':
               number(4,4);
               delay(1000);
               number(4,4);
               break;
        case 'T':
               number(4,4);
               delay(1000);
               number(4,4);
               break;
        case 'u':
               number(2,7);
               delay(1000);
               number(6,1);
               break;
       case 'U':
               number(2,7);
               delay(1000);
               number(6,1);
               break;
       case 'v':
               number(5,7);
               delay(1000);
               number(3,1);
               break;
        case 'V':
               number(5,7);
               delay(1000);
               number(3,1);
               break;
        case 'W':
               number(3,5);
               delay(1000);
               number(5,3);
               break;
       case 'w':
               number(3,5);
               delay(1000);
               number(5,3);
               break;
       case 'x':
               number(2,2);
               delay(1000);
               number(6,6);
               break;
        case 'X':
               number(2,2);
               delay(1000);
               number(6,6);
               break;
        case 'y':
               number(2,5);
               delay(1000);
               number(6,3);
               break;
       case 'Y':
               number(2,5);
               delay(1000);
               number(6,3);
               break;
       case 'z':
               number(2,6);
               delay(1000);
               number(6,2);
               break;
        case 'Z':
               number(2,6);
               delay(1000);
               number(6,2);
               break;
    }
    Serial.println(c);
  }
}
void number(int sta,int stb)
{
  steps_lefta=((sta*4096)/8)-1;
  steps_leftb=((stb*4096)/8)-1;
  if(steps_lefta>=steps_leftb)
  {
    steps_lefta-=steps_leftb;
    while(steps_leftb>0)
    {
          steppera(); 
          stepperb();
          delayMicroseconds(850);
          steps_leftb--;
         
    }
    while(steps_lefta>0)
    {
   
          
          steppera(); 
          delayMicroseconds(850);
          steps_lefta--;    
    }
  }
  else
  {
    steps_leftb-=steps_lefta;
    while(steps_lefta>0)
    {
          steppera();
          stepperb(); 
          delayMicroseconds(850);
          steps_lefta--;
    }
    while(steps_leftb>0)
    {
          stepperb(); 
          delayMicroseconds(850);
          steps_leftb--;
    }
  }
}
void steppera(){
switch(Stepsa){
   case 0:
     digitalWrite(INA1, LOW); 
     digitalWrite(INA2, LOW);
     digitalWrite(INA3, LOW);
     digitalWrite(INA4, HIGH);
   break; 
   case 1:
     digitalWrite(INA1, LOW); 
     digitalWrite(INA2, LOW);
     digitalWrite(INA3, HIGH);
     digitalWrite(INA4, HIGH);
   break; 
   case 2:
     digitalWrite(INA1, LOW); 
     digitalWrite(INA2, LOW);
     digitalWrite(INA3, HIGH);
     digitalWrite(INA4, LOW);
   break; 
   case 3:
     digitalWrite(INA1, LOW); 
     digitalWrite(INA2, HIGH);
     digitalWrite(INA3, HIGH);
     digitalWrite(INA4, LOW);
   break; 
   case 4:
     digitalWrite(INA1, LOW); 
     digitalWrite(INA2, HIGH);
     digitalWrite(INA3, LOW);
     digitalWrite(INA4, LOW);
   break; 
   case 5:
     digitalWrite(INA1, HIGH); 
     digitalWrite(INA2, HIGH);
     digitalWrite(INA3, LOW);
     digitalWrite(INA4, LOW);
   break; 
     case 6:
     digitalWrite(INA1, HIGH); 
     digitalWrite(INA2, LOW);
     digitalWrite(INA3, LOW);
     digitalWrite(INA4, LOW);
   break; 
   case 7:
     digitalWrite(INA1, HIGH); 
     digitalWrite(INA2, LOW);
     digitalWrite(INA3, LOW);
     digitalWrite(INA4, HIGH);
   break; 
   default:
     digitalWrite(INA1, LOW); 
     digitalWrite(INA2, LOW);
     digitalWrite(INA3, LOW);
     digitalWrite(INA4, LOW);
   break; 
}
Stepsa++;
if(Stepsa>7){Stepsa=0;}
} 
void stepperb(){
switch(Stepsb){
   case 0:
     digitalWrite(INB1, LOW); 
     digitalWrite(INB2, LOW);
     digitalWrite(INB3, LOW);
     digitalWrite(INB4, HIGH);
   break; 
   case 1:
     digitalWrite(INB1, LOW); 
     digitalWrite(INB2, LOW);
     digitalWrite(INB3, HIGH);
     digitalWrite(INB4, HIGH);
   break; 
   case 2:
     digitalWrite(INB1, LOW); 
     digitalWrite(INB2, LOW);
     digitalWrite(INB3, HIGH);
     digitalWrite(INB4, LOW);
   break; 
   case 3:
     digitalWrite(INB1, LOW); 
     digitalWrite(INB2, HIGH);
     digitalWrite(INB3, HIGH);
     digitalWrite(INB4, LOW);
   break; 
   case 4:
     digitalWrite(INB1, LOW); 
     digitalWrite(INB2, HIGH);
     digitalWrite(INB3, LOW);
     digitalWrite(INB4, LOW);
   break; 
   case 5:
     digitalWrite(INB1, HIGH); 
     digitalWrite(INB2, HIGH);
     digitalWrite(INB3, LOW);
     digitalWrite(INB4, LOW);
   break; 

   
     case 6:
     digitalWrite(INB1, HIGH); 
     digitalWrite(INB2, LOW);
     digitalWrite(INB3, LOW);
     digitalWrite(INB4, LOW);
   break; 
   case 7:
     digitalWrite(INB1, HIGH); 
     digitalWrite(INB2, LOW);
     digitalWrite(INB3, LOW);
     digitalWrite(INB4, HIGH);
   break; 
   default:
     digitalWrite(INB1, LOW); 
     digitalWrite(INB2, LOW);
     digitalWrite(INB3, LOW);
     digitalWrite(INB4, LOW);
   break; 
}
Stepsb++;
if(Stepsb>7){Stepsb=0;}
}
