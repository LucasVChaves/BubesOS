#include "types.h"
#include "utils.h"

static void play_sound(uint32 nFrequency){
    uint32 Div;
    uint8 tmp;

    Div = 1193180 / nFrequency;
    outb(0x43, 0xb6); //outb() = writes the byte specified by its second argument to the I/O port specified by its first argument.
    outb(0x42, (uint8)(Div));
    outb(0x42, (uint8)(Div >> 8));

    //Plays the beep sound using the PC speaker
    tmp = inb(0x61); //inb() = receives input in the determined port.
    if(tmp != (tmp | 3)){
        outb(0x61, tmp | 3);
    }
}

static void shutup(){
    uint8 tmp = inb(0x61) & 0xFC;
    outb(0x61, tmp);
}

//Beep Beep
void beep(){
    play_sound(1000);
    sleep(0x02FFFFF);
    shutup();
}