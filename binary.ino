//hawlan
int pin2=2;
int pin3=3;
int pin4=4;
int pint5=5;
//hawlan

void setup() {

  pinMode (pin2,OUTPUT);
  pinMode(pin3,OUTPUT);
   pinMode(pin4,OUTPUT);

   
}

void loop() {

digitalWrite(pin2,LOW);
digitalWrite(pin3,LOW);
digitalWrite(pin4,LOW);

delay(750);
  
digitalWrite(pin2,HIGH);
digitalWrite(pin3,HIGH);
digitalWrite(pin4,HIGH);




digitalWrite(pin2,LOW);
digitalWrite(pin3,LOW);
digitalWrite(pin4,HIGH);

delay(750);

digitalWrite(pin2,LOW);
digitalWrite(pin3,HIGH);
digitalWrite(pin4,LOW);

delay(750);

digitalWrite(pin2,LOW);
digitalWrite(pin3,HIGH);
digitalWrite(pin4,HIGH);

delay(750);

digitalWrite(pin2,LOW);
digitalWrite(pin3,HIGH);
digitalWrite(pin4,HIGH);

delay(750);

//hawlan



}
