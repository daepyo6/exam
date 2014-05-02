int s_pin = 2;  
int l_pin = 10; 

void setup() {
  pinMode(s_pin, INPUT);
  pinMode(l_pin, OUTPUT);
}

void loop() {
   int sState;
   sState = digitalRead(s_pin);
   
   if(sState == 0)  
     digitalWrite(l_pin, 1);
   else
     digitalWrite(l_pin, 0);
}

----------------------------------
int Potentionmeter= A0;
int l_pin = 10;
int val = 0;

void setup() {
  pinMode(l_pin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  val = analogRead(Potentionmeter);
  val = map(val, 0, 1023, 0, 255);
  Serial.println(val);
  digitalWrite(l_pin, 1);
  delay(val);
  digitalWrite(l_pin, 0);
  delay(val);
}
