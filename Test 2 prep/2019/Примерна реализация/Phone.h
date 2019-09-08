class Phone {
protected:
  char * Name = nullptr;
  int ScreenSize;
  int Number;
public:
  Phone(const char * name, int screenSize, int number);
  ~Phone();
  Phone(const Phone & rhs);
  Phone & operator=(const Phone & rhs);
  const char * getName() const;
  int getScreenSize() const;
  int getNumber() const;
  void setName(const char * name);
  void setScreenSize(int screenSize);
  void setNumber(int number);
  void Call(const Phone & phone) const;
  void Print() const;
};
