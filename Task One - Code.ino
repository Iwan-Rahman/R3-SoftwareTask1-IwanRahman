// C++ code

//Stores input value of potentiometer
int sensorValue = 0;

//Desired output value of the 7-segment displays
int displayOne = 0;
int displayTwo = 0;

//Naming Pins
const int D0 = 2;
const int D1 = 3;
const int D2 = 4;
const int D3 = 5;

const int E0 = 8;
const int E1 = 9;
const int E2 = 10;
const int E3 = 11;

void setup()
{
  
  //Input Pins
  pinMode(A0,INPUT);
  
  //Input Pins of 1st 7-segment decoder
  pinMode(D0,OUTPUT);
  pinMode(D1,OUTPUT);
  pinMode(D2,OUTPUT);
  pinMode(D3,OUTPUT);

  //Input pins of 2nd 7-segment dedcoder
  pinMode(E0, OUTPUT);
  pinMode(E1, OUTPUT);
  pinMode(E2, OUTPUT);
  pinMode(E3, OUTPUT);
  
}

void loop()
{
  // reads and stores the analog value of the input pin(potentiometer)
  sensorValue = analogRead(A0);
  
  // map it to the range of the analog out:
  //The first display will have to have its range split up between 
  //10 numbers evenly representing the tenths number place
  displayOne = map(sensorValue, 0, 1023, 0, 10);
  
  
  //The second display needs a range of a 100 as it represents the ones number palce
  displayTwo = map(sensorValue, 0, 1023, 0, 100);
  
  //By dividing the value by 10 and setting the value equal to the remainder,
  //we are able to ignore the numbers in the tenths place
  displayTwo %= 10;
  
  //Call Display Functions
  input_DisplayOne();
  input_DisplayTwo();
  delay(10);
}


// 4 Digit Input
//High - 1, Low - 0
// D3 D2 D1 D0
//  0  0  0  0 

void input_DisplayOne()
{
  //check for displayOne
    if (displayOne == 0)
	{
      //write 0000, 0
      digitalWrite(D0, LOW);
      digitalWrite(D1, LOW);
      digitalWrite(D2, LOW);
      digitalWrite(D3, LOW);
    }
    
    else if (displayOne == 1) 
	{
      //write 0001, 1
      digitalWrite(D0, HIGH);
      digitalWrite(D1, LOW);
      digitalWrite(D2, LOW);
      digitalWrite(D3, LOW);
    }
    
    else if (displayOne == 2) 
	{
      //write 0010, 2
      digitalWrite(D0, LOW);
      digitalWrite(D1, HIGH);
      digitalWrite(D2, LOW);
      digitalWrite(D3, LOW);
    }
    
    else if (displayOne == 3)
	{
       //write 0011, 3
      digitalWrite(D0, HIGH);
      digitalWrite(D1, HIGH);
      digitalWrite(D2, LOW);
      digitalWrite(D3, LOW);
    }
    
    else if (displayOne == 4) 
	{
      //write 0100, 4
      digitalWrite(D0, LOW);
      digitalWrite(D1, LOW);
      digitalWrite(D2, HIGH);
      digitalWrite(D3, LOW);
    }
    
    else if (displayOne == 5) 
	{
      //write 0101, 5
      digitalWrite(D0, HIGH);
      digitalWrite(D1, LOW);
      digitalWrite(D2, HIGH);
      digitalWrite(D3, LOW);
    }
    
    else if (displayOne == 6) 
	{
      //write 0110, 6
      digitalWrite(D0, LOW);
      digitalWrite(D1, HIGH);
      digitalWrite(D2, HIGH);
      digitalWrite(D3, LOW);
    }
    
    else if (displayOne == 7) 
	{
      //write 0111, 7
      digitalWrite(D0, HIGH);
      digitalWrite(D1, HIGH);
      digitalWrite(D2, HIGH);
      digitalWrite(D3, LOW);
    }
    
    else if (displayOne == 8) 
	{
      //write 1000, 8
      digitalWrite(D0, LOW);
      digitalWrite(D1, LOW);
      digitalWrite(D2, LOW);
      digitalWrite(D3, HIGH);
    }
    
    else if (displayOne == 9) 
	{
      //write 1001, 9
      digitalWrite(D0, HIGH);
      digitalWrite(D1, LOW);
      digitalWrite(D2, LOW);
      digitalWrite(D3, HIGH);
    } 
}

void input_DisplayTwo()
{
  //Check for displayTwo
  if (displayTwo == 0) 
	{
      //write 0000, 0
      digitalWrite(E0, LOW);
      digitalWrite(E1, LOW);
      digitalWrite(E2, LOW);
      digitalWrite(E3, LOW);
    }
    
    else if (displayTwo == 1) 
	{
      //write 0001, 1
      digitalWrite(E0, HIGH);
      digitalWrite(E1, LOW);
      digitalWrite(E2, LOW);
      digitalWrite(E3, LOW);
    }
    
    else if (displayTwo == 2) 
	{
      //write 0010, 2
      digitalWrite(E0, LOW);
      digitalWrite(E1, HIGH);
      digitalWrite(E2, LOW);
      digitalWrite(E3, LOW);
    }
    
    else if (displayTwo == 3) 
	{
      //write 0011, 3
      digitalWrite(E0, HIGH);
      digitalWrite(E1, HIGH);
      digitalWrite(E2, LOW);
      digitalWrite(E3, LOW);
    }
    
    else if (displayTwo == 4) 
	{
      //write 0100, 4 
      digitalWrite(E0, LOW);
      digitalWrite(E1, LOW);
      digitalWrite(E2, HIGH);
      digitalWrite(E3, LOW);
    }
    
    else if (displayTwo == 5) 
	{
      //write 0101, 5
      digitalWrite(E0, HIGH);
      digitalWrite(E1, LOW);
      digitalWrite(E2, HIGH);
      digitalWrite(E3, LOW);
    }
    
    else if (displayTwo == 6) 
	{
      //write 0110, 6
      digitalWrite(E0, LOW);
      digitalWrite(E1, HIGH);
      digitalWrite(E2, HIGH);
      digitalWrite(E3, LOW);
    }
    
    else if (displayTwo == 7) 
	{
      //write 0111, 7
      digitalWrite(E0, HIGH);
      digitalWrite(E1, HIGH);
      digitalWrite(E2, HIGH);
      digitalWrite(E3, LOW);
    }
    
    else if (displayTwo == 8) 
	{
      //write 1000, 8
      digitalWrite(E0, LOW);
      digitalWrite(E1, LOW);
      digitalWrite(E2, LOW);
      digitalWrite(E3, HIGH);
    }
    
    else if (displayTwo == 9) 
	{
      //write 1001, 9
      digitalWrite(E0, HIGH);
      digitalWrite(E1, LOW);
      digitalWrite(E2, LOW);
      digitalWrite(E3, HIGH);
    } 
}