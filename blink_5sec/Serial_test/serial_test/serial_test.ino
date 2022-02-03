void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
 pinMode(LED_BUILTIN, OUTPUT);

}

void loop() 
{
  // put your main code here, to run repeatedly:
if (Serial.read() == "A")
  {
    digitalWrite(LED_BUILTIN, HIGH);
    delay (50000);
  }
else
  {
  digitalWrite(LED_BUILTIN, LOW);
  delay (50000);
  }

}
