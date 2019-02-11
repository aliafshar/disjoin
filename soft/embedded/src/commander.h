

#ifndef _commander_h
#define _commander_h


enum CommandGroup {
  SHUFFLE,
  MODE,
  SEQUENCER,
  CONFIG,
  LIGHT,
  KEY,
  VALUE,
};

enum CommandType {
  START,
  STOP,
  ON,
  OFF,
  UP,
  DOWN,
};

class Command {

  public:
   uint8_t index; 

   CommandGroup group;
   CommandType type;

   uint8_t ival1;
   uint8_t ival2;
   uint8_t ival3;
   uint8_t ival4;

};


class CommandHandler {

  virtual void on_command(Command c);

};

#endif
