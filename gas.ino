
int led0=13,alarm=8,a=7,fan=12,led1=9,b=10;

void setup() {
  // put your setup code here, to run once:
pinMode(led0,OUTPUT);
pinMode(a,OUTPUT);
pinMode(fan,OUTPUT);
pinMode(led1,OUTPUT);
pinMode(b,OUTPUT);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(a,0); 
digitalWrite(b,0);  
int sen  =analogRead(A0);
if(sen>9)
{
  tone(alarm,4000);
  digitalWrite(led0,1);
  digitalWrite(led1,0);
  delay(500);
  digitalWrite(led1,1);
  digitalWrite(fan,1);
  digitalWrite(led0,0);
  noTone(alarm);
  delay(500);
  }
  
  else{
    digitalWrite(led0,0);
    digitalWrite(led1,0);
    digitalWrite(fan,0);
    delay(1000);
    }
    Serial.println(sen);
}
