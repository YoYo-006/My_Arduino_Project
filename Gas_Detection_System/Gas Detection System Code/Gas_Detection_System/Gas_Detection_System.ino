// Author | Sudhang Balisseri

#define sensorDigital A0
#define relay 9
#define buzzer 8
#define sensorAnalog A0
void setup() {
  pinMode(sensorDigital, INPUT);

    pinMode(relay, OUTPUT);

      pinMode(buzzer, OUTPUT);

        Serial.begin(9600);

        }

        void loop() {

          bool digital = digitalRead(sensorDigital);

            int analog = analogRead(sensorAnalog);

  Serial.print("Analog value : ");

    Serial.print(analog);

      Serial.print("t");

        Serial.print("Digital value :");

          Serial.println(digital);          

  if (digital == 0) {

      digitalWrite(relay, LOW);

        

       digitalWrite(buzzer, HIGH);

        delay(5000);

        digitalWrite(relay, HIGH);

        digitalWrite(buzzer, LOW);



            } else {



                digitalWrite(relay, HIGH);



                    digitalWrite(buzzer, LOW);



       }



            }
