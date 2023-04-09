#include<stdio.h>

void print(unsigned char *bits) {
    printf("%d\n", *bits);   
}

int main() {
    unsigned char bits; 
    
    bits = 0b10 & 0b01;     print(&bits);
    bits = 0b10 && 0b01;    print(&bits);
    bits = 0b10 | 0b01;     print(&bits);
    bits = 0b10 || 0b01;    print(&bits);
    bits = 0x77 & 0x88;     print(&bits);
    bits = 0x77 && 0x88;    print(&bits);
    bits = 0xAA | 0x55;     print(&bits);
    bits = 0xAA || 0x55;    print(&bits);
    bits = !0x0F;           print(&bits);
    bits = ~0x0F;           print(&bits);
    bits = !2003;           print(&bits);
    bits = ~0b10010;        print(&bits);
    bits = !0b10010;        print(&bits);
    bits = 0xF0 ^ 0xAA;     print(&bits);
    
    return 0;
}