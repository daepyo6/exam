int led[]={2,3,4};


 void setup() 
{
   pinMode(led[0], OUTPUT);
   pinMode(led[1], OUTPUT);
   pinMode(led[2], OUTPUT);
   Serial.begin(9600);
}
 
void loop() 
{
  for(;;)
  {
  Serial.println("led all on");
  digitalWrite(led[0], HIGH); 
  digitalWrite(led[1], HIGH); 
  digitalWrite(led[2], HIGH); 
  delay(1000);               

  Serial.println("led1 on");
  digitalWrite(led[1], LOW);
  digitalWrite(led[2], LOW); 
  delay(1000); 
  
  Serial.println("led2 on");
  digitalWrite(led[1], HIGH);   
  digitalWrite(led[0], LOW); 
  delay(1000);
  
  Serial.println("led3 on");
  digitalWrite(led[2], HIGH);          
  digitalWrite(led[1], LOW); 
  delay(1000);
  };
}