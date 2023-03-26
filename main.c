#include <stdio.h>
#include <inttypes.h>
#define bits_in_byte1 8
int main() {
int32_t y=0;
int16_t x=0;
int8_t  a=0x1C;
int8_t  b=0x3D;
int8_t  c=0x15;
int8_t  d=0x6E;
x|=a;
x<<=bits_in_byte1;
x|=b;
y|=a;
y<<=bits_in_byte1;
y|=b;
y<<=bits_in_byte1;
y|=c;
y<<=bits_in_byte1;
y|=d;
printf("a: %04x\n",a);
printf("b: %04x\n",b);
printf("x: %04x\n",x);
printf("c: %04x\n",c);
printf("d: %04x\n",d);
printf("y: %08x\n",y);
}
