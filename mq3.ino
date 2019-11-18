// This is sample code , you can change according to your logic.
int led_pin = 13;
int siren_pin = 12;
int sensor_pin = A0;
int value = 200;
void setup() {
Serial.begin(9600);
pinMode(led_pin, OUTPUT);

pinMode(sensor_pin, INPUT);
}
void loop() {
 int sensor_value  = analogRead(sensor_pin);
Serial.println(sensor_pin);
if(sensor_value > 30)
{
  digitalWrite(led_pin, HIGH);
  digitalWrite(siren_pin, HIGH);
}

else
{
  digitalWrite(led_pin, LOW);
  digitalWrite(sensor_pin, LOW);
}
}
