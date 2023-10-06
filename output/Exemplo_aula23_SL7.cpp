#include <iostream>

using namespace std;

class Gen
{
private:
    int x;

protected:
    int y;

public:
    int z;

    int getX()
    {
        return x;
    }

    int getY()
    {
        return y;
    }

    int getZ()
    {
        return z;
    }
    void setX(int x)
    {
        this->x = x;
    }

    void setY(int y)
    {
        this->y = y;
    }

    void setZ(int z)
    {
        this->z = z;
    }
};

class Esp : Gen
{
    void func()
    {
        z = 1;
        y = 2;
        setX(3);
    }
};

class EspPrivate : Gen
{
    private:
    void func()
    {
        setX(5);
        y = 6;
        z = 7;
    }
    public:
    Esp(){
        setX(0);
        y = 0;
        z = 0;
    }
};
/*
class EspPrivate2 : Gen
{
    void func()
    {
        setX(5);
        y = 6;
        z = 7;
    }
};
*/
int
main(void)
{
    Gen minhaSuperclasse;
    Esp minhaSubclasse;
    minhaSuperclasse.setX(5);
    minhaSuperclasse.setY(6);
    minhaSuperclasse.setZ(7);

    cout << minhaSuperclasse.getX() << " "
         << minhaSuperclasse.getY() << " "
         << minhaSuperclasse.getZ() << endl;
    
    return 0;
}