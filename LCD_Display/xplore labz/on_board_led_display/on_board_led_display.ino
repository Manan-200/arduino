const int a1=13; 
const int a2=12;
const int a3=11;
const int a4=10;

const int b1=9;
const int b2=8;
const int b3=7;
const int b4=6;
const int b5=5;
const int b6=4;
const int b7=3;
const int b8=2;
void setup() {
pinMode(a1, INPUT);
pinMode(a2, INPUT);
pinMode(a3, INPUT);
pinMode(a4, INPUT);
pinMode(b1, OUTPUT);
pinMode(b2, OUTPUT);
pinMode(b3, OUTPUT);
pinMode(b4, OUTPUT);
pinMode(b5, OUTPUT);
pinMode(b6, OUTPUT);
pinMode(b7, OUTPUT);
pinMode(b8, OUTPUT);

}

void loop() {  
//   int state1=digitalRead(a1);
//   int state2=digitalRead(a2);
//   int state3=digitalRead(a3);
//   int state4=digitalRead(a4);

if (digitalRead(a1) == HIGH  && digitalRead(a2) == HIGH && digitalRead(a3) == HIGH && digitalRead(a4) == HIGH ) 
{  
digitalWrite(b1,HIGH);
digitalWrite(b2,HIGH);
digitalWrite(b3,HIGH);
digitalWrite(b4,HIGH);
digitalWrite(b5,HIGH);
digitalWrite(b6,HIGH);
digitalWrite(b7,HIGH);
digitalWrite(b8,HIGH);
} 
   
else if (digitalRead(a1) == HIGH  && digitalRead(a2) == HIGH && digitalRead(a3) == HIGH && digitalRead(a4) == LOW )
{  
digitalWrite(b1,HIGH);
digitalWrite(b2,HIGH);
digitalWrite(b3,HIGH);
digitalWrite(b4,HIGH);
digitalWrite(b5,HIGH);
digitalWrite(b6,HIGH);
digitalWrite(b7,HIGH);
digitalWrite(b8,LOW);
} 

else if (digitalRead(a1) == HIGH  && digitalRead(a2) == HIGH && digitalRead(a3) == LOW && digitalRead(a4) == LOW )
{  
digitalWrite(b1,HIGH);
digitalWrite(b2,HIGH);
digitalWrite(b3,HIGH);
digitalWrite(b4,HIGH);
digitalWrite(b5,HIGH);
digitalWrite(b6,HIGH);
digitalWrite(b7,LOW);
digitalWrite(b8,LOW);
}

else if (digitalRead(a1) == HIGH  && digitalRead(a2) == LOW && digitalRead(a3) == LOW && digitalRead(a4) == LOW )
{  
digitalWrite(b1,HIGH);
digitalWrite(b2,HIGH);
digitalWrite(b3,HIGH);
digitalWrite(b4,HIGH);
digitalWrite(b5,HIGH);
digitalWrite(b6,LOW);
digitalWrite(b7,LOW);
digitalWrite(b8,LOW);
}

else if (digitalRead(a1) == LOW  && digitalRead(a2) == HIGH && digitalRead(a3) == LOW && digitalRead(a4) == LOW )
{  
digitalWrite(b1,HIGH);
digitalWrite(b2,HIGH);
digitalWrite(b3,HIGH);
digitalWrite(b4,HIGH);
digitalWrite(b5,LOW);
digitalWrite(b6,LOW);
digitalWrite(b7,LOW);
digitalWrite(b8,LOW);
}

else if (digitalRead(a1) == LOW  && digitalRead(a2) == LOW && digitalRead(a3) == HIGH && digitalRead(a4) == LOW )
{  
digitalWrite(b1,HIGH);
digitalWrite(b2,HIGH);
digitalWrite(b3,HIGH);
digitalWrite(b4,LOW);
digitalWrite(b5,LOW);
digitalWrite(b6,LOW);
digitalWrite(b7,LOW);
digitalWrite(b8,LOW);
}

else if (digitalRead(a1) == LOW  && digitalRead(a2) == LOW && digitalRead(a3) == LOW && digitalRead(a4) == HIGH )
{  
digitalWrite(b1,HIGH);
digitalWrite(b2,HIGH);
digitalWrite(b3,LOW);
digitalWrite(b4,LOW);
digitalWrite(b5,LOW);
digitalWrite(b6,LOW);
digitalWrite(b7,LOW);
digitalWrite(b8,LOW);
}

else if (digitalRead(a1) == LOW  && digitalRead(a2) == HIGH && digitalRead(a3) == HIGH && digitalRead(a4) == HIGH )
{  
digitalWrite(b1,HIGH);
digitalWrite(b2,LOW);
digitalWrite(b3,LOW);
digitalWrite(b4,LOW);
digitalWrite(b5,LOW);
digitalWrite(b6,LOW);
digitalWrite(b7,LOW);
digitalWrite(b8,LOW);
}

else if (digitalRead(a1) == LOW  && digitalRead(a2) == LOW && digitalRead(a3) == LOW && digitalRead(a4) == LOW )
{  
digitalWrite(b1,LOW);
digitalWrite(b2,LOW);
digitalWrite(b3,LOW);
digitalWrite(b4,LOW);
digitalWrite(b5,LOW);
digitalWrite(b6,LOW);
digitalWrite(b7,LOW);
digitalWrite(b8,LOW);
}
}   
