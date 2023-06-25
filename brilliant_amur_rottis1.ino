// C++ code
//
const int ir = 2;
void setup()
{
  pinMode(ir, INPUT);
  Serial.begin(9600);
}

void loop()
{
  int irData =  digitalRead(ir);
  Serial.println(irData);
}