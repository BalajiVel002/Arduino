#define l 13
String a;
void setup() {
  Serial.begin(9600);
  pinMode(l,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  while(Serial.available()>0){
    Serial.println(a=Serial.readString());
    
  }
if(a=="ON")
{
  digitalWrite(l,HIGH);
}
if(a=="asd")
{
  digitalWrite(l,LOW);
}
}
