// C++ code
//
int i;

void setup()
{
  Serial.begin(9600);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(A0,INPUT);
}

void loop()
{
  
 int x= analogRead(A0);// check the light 
  Serial.println(analogRead(A0));
  if (x<250) // if it's dark tunr on the led
  { for(i=0;i<255;i++){
    analogWrite(5,i);
   analogWrite(6,i);
    delay(1);
  }
  }else {// if there is a light turn off the led
    
  analogWrite(6,0);
    analogWrite(5,0);
      
  }
  
}
