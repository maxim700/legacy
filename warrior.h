#ifndef WARRIOR_H
#define WARRIOR_H
#include "character.h"

//Специализация персонажа воин
class Warrior:public Character{
private:
    int resistance;//дополнительная защита
    unsigned Force;//Сила атаки

public:
    //Конструктор (все параметры необязательные)
    Warrior(std::string name="NONAME",int hp=20,int x=0,int y=0,unsigned range = 0,unsigned resist =0 ,unsigned force=0 );
    //Нанесение урона выбранной цели
    void Hit(Character &target);
    //Перегрузка функции получения урона
    void damage(int k);
    //сеттеры
    void set_resist(unsigned k);
    void set_force(unsigned k);
    //геттеры
    unsigned get_resist()const;
    unsigned get_force()const;
};

#endif // WARRIOR_H
