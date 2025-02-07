#pragma once

#include "Arduino.h"
#include <Arduino_GFX_Library.h>

#define DC_PIN = 2
#define CS_PIN 15
#define SCK_PIN 14
#define MOSI_PIN 13

class MyCustomClass
{
public:
MyCustomClass(uint8_t dc_pin, uint8_t cs_pin, uint8_t sck_pin, uint8_t mosi_pin, uint8_t rst_pin, uint8_t rotation);
    void begin();
    void attach(uint16_t Pin3, char *init);
    void detach();
    void set(int16_t messageID, char *setPoint);
    void update();

    uint8_t _dc_pin;
    uint8_t _cs_pin;
    uint8_t _sck_pin;
    uint8_t _mosi_pin;
    uint8_t _rst_pin;
    uint8_t _rotation;

private:
    bool    _initialised;
    uint8_t _pin1, _pin2, _pin3;
};
