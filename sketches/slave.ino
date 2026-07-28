#include <Servo.h>

int _ABVAR_1_a = 0 ;
Servo servo_pin_11;
Servo servo_pin_7;

void Right();
void Select();
void Left();
void Stop();
void Forward();
void Back();

void setup()
{
  Serial.begin(9600);

  pinMode( 2 , INPUT);
  pinMode( 3 , INPUT);

  pinMode( 5 , OUTPUT);
  pinMode( 6 , OUTPUT);
  pinMode( 9 , OUTPUT);
  pinMode( 10 , OUTPUT);
  servo_pin_11.attach(11);
  servo_pin_7.attach(7);
  _ABVAR_1_a = 3 ;

}

void loop()
{
  _ABVAR_1_a = Serial.parseInt() ;
  if (( ( _ABVAR_1_a ) > ( 0 ) ))
  {
    Select();
  }
  else
  {
    _ABVAR_1_a = 3 ;
    Select();
  }
  delay( 50 );
}

void Forward()
{
  digitalWrite( 5 , LOW );
  digitalWrite( 6 , HIGH );
  digitalWrite( 9 , LOW );
  digitalWrite( 10 , HIGH );
}

void Stop()
{
  digitalWrite( 5 , LOW );
  digitalWrite( 6 , LOW );
  digitalWrite( 9 , LOW );
  digitalWrite( 10 , LOW );
}

void Left()
{
  digitalWrite( 5 , LOW );
  digitalWrite( 6 , HIGH );
  digitalWrite( 9 , HIGH );
  digitalWrite( 10 , LOW );
}

void Right()
{
  digitalWrite( 5 , HIGH );
  digitalWrite( 6 , LOW );
  digitalWrite( 9 , LOW );
  digitalWrite( 10 , HIGH );
}

void Back()
{
  digitalWrite( 5 , HIGH );
  digitalWrite( 6 , LOW );
  digitalWrite( 9 , HIGH );
  digitalWrite( 10 , LOW );
}

void Select()
  {
  if (!( digitalRead(2) ))
  {
     Forward();
  }
  if (!( digitalRead(2) ))
  {
     Back();
  }

  if (( ( _ABVAR_1_a ) == ( 1 ) ))
  {
    Forward();
  }
  if (( ( _ABVAR_1_a ) == ( 2 ) ))
  {
    Left();
  }
  if (( ( _ABVAR_1_a ) == ( 3 ) ))
  {
    Stop();
  }
  if (( ( _ABVAR_1_a ) == ( 4 ) ))
  {
    Right();
  }
  if (( ( _ABVAR_1_a ) == ( 5 ) ))
  {
    Back();
  }
  if (( ( _ABVAR_1_a ) == ( 6 ) ))
  {
    Forward();
  }
  if (( ( _ABVAR_1_a ) == ( 7 ) ))
  {
    left();
  }
  if (( ( _ABVAR_1_a ) == ( 8 ) ))
  {
    Stop();
  }
  if (( ( _ABVAR_1_a ) == ( 9 ) ))
  {
    right();
  }
  if (( ( _ABVAR_1_a ) == ( 10 ) ))
  {
    Back();
  }
}

void right()//TURN ONE SIDE WHEELS
{
  digitalWrite( 5 , LOW );
  digitalWrite( 6 , LOW );
  digitalWrite( 9 , LOW );
  digitalWrite( 10 , HIGH );
}

void left()//TURN ONE SIDE WHEELS
{
  digitalWrite( 5 , HIGH );
  digitalWrite( 6 , LOW );
  digitalWrite( 9 , LOW );
  digitalWrite( 10 , LOW );
}


