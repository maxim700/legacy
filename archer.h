#ifndef ARCHER_H
#define ARCHER_H
#include "character.h"

//специализация персонжа лучник
class Archer:public Character{
private:
    unsigned arrow;//Запас стрел
    unsigned accuracy;//Точность (проценты)

public:
    //Конструктор (все поля необязательые)
    Archer(std::string name="NONAME",int hp=20,int x=0,int y=0,unsigned range = 0,unsigned arrow =0 ,unsigned accuracy=0 );
    //Процедра нанесения урона выбранной цели
    void Hit(Character &target);
    //Сеттеры
    void set_arrow(unsigned k);
    void set_accurcy(unsigned k);
    //Добавление стрел
    void add_arrow(unsigned k);
    //геттеры
    unsigned get_arrow()const;
    unsigned get_acuracy()const;
};

#endif // ARCHER_H
