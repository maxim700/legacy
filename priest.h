#ifndef PRIEST_H
#define PRIEST_H
#include "character.h"

//Персонаж специализации лекарь
class Priest:public Character{
private:
    unsigned mana;//Запас маны
    unsigned manainhp;//Количетво маны, требуемое для востановения одного очка здоровья
public:
    //Коснтруктор (все параметры необязательные)
    Priest(std::string name="NONAME",int hp=20,int x=0,int y=0,unsigned range = 0,unsigned mana =0 ,unsigned mih=5 );
    //процедура восстановления здоровья выбранной цели
    void useheal(Character &target);
    //сеттеры
    void set_mana(unsigned k);
    void set_mih(unsigned k);
    //добавление маны
    void add_mana(unsigned k);
    //Геттеры
    unsigned get_mana()const;
    unsigned get_mih()const;
};

#endif // PRIEST_H
