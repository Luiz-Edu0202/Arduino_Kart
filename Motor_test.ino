
int IN1;
int IN2;
int IN3;
int IN4;
 
void motor_setup(IN1,IN2,IN3,IN4){
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
}
 
void motor_run(IN1,IN2,IN3,IN4){ 
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}