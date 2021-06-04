#include <iostream>
#include <string>
using namespace std;
class FIO {
    string _Name;
    string _Familia;
    string _Othestvo;
    FIO(const string& Name,
        const string& Familia,
        const string& Othestvo) :
        _Name(Name),
        _Familia(Familia),
        _Othestvo(Othestvo)
    {}
public:
    class Builder {
        string _Name;
        string _Familia;
        string _Othestvo;
    public:
        Builder& setName(const string& Name) {
            _Name = Name;
            return *this;
        }

        Builder& setFamilia(string Familia) {
            _Familia = Familia;
            return *this;
        }

        Builder& setOthestvo(string Othestvo) {
            _Othestvo = Othestvo;
            return *this;
        }

        FIO* build() {
            return new FIO(_Name, _Familia, _Othestvo);
        }
    };

    string Name() const {
        return _Name;
    }

    string Familia() const {
        return _Familia;
    }

    string Othestvo() const {
        return _Othestvo;
    }
};

int main(){
    setlocale(LC_ALL, "Russian");
    FIO* account = FIO::Builder().setFamilia("Бондаренко ").setName("Денис ").setOthestvo("Сергеевич").build();


    cout << account->Familia() << "";
    cout << account->Name() << "";
    cout << account->Othestvo() << "";
}