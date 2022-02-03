// HERE INPUTS ARE 2,3,4 AND 5 AND OUTPUTS ARE 10,11,12,13(ON ARDUINO BOARD)
const int SW3UP = 2;     //SW1LEFT_IN FOR FORWARDS(MOTOR 1 AND 2 WILL START FORWARDS)
const int SW2BACK = 3;      //M1BK_IN FOR BACKWARDS(MOTOR 1 AND 2 WILL START BACKWARDS)
const int SW1LEFT = 4;        //FOR TURN(MOTOR 1 WILL START)
const int SW0RIGHT = 5;        //FOR TURN(MOTOR 2 WILL START) 
const int M1FWOUTPUT = 10;  //
const int M1BKOUTPUT = 11;  //
const int M2FWOUTPUT = 12;   //
const int M2BKOUTPUT = 13;   //
const int SENSORPIN = 9; 
int revcount; 
int leftturncount;
int buttonState1 = 0;         
int buttonState2 = 0;
int buttonState3 = 0;
int buttonState4 = 0;
int SENSORSTATE = 0;

void setup() {
  // initialize the motor pins(10,11,12,13) as outputs:
  pinMode(M1FWOUTPUT, OUTPUT);
  pinMode(M1BKOUTPUT, OUTPUT);
  pinMode(M2FWOUTPUT, OUTPUT);
  pinMode(M2BKOUTPUT, OUTPUT);
 // initialize the motor pins(2,3,4,5) as inputs:
  pinMode(SW3UP, INPUT);
  pinMode(SW2BACK, INPUT);
  pinMode(SW1LEFT, INPUT);
  pinMode(SW0RIGHT, INPUT);
   pinMode(SENSORPIN, INPUT);
}

void loop() {
  buttonState1 = digitalRead(SW3UP);
  buttonState2 = digitalRead(SW2BACK);
  buttonState3 = digitalRead(SW1LEFT);
  buttonState4 = digitalRead(SW0RIGHT);
 
 SENSORSTATE= digitalRead(SENSORPIN);
 if (SENSORSTATE == LOW) {
  PORTB = B00000000;
  delay (200);
  for (int revcount = 0; revcount <= 10; revcount++)
  {
  PORTB = B00101000;
  delay (20); 
  PORTB = B00000000;
  delay (30);
  }
  for (int leftturncount = 0; leftturncount <=10; leftturncount++)
  {
  PORTB = B00010000;
  delay (20); 
  PORTB = B00000000;
  delay (30);
  }
    }
      else if (buttonState1 == HIGH) 
      {
      PORTB = B00010100;
      delay (20);
      PORTB = B00000000;
      delay (10);
      } else if (buttonState2 == HIGH)
             {
              PORTB = B00101000;
              delay (20);
              PORTB = B00000000;
              delay (30);
             } else if (buttonState3 == HIGH)
                    {
                    PORTB = B00001000;
                    delay (20);
                    PORTB = B00000000;
                    delay (10);
                    } else if (buttonState4 == HIGH)
                            {
                              PORTB=B00010000;
                              delay (20);
                              PORTB = B00000000;
                              delay (10);
                            }else 
                              {
                              PORTB=B00000000;
                              }
                                }
