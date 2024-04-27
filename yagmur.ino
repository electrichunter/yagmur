const int redPin = 9;   // Kırmızı
const int greenPin = 5; // Yeşil
const int bluePin = 3;  // Mavi
const int rainSensorPin = 2; // Yağmur sensörü için dijital giriş

void setup() {
  pinMode(redPin, OUTPUT); 
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(rainSensorPin, INPUT);  
}

void loop() {
  int rainState = digitalRead(rainSensorPin);  

  if (rainState == HIGH) {  // Yağmur var
    
    analogWrite(redPin, 255); 
    analogWrite(greenPin, 0);  
    analogWrite(bluePin, 0);   
  } else {  // Yağmur yok
    
    analogWrite(greenPin, 255);
    analogWrite(redPin, 0);     
    analogWrite(bluePin, 0);     
    delay(5000);                 

    
    analogWrite(redPin, 255);    
    analogWrite(greenPin, 255); 
    analogWrite(bluePin, 0);     
    delay(2000);                 

  }
}
