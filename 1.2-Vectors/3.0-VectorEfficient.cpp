#include<iostream>
#include<vector>

struct Entity{
    int x,y,z;
    
    Entity(int _x, int _y, int _z) : x(_x), y(_y), z(_z) {  }
    Entity(const Entity& ent) { std::cout << "Copied!"; }
    ~Entity() {}
};

int main(){

    // U could encounter 3,6 copies for this
    // std::vector<Entity> entities;
    // entities.push_back(Entity({1,2,3}));
    // entities.push_back(Entity({1,2,3}));
    // entities.push_back(Entity({1,2,3}));


    // more efficient (no extra copies created)
    std::vector<Entity> entities;
    entities.reserve(3);            // no copies occuring due to vector resizing
    entities.emplace_back(1,2,3);   // calls constructor for creating the object
    entities.emplace_back(1,2,3);
    entities.emplace_back(1,2,3);

    // 6 memory copies -> 0 copies
}