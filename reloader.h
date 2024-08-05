#pragma once
#include <Arduino.h>
#include<stdint.h>

class reloader {
  private:
  uint8_t _count;
  uint8_t _servopin;
  uint8_t _buttonpin;
  uint8_t _servo2pin;
  uint8_t _button2pin;
  uint8_t _servo2degree;
  uint8_t _buttonstate;
  uint8_t _getcount;
  
  public:
  int loop;
  uint8_t _angle;

  reloader(uint8_t servopin, uint8_t buttonpin, uint8_t count);
  void attach();
  uint8_t write(uint8_t _angle);
  int buttonstate();
  void reset();
  int getcount();

};
