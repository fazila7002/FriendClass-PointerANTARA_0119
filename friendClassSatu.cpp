#include <iostream>
#include <string>
using namespace std;

class siswa;
class orang
{
private:
    string nama;
public:
    void setNama(string pNama);
};

class siswa
{
private:
    int id;
public:
    void setId(int pId);
};