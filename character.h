#ifndef CHARACTER_H
#define CHARACTER_H
#include <string>
class Character
{

protected:
    std::string name;//Имя персонажа
    int hp;//Очки здоровья персонажа
    int x;//Координаты персонажа
    int y;
    unsigned range;
public:
    //Конструкто, все поля, необязательные
    Character(std::string name="NONAME",int hp=20,int x=0,int y=0,unsigned range = 0);
    //Геттеры
    int get_hp() const;
    int get_x() const;
    int get_y() const;
    int get_range() const;
    std::string get_name()const;
    //Сеттеры
    void set_name(std::string x);
    void set_x(int x);
    void set_y(int y);
    void set_range(unsigned range);
    //перемещеине персонажа
    void gotoxy(int x,int y);
    //получение урона персонажем урона
    void damage(int k);
    //Восстановление здоровья персонажу
    void heal(int k);
    //Процедура проверки расстояния до точки (x,y)
    bool checkrange(int x,int y);
};

#endif // CHARACTER_H
