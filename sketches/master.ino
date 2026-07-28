int _ABVAR_1_A0Value = 0 ;
int _ABVAR_2_A1Value = 0 ;
int _ABVAR_3_A2Value = 0 ;
int _ABVAR_4_A3Value = 0 ;

void ADGet();
void SerialPrint();

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  ADGet();
  SerialPrint();
  delay( 100 );
}

void SerialPrint()
{
  if (( ( ( _ABVAR_1_A0Value ) == ( 0 ) ) && ( ( _ABVAR_2_A1Value ) == ( 1 ) ) ))
  {
    Serial.print("1");
    Serial.println();
  }
  if (( ( ( _ABVAR_1_A0Value ) == ( 1 ) ) && ( ( _ABVAR_2_A1Value ) == ( 0 ) ) ))
  {
    Serial.print("2");
    Serial.println();
  }
  if (( ( ( _ABVAR_1_A0Value ) == ( 1 ) ) && ( ( _ABVAR_2_A1Value ) == ( 1 ) ) ))
  {
    Serial.print("3");
    Serial.println();
  }
  if (( ( ( _ABVAR_1_A0Value ) == ( 1 ) ) && ( ( _ABVAR_2_A1Value ) == ( 2 ) ) ))
  {
    Serial.print("4");
    Serial.println();
  }
  if (( ( ( _ABVAR_1_A0Value ) == ( 2 ) ) && ( ( _ABVAR_2_A1Value ) == ( 1 ) ) ))
  {
    Serial.print("5");
    Serial.println();
  }
  if (( ( ( _ABVAR_3_A2Value ) == ( 0 ) ) && ( ( _ABVAR_4_A3Value ) == ( 1 ) ) ))
  {
    Serial.print("6");
    Serial.println();
  }
  if (( ( ( _ABVAR_3_A2Value ) == ( 1 ) ) && ( ( _ABVAR_4_A3Value ) == ( 0 ) ) ))
  {
    Serial.print("7");
    Serial.println();
  }
  if (( ( ( _ABVAR_3_A2Value ) == ( 1 ) ) && ( ( _ABVAR_4_A3Value ) == ( 1 ) ) ))
  {
    Serial.print("8");
    Serial.println();
  }
  if (( ( ( _ABVAR_3_A2Value ) == ( 1 ) ) && ( ( _ABVAR_4_A3Value ) == ( 2 ) ) ))
  {
    Serial.print("9");
    Serial.println();
  }
  if (( ( ( _ABVAR_3_A2Value ) == ( 2 ) ) && ( ( _ABVAR_4_A3Value ) == ( 1 ) ) ))
  {
    Serial.print("10");
    Serial.println();
  }
}

void ADGet()
{
  _ABVAR_1_A0Value = analogRead(14) ;
  _ABVAR_2_A1Value = analogRead(15) ;
  _ABVAR_1_A0Value = map ( _ABVAR_1_A0Value , 0 , 1024 , 0 , 3 )  ;
  _ABVAR_2_A1Value = map ( _ABVAR_2_A1Value , 0 , 1024 , 0 , 3 )  ;
  _ABVAR_3_A2Value = analogRead(16) ;
  _ABVAR_4_A3Value = analogRead(17) ;
  _ABVAR_3_A2Value = map ( _ABVAR_3_A2Value , 0 , 1024 , 0 , 3 )  ;
  _ABVAR_4_A3Value = map ( _ABVAR_4_A3Value , 0 , 1024 , 0 , 3 )  ;
}


