//	============================================================
//	オンボードLED点灯
//	date written 2017-05-10
//	============================================================


//	----------------------------------------
//	起動時に一度だけ実行される
//	----------------------------------------
void setup() {
	pinMode( A0, INPUT );
	pinMode( A1, INPUT );
	Serial.begin(9600);
}


//	----------------------------------------
//	メインループ
//	----------------------------------------
void loop() {
	int x,y;
	char buf[20];
	x=analogRead(A0);
	y=analogRead(A1);
	sprintf(buf,"A0,A1 = %d,%d\r\n",x,y);
	Serial.print(buf);
	delay(200);
}




