
#pragma GCC push_options
#pragma GCC optimize ("Os")


#pragma GCC pop_options

// Peripheral Constructors

void peripheral_setup () {
}

void peripheral_loop() {
}
//---CONFIG_END---

void setup () {
peripheral_setup();
pinMode(13,OUTPUT);
pinMode(12,OUTPUT);
pinMode(11,OUTPUT);

}

void loop() {
peripheral_loop();
digitalWrite(13,HIGH);
delay(4000);
digitalWrite(13,LOW);
delay(4000);
digitalWrite(12,HIGH);
delay(4000);
digitalWrite(12,LOW);
delay(4000);
digitalWrite(11,HIGH);
delay(4000);
digitalWrite(11,LOW);
delay(4000);

}
