int buzzer = 22;
const int threshold_val = 30;
int touchSensor1, touchSensor2, touchSensor3;
int i;
void setup() {
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
  delay(2000);
  digitalWrite(buzzer, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  touchSensor1 = touchRead(T5);
  touchSensor2 = touchRead(T6);
  touchSensor3 = touchRead(T7);

  Serial.println("touchSensor1: ");
  Serial.print(touchSensor1);
  Serial.println("touchSensor2: ");
  Serial.print(touchSensor2);
  Serial.println("touchSensor3: ");
  Serial.print(touchSensor3);
  delay(500);

  if(touchSensor1>threshold_val){
    for(i=0;i<2;i++){
      digitalWrite(buzzer, HIGH);
      delay(30);
      digitalWrite(buzzer, LOW);
      delay(30);
      digitalWrite(buzzer, HIGH);
      delay(30);
      digitalWrite(buzzer, LOW);
      delay(30);
      digitalWrite(buzzer, HIGH);
      delay(30);
      digitalWrite(buzzer, LOW);
      delay(30);      
    }
  }
  if(touchSensor2>threshold_val){
    for(i=0;i<5;i++){
      digitalWrite(buzzer, HIGH);
      delay(25);
      digitalWrite(buzzer, LOW);
      delay(25);
      digitalWrite(buzzer, HIGH);
      delay(25);
      digitalWrite(buzzer, LOW);
      delay(25);
    }
  }
  if(touchSensor3>threshold_val){
    for(i=0;i<8;i++){
      digitalWrite(buzzer, HIGH);
      delay(50);
      digitalWrite(buzzer, LOW);
      delay(50);
      digitalWrite(buzzer, HIGH);
      delay(50);
      digitalWrite(buzzer, LOW);
      delay(50);
      digitalWrite(buzzer, HIGH);
      delay(50);
      digitalWrite(buzzer, LOW);
      delay(50);
    }
  }
  else{
    digitalWrite(buzzer, LOW);
  }
}