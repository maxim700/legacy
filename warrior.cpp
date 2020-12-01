#include "warrior.h"
#include <iostream>


Warrior::Warrior(std::string name,int hp,int x,int y,unsigned range,unsigned resist  ,unsigned force ){
    this->name = name;
    this->hp = hp;
    this->x = x;
    this->y = y;
    this->range = range;
    this->Force = force;
    this->resistance = resist;
}
void Warrior::Hit(Character &target){
    if (this->checkrange(target.get_x(),target.get_y())){
        target.damage(this->Force);
    }
    //Возможно стоит вернуть "Слишком далеко", но не уверен, как это стоит сделать

}
void Warrior::damage(int k){
    if (this->resistance>0){
        this->resistance -= k;
    }
    else{
        this->hp -=k;
    }
    if (this->resistance<0) this->resistance = 0;
    if (this->hp<0) this->hp = 0;
}
void Warrior::set_resist(unsigned k){
    this->resistance = k;
}
void Warrior::set_force(unsigned k){
    this->Force = k;
}
unsigned Warrior::get_resist()const{
    return this->resistance;
}
unsigned Warrior::get_force()const{
    return this->Force;
}
