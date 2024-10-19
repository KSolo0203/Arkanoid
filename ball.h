#include <cmath>

struct Coordinates
{
    int x, y;
};

class Ball
{
    Coordinates _coords;

public:
    int _speed;
    double angle;

    Ball(int speed) : _speed(speed) {};
    void move();
    // Bonus* bonus;
};

void Ball::move()
{
    _coords.x += _speed * std::cos(angle);
    _coords.y += _speed * std::sin(angle);
}