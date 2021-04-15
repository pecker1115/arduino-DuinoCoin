#ifndef _DuinoCoin_H_
#define _DuinoCoin_H_

#include <Arduino.h>
#include <ArduinoUniqueID.h>

#if defined(ARDUINO_ARCH_AVR)
#include "avr/sha1.h"
#endif

class DuinoCoin
{
public:
  DuinoCoin(HardwareSerial &stream);
  ~DuinoCoin();

  void begin();
  bool loop();

  void test(Stream &stream);
  
  uint32_t ducos1a(String lastblockhash, String newblockhash, int difficulty);

private:
  HardwareSerial &serial;
  String ID;
};

#endif