// Author | Sudhang

//Arduino Code

int IR1 = 8;

int IR2 = 12;

int IR3 = 13;

int LDR = 7;

int led1 = 3;

int led2 = 5;

int led3 = 6;

int val1;

int val2;

int val3;

int val4;



void setup()

{

pinMode(IR1,INPUT);

pinMode(IR2,INPUT);

pinMode(IR3,INPUT);

pinMode(LDR,INPUT);

pinMode(led1,OUTPUT);

pinMode(led2,OUTPUT);

pinMode(led3,OUTPUT);



}



void loop() {

val1 = digitalRead(IR1);

val2 = digitalRead(IR2);

val3 = digitalRead(IR3);

val4 = digitalRead(LDR);



if(val1==1&&val4==0&&val2==1&&val3==1)

{

digitalWrite(3,LOW);

digitalWrite(5,LOW);

digitalWrite(6,LOW);



}

else if(val1==1&&val4==1&&val2==1&&val3==1)

{

analogWrite(3,20);

analogWrite(5,20);

analogWrite(6,20);

}



else if(val1==0&&val4==1&&val2==1&&val3==1)

{

analogWrite(3,500);

analogWrite(5,20);

analogWrite(6,20);

}

else if(val1==1&&val4==1&&val2==0&&val3==1)

{

analogWrite(3,20);

analogWrite(5,500);

analogWrite(6,20);

}

else if(val1==1&&val4==1&&val2==1&&val3==0)

{

analogWrite(3,20);

analogWrite(5,20);

analogWrite(6,500);

}

}