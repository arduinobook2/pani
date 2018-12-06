int solenoidPin = 4;    
void setup() 
{
  pinMode(solenoidPin, OUTPUT);            
}

void loop() 
{
  //Switch Solenoid ON 
  digitalWrite(solenoidPin, HIGH);    
  delay(1000);        
           
  //Switch Solenoid OFF     
  digitalWrite(solenoidPin, LOW);     
  delay(1000);                      
}
