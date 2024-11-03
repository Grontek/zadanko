#include <iostream>
#include <string>

class Osoba {
private:
    std::string imie;  // Modyfikator dostępu: private
    int wiek;          // Modyfikator dostępu: private

public:
    // Konstruktor klasy
    Osoba(std::string imie, int wiek) {
        this->imie = imie;  // Użycie settera
        this->wiek = wiek;  // Użycie settera
    }

    // Getter dla imienia
    std::string getImie() {
        return imie;
    }

    // Setter dla imienia
    void setImie(std::string imie) {
        this->imie = imie;
    }

    // Getter dla wieku
    int getWiek() {
        return wiek;
    }

    // Setter dla wieku
    void setWiek(int wiek) {
        if (wiek >= 0) { // Walidacja wieku
            this->wiek = wiek;
        } else {
            std::cout << "Wiek nie może być ujemny!" << std::endl;
        }
    }

    // Metoda do wyświetlania informacji o osobie
    void pokazInformacje() {
        std::cout << "Imię: " << imie << ", Wiek: " << wiek << std::endl;
    }
};

int main() {
    Osoba osoba1("Jan", 25); // Tworzenie obiektu klasy Osoba
    osoba1.pokazInformacje(); // Wyświetlanie informacji o osobie

    // Użycie setterów
    osoba1.setImie("Adam");
    osoba1.setWiek(30);
    osoba1.pokazInformacje(); // Wyświetlanie zaktualizowanych informacji

    // Próba ustawienia wieku na wartość ujemną
    osoba1.setWiek(-5);

    return 0;
}