#define water A0

void setup() {
pinMode(water,INPUT);

  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
Serial.println(analogRead(water));

  // put your main code here, to run repeatedly:

}
