int freq=5000;
int ledChannel=0;
int resolution=8;
int val;
void setup() {
  // put your setup code here, to run once:
  ledcSetup(ledChannel, freq, resolution);
  ledcAttachPin(33, ledChannel);
 
}

void loop() {
  // put your main code here, to run repeatedly:
   val=analogRead(A4);
 Serial.println(val);
 ledcWrite(ledChannel, val/17);
 delay(10);
}
