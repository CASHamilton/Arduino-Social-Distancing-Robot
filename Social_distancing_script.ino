const int red = 4;
const int green = 3;
const int trig = 5;
const int echo = 6;
const int buzzlightyear = 10;
long duration;
int distance;

void setup() {
  // put your setup code here, to run once:
  
  
  pinMode (red, OUTPUT);
  pinMode (green, OUTPUT);
  pinMode (trig, OUTPUT);
  pinMode (echo, INPUT);
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  
  digitalWrite (trig, LOW);
  delayMicroseconds(2);

  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  duration = pulseIn (echo, HIGH);

  //Distance in Centi-Meters (cm)
  distance = duration*0.034/2;

  Serial.println(distance);

//_________________________________________________________

  if (distance >= 200){
  noTone(buzzlightyear);
  digitalWrite (red, LOW);
  digitalWrite (green, HIGH);
} else{
 digitalWrite (green, LOW);
  tone(buzzlightyear, 2000);
  digitalWrite (red, HIGH);
}}
 
