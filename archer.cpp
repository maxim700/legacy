#include "archer.h"

Archer::Archer(std::string name,int hp,int x,int y,unsigned range ,unsigned arrow ,unsigned accuracy ){
    this->name = name;
    this->hp = hp;
    this->x = x;
    this->y = y;
    this->range = range;
    this->arrow = arrow;
    this->accuracy = accuracy;
}
void Archer::Hit(Character &target){
    if ((this->checkrange(target.get_x(),target.get_y()))&&(this->arrow>0)){
        target.damage(5+(int)(20*accuracy/100));
        this->arrow -=1;
    }
    //Возможно стоит вернуть "Слишком далеко", но не уверен, как это стоит сделать


}
void Archer::set_arrow(unsigned int k){
    this->arrow = k;
}
void Archer::set_accurcy(unsigned k){
    this->accuracy = k;
}
void Archer::add_arrow(unsigned k){
    this->arrow+=k;
}
unsigned Archer::get_arrow()const{
    return this->arrow;
}
unsigned Archer::get_acuracy()const{
    return this->arrow;
}
