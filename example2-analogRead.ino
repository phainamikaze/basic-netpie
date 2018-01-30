int sensorValue = 0; 
int ledlist[5] = {12,13,15,2,0};
void setup() {
  for(int i = 0;i<5;i=i+1){
    pinMode(ledlist[i], OUTPUT);
  }
  Serial.begin(115200);
}

void loop() {
  // read the value from the sensor:
  sensorValue = analogRead(A0);
  // turn the ledPin on
  Serial.println(sensorValue);
  for(int i = 0;i<5;i=i+1){
    if(sensorValue<=((204*i)+10)){
      digitalWrite(ledlist[i],LOW);
    }else{
      digitalWrite(ledlist[i],HIGH);
    }
  }
}
