int pins [] = {2,3,4,5,6,7,8,9,10,11,12,13};

int num_pins = 12;
int firstintervalhigh [] = {4,5,7,10};
int firstintervallow[] = {2,3,6,8,9,11,12,13};

int secondintervalhigh[] = {2,5,8,11};
int secondintervallow[] = {3,4,6,7,9,10,12,13};

int thirdintervalhigh[] = {2,3,9,12};
int thirdintervallow[] = {4,5,6,7,8,10,11,13};

int fourthintervalhigh[] = {3,4,6,13};
int fourthintervallow[] = {2,5,7,8,9,10,11,12};

void setup() 
{
  for(int i = 0; i <= num_pins; i++)
 {pinMode (pins[i], OUTPUT);}
}

void loop() {
// FIRST INTERVAL
 
  for (int j = 0; j <= 4; j++)
  {
    digitalWrite(firstintervalhigh[j], HIGH);
  }
  
  for (int k = 0; k <= 8; k++)
  {
    digitalWrite(firstintervallow[k], LOW);
    
  }

  delay (8000);
//  for (int j = 0; j <= 4; j++)
//   {
//     digitalWrite(firstintervalhigh[j], LOW);
    
//   }
  
  // SECOND INTERVAL
  for (int l = 0; l <= 4; l++)
  {
      digitalWrite(secondintervalhigh[l], HIGH);
  }

  for (int m = 0; m <= 8; m++)
  {
      digitalWrite(secondintervallow[m], LOW);
  }

  delay (8000);
  //  for (int l = 0; l <= 4; l++)
  // {
  //     digitalWrite(secondintervalhigh[l], LOW);
  // }
  
  // THIRD INTERVAL
  for (int x = 0; x <= 4; x++)
  {
    digitalWrite(thirdintervalhigh[x], HIGH);
    
  }
   
  for (int y = 0; y <= 8; y++)
  {
    digitalWrite(thirdintervallow[y], LOW);
    
  }
  delay (8000);
//  for (int x = 0; x <= 4; x++)
//   {
//     digitalWrite(thirdintervalhigh[x], LOW);
    
//   }
   

  // FOURTH INTERVAL

  for (int a = 0; a <= 4; a++)
  {
    digitalWrite(fourthintervalhigh[a], HIGH);
    
  }
    
  for (int b = 0; b <= 8; b++)
  {
    digitalWrite(fourthintervallow[b], LOW);
    
  }
  delay (8000);
//  for (int a = 0; a <= 4; a++)
//   {
//     digitalWrite(fourthintervalhigh[a], LOW);
    
//   }
   
}





 // digitalWrite(red1, HIGH);
  //   digitalWrite(red2, LOW);
  // digitalWrite(red3, LOW);
  // digitalWrite(red4, LOW);

  //  digitalWrite(yellow1,LOW); 
  //  digitalWrite(yellow2,LOW); 
  //  digitalWrite(yellow3,LOW); 
  //  digitalWrite(yellow4,HIGH);

  //  digitalWrite(green1, LOW);
  // digitalWrite(green2, HIGH);
  // digitalWrite(green3, HIGH);
  // digitalWrite(green4, LOW);
  // delay(1000);


  // digitalWrite(yellow, HIGH);
  // delay(3000);
  // digitalWrite(yellow, LOW);
  // delay(1000);

  
  // digitalWrite(green, HIGH);
  // delay(5000);
  // digitalWrite(green, LOW);
  // delay(1000);

 // int red1 = 2;
// int red2 = 3;
// int red3 = 4;
// int red4 = 5; 

 // pinMode(red1, OUTPUT);  
  // pinMode(red2, OUTPUT);
  // pinMode(red3, OUTPUT);
  // pinMode(red4, OUTPUT);


  // pinMode(yellow1, OUTPUT);
  // pinMode(yellow2, OUTPUT);
  // pinMode(yellow3, OUTPUT);
  // pinMode(yellow4, OUTPUT);


  // pinMode(green1, OUTPUT);
  // pinMode(green2, OUTPUT);
  // pinMode(green3, OUTPUT);
  // pinMode(green4, OUTPUT);
// int yellow1 = 6;
// int yellow2 = 7;
// int yellow3 = 8;
// int yellow4 = 9;

// int green1 = 10;
// int green2 = 11;
// int green3 = 12;
// int green4 = 13;

// int lane1 [] = {2,6,10};
// int lane2 [] = {3,7,11};
// int lane3[] = {4,8,12};
// int lane4[] = {5,9,13};
