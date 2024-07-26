#include<iostream>
using namespace std;

struct Vector2{
    float x,y;

    Vector2(float x, float y) : x(x), y(y){}

    Vector2 Add(const Vector2& other) const{
        return Vector2(x + other.x, y + other.y); 
    }

    Vector2 Multiply(const Vector2& other) const{
        return Vector2(x * other.x, y * other.y); 
    }

    // Operator overloading
    Vector2 operator+(const Vector2& other) const{
        return Add(other);
    }

    Vector2 operator*(const Vector2& other) const{
        return Multiply(other);
    }

    // Overloading post-increment operator (++)
    Vector2 operator++(int) {
        Vector2 temp = *this;
        x++;
        y++;
        return temp;
    }
};

// Overloading << operator to print Vector2 objects
ostream& operator<<(std::ostream& stream, const Vector2& other){
    stream << other.x << " , " << other.y;
    return stream;
}

int main(){

    Vector2 pos(4.0f, 4.0f);
    Vector2 speed(0.5f, 0.5f);
    Vector2 powerUp(1.1f, 1.1f);
    
    Vector2 result = pos + speed;
    
    // Post-incrementing pos using overloaded ++
    Vector2 oldPos = pos++;
    
    cout << "Old Position: " << oldPos << endl;
    cout << "Position after post-increment: " << pos;

    return 0;
}
