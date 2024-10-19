enum Signal {RELEASE, LEFT, RIGHT, GRIP, SHOOT};

struct Coordinates
{
    int x, y;
};

class Platform
{
    Coordinates _coords;
    bool _connector;
    int _speed;

public:
    Platform(int, int);
    void move(Signal);
    Coordinates act(Signal);
};

Platform::Platform(int x, int y)
{
    _coords = {x, y};
    _connector = true;
    _speed = 1;
};

void Platform::move(Signal s)
{
    switch (s) {
        case 1: _coords.x -= _speed;
        case 2: _coords.x += _speed;
        // default: throw;
    }
};

Coordinates Platform::act(Signal s)
{
    switch (s) {
        case 0: {
            _connector = false;
            return _coords;
        }
        case 3: {
            _connector = true;
            return _coords;
        }
        case 4:
            return _coords;
        // default: throw;
    }
};
