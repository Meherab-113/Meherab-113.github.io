

void setup() {
  Serial.begin(9600); // Correct function to initialize serial communication
  int x = 10;
  int y = 5;
  float a;
a=x+y;
  Serial.print("Sum of two digits = ");
  Serial.println(a);
a=x-y;
  Serial.print("Subtraction of two digits = ");
  Serial.println(a);
a=x/y;
  Serial.print("Division of two digits = ");
  Serial.println(a); 
  
a=x*y;
  Serial.print("Multiplication of two digits = ");
  Serial.println(a);
}

void loop() {
  // Empty loop function
}
