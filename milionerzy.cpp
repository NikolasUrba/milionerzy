    #include <iostream>
  

    int main() {
        char input;


        std::cout << "naciśnij klawisz np (a) by zobaczyć informacje o nim\n a)int\n b)double\n c)float\n d)char\n e)wskaznik\n f)operatorzy i delete\n g)klasa co to public, private\n h)struktura i czym sie rozni od klasy\n i)co to jest dziedziczenie\n j)co to jest polimorfz" << std::ends;
        



        
       


        while (std::cin >> input) {
            if (input == 'a') {
                std::cout << "Int\n"<< std::ends;
                std::cout << "przechowuje liczby calkowite np -10 0 100\n ";
                break;
            }
             if (input == 'b') {
                std::cout << "Double\n " << std::ends;
                std::cout << "przechowuje zmienne nieskonczone np 3.14159" << std::ends;
                break;
             }
             if (input == 'c') {
                std::cout << "folat\n " << std::ends;
                std::cout << "przechowuje zmienne nieskonczole lecz mniejszą ilosc cyfr niz double np 1.1415" << std::ends;
                break;
             }
             if (input == 'd') {
                std::cout << "char\n " << std::ends;
                std::cout << "przechowuje pojedynczy znakjako wartosc calowita odpowiadajaca kodu ASCCI zajmuje zwykle rozmiar jednego bajtu" << std::ends;
                break;
             }
             if (input == 'e') {
                std::cout << "wskaznik\n " << std::ends;
                std::cout << "to zmienna która przechowuje adres pamieci innego obiektu" << std::ends;
                break;
             }
             if (input == 'f') {
                std::cout << "operatorzy i delete\n " << std::ends;
                std::cout << "operator new alokuje blok pamieci dla programu zwraca wskaznik na poczatek tego bloju\n operator delete jest używany do zwalniania pamieci przydzielonej wczesniej prez operator new" << std::ends;
                break;
             }
             if (input == 'g') {
                std::cout << "klasa co to public, private\n " << std::ends;
                std::cout << "klasa to zbiór zmienntych i funkcji pozwala ona nadefiniowanie wlasnych typow ktore moga reprezentowac obiekty w programie\n public oznacza ze elementy klasy są dostepne z zewnatrz tj mozna sie do nich odwolac z innych czesci program \n private oznacza ze elementy klasy sa ukryte i niedostepne z zewnatrz klasy" << std::ends;
                break;
             }
             if (input == 'h') {
                std::cout << "klasa a struktura\n " << std::ends;
                std::cout << "Domyslne elementy struktury są publiczne a klasy prywatne\n struktura zazwyczaj reprezentuje dane a klasa obiekty i zachowania" << std::ends;
                break;
             }
             if (input == 'i') {
                std::cout << "co to jest dziedziczenie\n " << std::ends;
                std::cout << "jest to tworzenie nowych klas na podstawie istniejacych" << std::ends;
                break;
             }
             if (input == 'j') {
                std::cout << "co to jest polimorfz\n " << std::ends;
                std::cout << "jest to jedna z chech programowania obiektowego. przypisuje ona zachowania do jednego interfejsu" << std::ends;
                break;
             }
                else {
                     std::cout << "wypierdalaj nie ten przycisk" << std::ends;
            
            }

            }



            return 0;
        }












    