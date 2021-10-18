int bulb = 8;
int TableLamp = 9;
int Fan = 10;
int heater = 11;

SoftwareSerial bt(0,1); /* (Rx,Tx) */

String str;

void setup() {
bt.begin(9600);
Serial.begin(9600);

pinMode(bulb,OUTPUT);
pinMode(TableLamp,OUTPUT);
pinMode(Fan,OUTPUT);
pinMode(heater,OUTPUT);

}

void loop() {

if (bt.available())
{
str = bt.read();
Serial.println(str);
//bulb
if(str==bulb on)
{
digitalWrite(bulb,HIGH);
Serial.println(“BUlB  is ON”);
}
else if(str==bulb off)
{
digitalWrite(bulb,LOW);
Serial.println(“BUlB  is OFF”);
}
else
{
digitalWrite(bulb,LOW);
}
//TableLamp
if(str==TableLamp on)
{
digitalWrite(TableLamp,HIGH);
Serial.println(“TableLamp is ON”);
}
else if(str==TableLamp off)
{
digitalWrite(TableLamp,LOW);
Serial.println(“TableLamp is OFF”);
}
else
{
digitalWrite(TableLamp,LOW);
}
////Fan
if(str==Fan on)
{
digitalWrite(Fan,HIGH);
Serial.println(Fan is On”);
}
else if(str==Fan off)
{
digitalWrite(Fan,LOW);
Serial.println(“Fan is OFF”);
}
else
{
digitalWrite(Fan,LOW);
}
//Water Heater
if(str==heater on)
{
digitalWrite(heater,HIGH);
Serial.println(“Water Heater is ON”);
}
else if(str==heater off)
{
digitalWrite(heather,LOW);
Serial.println(“Water Heater is OFF”);
}
else
{
digitalWrite(heater,LOW);
}
}
}
