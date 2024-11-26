


void setup() {
  Serial.begin(9600); // Correct function to initialize serial communication
  float w =85.8;
  float h = 2;
 
  
  float bmi;
  bmi=(w/(h*h));
  Serial.print("BMI in (kg/m^2)  = ");
  Serial.println(bmi);

}

void loop() {
  // Empty loop function
}
