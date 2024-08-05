#include "reloader.h"

reloader::reloader(uint8_t servopin, uint8_t buttonpin, uint8_t count)
: _servopin(servopin), _buttonpin(buttonpin), _count(count){
    loop=0;
    pinMode(_buttonpin, INPUT_PULLUP);
}

void reloader::attach() {
  _buttonstate=digitalRead(_buttonpin);
}

uint8_t reloader::write(uint8_t _angle) {
  attach();
  if (_buttonstate == 0  && loop == 0) {
    _angle += 3;
    _count++;
    loop = 1;
  }

  else if (_buttonstate == 1 && loop == 1) {
    loop = 0;
  }
  return _angle;
}

int reloader::buttonstate(){
  return _buttonstate;
}

void reloader::reset(){
  _count=0;
}

int reloader::getcount(){
  _getcount =_count;
  return _getcount;
}
