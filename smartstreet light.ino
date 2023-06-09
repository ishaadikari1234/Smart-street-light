void setup() {
  pinMode(2,INPUT);
  pinMode(3,INPUT);
  pinMode(4,INPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(A0, INPUT);
  
}

void loop() {
  int data=analogRead(A0);
  Serial.print(A0);
  if(data<=20)
  {
   if(digitalRead(2)==LOW && digitalRead(3)==LOW && digitalRead(4)==LOW)
   {
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
    
  }

  else if(digitalRead(2)==LOW && digitalRead(3)==LOW)
  {
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);

  }

  else if(digitalRead(3)==LOW && digitalRead(4)==LOW)
  {
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);

  }

  else if(digitalRead(2)==LOW && digitalRead(4)==LOW)
  {
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);

  }

  else if(digitalRead(2)==LOW)
  {
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
    
  }

  else if (digitalRead(3)==LOW)
  {
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
       
  }

  else if(digitalRead(4)==LOW)
  {
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
  }

  else
  {
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW); 
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);       
  } 
  } 
  
}
