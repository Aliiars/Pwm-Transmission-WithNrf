int ch1;
int ch2;
int ch9;
int ch11;
void setup() {

  pinMode(6, INPUT);
  pinMode(7, INPUT);
  pinMode(9, INPUT);
  pinMode(11, INPUT);
  

  Serial.begin(9600);

}

void loop() {

  ch1 = pulseIn(6, HIGH, 25000);
  ch2 = pulseIn(7, HIGH, 25000);
  ch9 = ch1;
  ch11 = ch2;
  

  Serial.print("Channel 1: Channel 9:"); 
  Serial.println(ch1); 
  Serial.println(ch9);  
  Serial.print("Channel 2: Channel 11:"); 
  Serial.println(ch2);
  Serial.println(ch11);     

  delay(100); 
              
}


Ch9 ve 11 pin ataması için kullanıldı ancak işe yaramadı onların olduğu kod dizinleri çıkarılırsa sağlıklı şekilde çalışmakta
