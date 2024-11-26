

void setup() {
  Serial.begin(9600); // Correct function to initialize serial communication
  float p = 10000000;
  float r = 8.9;
  float t=8;
  float si;
  si=((p*r*t)/100);
  Serial.print("simple interest is  = ");
  Serial.println(si);

}

void loop() {
  // Empty loop function
}
