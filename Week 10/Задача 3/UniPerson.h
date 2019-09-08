#ifndef UNIPERSON_H
#define UNIPERSON_H
class UniPerson {
    char * name;
public:
    UniPerson(const char * Name = "");
    ~UniPerson();
    UniPerson(const UniPerson & person);
    UniPerson & operator=(const UniPerson & person);
    void setName(const char * Name);
    const char * getName() const;
};
#endif