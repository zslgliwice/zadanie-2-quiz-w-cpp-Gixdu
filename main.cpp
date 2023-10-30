#include <iostream>
#include <windows.h>
#include <cstdlib>

using namespace std;

string name;
string answer;
int score = 0;

int main()
{
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(handle, 12);

    cout << "Podaj imie: ";
    cin >> name;


    for(int i = 3; i>0; i--){
        cout<<i<<"..."<<endl;
        Sleep(1000);
        system("cls");
    }

    cout<<"+============================+"<<endl;
    cout<<"|          Wiedzmin          |"<<endl;
    cout<<"+============================+"<<endl;

    cout << name << " Witaj w tescie z Wiedzmina 3 \n";
    cout << "Pamietaj ze quiz zawiera spojlery do gry!";

     Sleep(5000);
     system("cls");

    cout << "Zycze powodzenia!"<<endl;

    Sleep(3000);
    system("cls");



    cout << "Na poczatku cos latwego. Kim byl Geralt?"<<endl;
    cout << "a) Czarodziejem"<<endl;
    cout << "b) Wiedzminem"<<endl;
    cout << "c) Szamanem"<<endl;
    cout << "Twoja odpowiedz: ";
    cin >> answer;

    if(answer == "b" || answer == "B"){
            system("cls");
        cout << "Poprawna odpowiedz!";
        score++;

    }else{
        system("cls");
        cout << "Zle! Geralt byl wiedzminem!";

    }

    Sleep(3000);
    system("cls");


    cout << "Jak umarl Baron?"<<endl;
    cout << "a) Zostal zabity przez Dziki Gon"<<endl;
    cout << "b) Baron nie umarl"<<endl;
    cout << "c) Popelnil samobojstwo"<<endl;
    cout << "Twoja odpowiedz: ";
    cin >> answer;

    if(answer == "c" || answer == "C"){
            system("cls");
        cout << "Poprawna odpowiedz!";
        score++;

    }else{

        system("cls");
        cout << "Zle! Baron popelnil samobojstwo po stracie swojej zony!";

    }

    Sleep(3000);
    system("cls");



    cout << "Jak nazywa sie gra karciana ktora znajduje sie w wiedzminie?"<<endl;
    cout << "a) Poker"<<endl;
    cout << "b) Gwint"<<endl;
    cout << "c) Makao"<<endl;
    cout << "Twoja odpowiedz: ";
    cin >> answer;

    if(answer == "b" || answer == "B"){
        system("cls");
        cout << "Poprawna odpowiedz!";
        score++;

    }else{

        system("cls");
        cout << "Zle! Gra karciana nazywa sie Gwint!";

    }

    Sleep(3000);
    system("cls");



    cout << "Jaki przydomek miala Ciri?"<<endl;
    cout << "a) Jaskolka"<<endl;
    cout << "b) Wilczyca"<<endl;
    cout << "c) sikorka"<<endl;
    cout << "Twoja odpowiedz: ";
    cin >> answer;

    if(answer == "a" || answer == "A"){
            system("cls");
        cout << "Poprawna odpowiedz!";
        score++;

    }else{

        system("cls");
        cout << "Zle! Ciri nosila przydomek: Jaskolka!";

    }

    Sleep(3000);
    system("cls");



    cout << "Kogo Geralt nazywal plotka?"<<endl;
    cout << "a) Keire Metz"<<endl;
    cout << "b) Swojego konia"<<endl;
    cout << "c) Yennefer"<<endl;
    cout << "Twoja odpowiedz: ";
    cin >> answer;

    if(answer == "b" || answer == "B"){
            system("cls");
        cout << "Poprawna odpowiedz!";
        score++;

    }else{

        system("cls");
        cout << "Zle! Geralt nazywa swojego konia plotka!";

    }

    Sleep(3000);
    system("cls");



    cout << "Kim byl Zoltan?"<<endl;
    cout << "a) Byl czarodziejem ktory potrafil przechodzic przez portale"<<endl;
    cout << "b) Krasnoludem, ktory byl weteranem II wojny z Nilfgaardem"<<endl;
    cout << "c) Najlepszym wiedzminem w Kaer Morhen"<<endl;
    cout << "Twoja odpowiedz: ";
    cin >> answer;

    if(answer == "b" || answer == "B"){
            system("cls");
        cout << "Poprawna odpowiedz!";
        score++;

    }else{

        system("cls");
        cout << "Zle! Zolatn byl krasnoludem, ktory byl weteranem II wojny z Nilfgaardem!";

    }

    Sleep(3000);
    system("cls");




    cout << "Gratulacje ukonczyles quiz!"<< endl;
    if(score <= 1){
      cout << "Jestes Slabiakiem ";
    }

    else if(score >= 2 && score <= 3){
      cout << "Nie ma tragedii ";
    }

    else if(score >= 4 && score <= 5){
      cout << "Bardzo dobrze znasz gre Wiedzmin 3  ";
    }

    else if(score = 6){
      cout << "Wysmienicie znasz gre Wiedzmin 3 ";
    }



    cout << "Twoja liczba punktow wynosi: "<<score<<"/6."<< endl;



    return 0;
}
