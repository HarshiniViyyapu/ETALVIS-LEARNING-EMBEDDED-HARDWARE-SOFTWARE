void setup() {
  // put your setup code here, to run once:
  volatile unsigned char *dir ;
  dir = (volatile unsigned char *)0x21;
  *dir = 0xFF;

}

void loop() {
  volatile unsigned char *out;
  out = (volatile unsigned char *) 0x22;
  *out = 0x3F;
  delay(1000);
   *out= 0x06;
   delay(1000);
*out =0x5B;
delay(1000);
*out = 0x4F;
delay(1000);
*out = 0x66;
delay(1000);
*out =0x6D;
delay(1000);
*out =0x7D;
delay(1000);
*out = 0x07;
delay(1000);
*out = 0x7F;
delay(1000);
*out = 0x6F; 
delay(1000);
  // put your main code here, to run repeatedly:

}
