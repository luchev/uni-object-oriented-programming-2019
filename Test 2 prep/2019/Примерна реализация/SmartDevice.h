class SmartDevice {
protected:
  int PN;
  int RAM;
  int Cores;
  int Version;
public:
  SmartDevice(int RAM);
  int getPN() const;
  int getRAM() const;
  int getSpeed() const;
  int getCores() const;
  void setCores(int cores);
  void setSpeed(int speed);
  void setRAM(int ram);
  void Print() const;
};

int GenerateID();
