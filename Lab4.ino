    
int sensorValue = 0;
const int threshold1 = 1023; 
const int threshold2= 800;

void setup() {
  Serial.begin(9600);
  pinMode(5, OUTPUT);
}

void loop() {
  sensorValue = analogRead(A0);
  Serial.print("Soil Moisture Level: ");
  Serial.println(sensorValue);

  if (sensorValue <= threshold2) {
    digitalWrite(5, LOW);
    Serial.println("Soil is WET - LED OFF");
  } 
  if(sensorValue >= threshold1){

    digitalWrite(5, HIGH);
    Serial.println("Soil is DRY - LED ON");
  }
delay(1000);
}
