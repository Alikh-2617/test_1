#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <cstdlib>
#include <windows.h>
#include <fstream>
#include <algorithm>
#include <string.h>


using namespace std;
using namespace std::chrono;


void funktion1(){
    cout << "Hello Word !"<<endl;
}
void funktion2(){
    string name;
    string efter_name ;
    int age;
    cout << "Hej skriv dit namn och efter namn och age tack :"<<endl;
    cin >> name >> efter_name >> age ;
    cout << "\nName : " << name << "\nEfter name : " << efter_name << "\nage : "<< age;
}


void funktion3(){
    string text = "nuvarande farg";
    static int col = 15;

    if (col != 0){
        HANDLE  hConsole;
        hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        FlushConsoleInputBuffer(hConsole);
        SetConsoleTextAttribute(hConsole, col);

        cout << text <<endl;
        cout << col <<endl;
        col = 15;
        cout << col <<endl;

    }
    else{
        HANDLE  hConsole;
        hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        FlushConsoleInputBuffer(hConsole);
        SetConsoleTextAttribute(hConsole, col);
        cout << text <<endl;
        cout << col <<endl;
        col = 0;
        cout << col <<endl;

    }
}
void funktion4(){
    cout << __TIMESTAMP__ << endl;
}

void funktion5 (){
    int n ;
    int b;
    cout<<"Hej skrev tva siffror :"<<endl;
    cin >>n >> b;
    if (n>b){
        cout<< n << " ar storst !";
    }
    else{
        cout << b << " ar storst !";
    }
}
void funktion6(){
    int n ,b ,c;

    cout << "Hej du fa gissa ett tal : ";
    cin >>n;
    srand(time(0));
    b = (rand()%100);

    if(n!=b){
        c++;
        cout<<"svaret ar inte korrekt !"<<endl;
        if(n>b){
            cout<<"Talet varit minder an :"<<n<<endl;
            cout<<"ratt svar : "<<b;
        }
        else{
            cout<<"Talet vait store an :"<<n<<endl;
            cout<<"ratt svar : "<<b;
        }

    }

    else{
        cout<<n <<" korrekt svar !!\nDet tåg "<<c<<"ganger till vinna !!";
    }


}
void funktion7(){
    string text;
    cout<<"hej skrev nagot i den file :";
    cin>>text;
    ofstream MyFile("MyFile.txt");

    if(!MyFile.is_open()){
        cout<<"kunde inte hitta filen !!";
    }
    else{
        MyFile << text;
        MyFile.close();
    }
}
void funktion8(){
    string myText;
    cout <<"Texten som laste fran filen :"<<endl;
    ifstream MyReadFile("MyFile.txt");
    if(!MyReadFile.is_open()){
        cout<<"kunde inte hitta filen !!";
    }
    else{
        while (getline (MyReadFile, myText)) {
            cout << myText;
        }
        MyReadFile.close();
    }
}
/*
 * jag har inte förståt den här fråga helt korrekt !
 * men här i den funktion man kan ge decimalform tal och heltal upphöjt till decimalet positionen !
 */

void funktion9(){

    string input;
    static int count;
    cout<<"Skrev ett decimal nummer : ";
    cin>>input;
    cout<<"Nummer i heltal : ";
    for (int i = 0; i < input.size(); i++) {
        if(input[i] !='.'){
            cout<<input[i];
            count++;
        }
    }
    cout<<" *10 upphojd : "<<count-1;




}
void funktion10(){
    int nummer;
    cout << "skrev ett nummer for att se multiplikationstabellen for detta nummer : ";
    cin>>nummer;
    for (int i = 0; i < 11 ; i++){
        cout<<nummer<<" * "<<i<<" --> "<<i*nummer<<endl;
    }
}
void funktion11(){

    int myArray [10];
    int sortArray[10];
    for (int i =0; i<10 ; i++){
        myArray[i]= rand()%100;
    }
    cout<<"Genererade array utan sortering : \n[ ";
    for (int i = 0; i < 10; i++) {
        cout<<myArray[i]<<",";
    }

    for (int i = 0; i < 10; i++) {
        int min = i;

        for (int j = i + 1; j < 10; j++) {
            if (myArray[j] < myArray[min]) {
                min = j;
            }
        }
        if (min != i) {
            int temp = myArray[min];
            myArray[min] = myArray[i];
            myArray[i] = temp;
            temp = sortArray[i];


        }
        sortArray[i]=myArray[i];
    }

    cout<<"]\n\nArrayen som sorterades :\n[";
    for (int i = 0; i <10 ; ++i) {
        cout<<sortArray [i]<<",";

    }
    cout<<"]";
}
void funktion12(){
    string input ;
    char start;
    char slut;
    cout<<"skriv ett ord :";
    cin >>input;
    int b = input.size();
    char ord [b];
    strcpy(ord, input.c_str());
    for (int i = 0; i < b; i++) {
        if(i==0){
            start=ord[i];
        }
        if(i==b-1){
            slut=ord[i];
        }
    }
    if(start==slut){
        cout<<"Ordet ar palinrom !!";
    }
    else{
        cout<<"Ordet ar inte palinrom !";
    }
}

void funktion13(){
    int first ;
    int last ;
    cout<<"skrev tva nummer : "<<endl;
    cin>> first >> last;
    cout<<"siffror mellan dem tvo : ";
    for(int i = first+1 ; i< last ; i++){
        cout<<i<<"-->";
    }
}
void funktion14(){

    string inputs;
    cout<<"skrev nummbers med komma i mellan [,] inte punkt [.]!!: "<<endl;
    cin>>inputs;
    for (int i = 0; i < inputs.size(); i++) {
        if(inputs[i]!=','){
            if(inputs[i]%2==0){
                cout<<"talet ar even: "<<inputs[i]<<endl;
            }
            else{
                cout<<"talet ar odd : "<<inputs[i]<<endl;
            }
        }
    }
}
void funktion15(){
    static int total;
    string inputs;
    cout<<"skrev nummbers med komma i mellan [,] for att adderas : "<<endl;
    cin>>inputs;
    for (int i = 0; i < inputs.size(); i++) {
        if(inputs[i]!=','){
            char c = inputs[i];
            int b  = (int)c-48;
            total +=b;
        }
    }
    cout<<"\n"<<"totalt ar : "<<total;
}

class Fun{
public:
    Fun(string karaktar , string motstondare){
        Karaktar = karaktar;
        Motstondare = motstondare;
    }

    void getBack(){
        srand(time(0));
        int halsa = (rand()%100);
        int styrka = (rand()%100);
        int tur = (rand()%100);
        cout<<"------------------------"<<endl;
        cout<<"for : "<<Karaktar<<"  , "<<Motstondare<<"\nHalsa : "<<halsa<<"\nStyrka : "<<styrka<<"\nTur : "<<tur;
    }

private:
    string Karaktar;
    string Motstondare;
};

int main() {
    int c;
    int input;
    while(true){
        cout<<"\n\n\n\n\n\n\n"<<endl;
        cout<<"hej valkommen till menu, skrev funktions nummer : "<<endl;
        cout<<  "Funktion 1:            Funktion 2:         Funktion 3:         Funktion 4:         Funktion 5:"
                "\nFunktion 6:            Funktion 7:         Funktion 8:         Funktion 9:         Funktion 10:"
                "\nFunktion 11:           Funktion 12:        Funktion 13:        Funktion 14:        Funktion 15:"
                "\nFunktion 16:\n\nExit 17:"<<endl;
        cout<<"\nvilken funktions nummer : ";
        cin>>input;
        cout<<"\n\n\n\n\n\n\n\n\n\n"<<endl;
        if(input==17){
            break;
        }
        switch (input)
        {
            case 1:
                cout<<"Funktion  1 "<<endl;
                cout<<"-------------------------------------------------------------------"<<endl;
                funktion1();
                while(true){
                    cout<<"\n\n\n\n\n\nfor att komma till menu tryck null : ";
                    cin>>c;
                    if(c==0){
                        break;
                    }
                    cout<<"fel input forsok igen !"<<endl;
                }
                break;
            case 2:
                cout<<"Funktion  2 "<<endl;
                cout<<"-------------------------------------------------------------------"<<endl;
                funktion2();
                while(true){
                    cout<<"\n\n\n\n\n\nfor att komma till menu tryck null : ";
                    cin>>c;
                    if(c==0){
                        break;
                    }
                    cout<<"fel input forsok igen !"<<endl;
                }
                break;
            case 3:
                cout<<"Funktion  3 "<<endl;
                cout<<"-------------------------------------------------------------------"<<endl;
                funktion3();
                while(true){
                    cout<<"\n\n\n\n\n\nfor att komma till menu tryck null : ";
                    cin>>c;
                    if(c==0){
                        break;
                    }
                    cout<<"fel input forsok igen !"<<endl;
                }
                break;
            case 4:
                cout<<"Funktion  4 "<<endl;
                cout<<"-------------------------------------------------------------------"<<endl;
                funktion4();
                while(true){
                    cout<<"\n\n\n\n\n\nfor att komma till menu tryck null : ";
                    cin>>c;
                    if(c==0){
                        break;
                    }
                    cout<<"fel input forsok igen !"<<endl;
                }
                break;
            case 5:
                cout<<"Funktion  5 "<<endl;
                cout<<"-------------------------------------------------------------------"<<endl;
                funktion5();
                while(true){
                    cout<<"\n\n\n\n\n\nfor att komma till menu tryck null : ";
                    cin>>c;
                    if(c==0){
                        break;
                    }
                    cout<<"fel input forsok igen !"<<endl;
                }
                break;
            case 6:
                cout<<"Funktion  6 "<<endl;
                cout<<"-------------------------------------------------------------------"<<endl;
                funktion6();
                while(true){
                    cout<<"\n\n\n\n\n\nfor att komma till menu tryck null : ";
                    cin>>c;
                    if(c==0){
                        break;
                    }
                    cout<<"fel input forsok igen !"<<endl;
                }
                break;
            case 7:
                cout<<"Funktion  7 "<<endl;
                cout<<"-------------------------------------------------------------------"<<endl;
                funktion7();
                while(true){
                    cout<<"\n\n\n\n\n\nfor att komma till menu tryck null : ";
                    cin>>c;
                    if(c==0){
                        break;
                    }
                    cout<<"fel input forsok igen !"<<endl;
                }
                break;
            case 8:
                cout<<"Funktion  8 "<<endl;
                cout<<"-------------------------------------------------------------------"<<endl;
                funktion8();
                while(true){
                    cout<<"\n\n\n\n\n\nfor att komma till menu tryck null : ";
                    cin>>c;
                    if(c==0){
                        break;
                    }
                    cout<<"fel input forsok igen !"<<endl;
                }
                break;
            case 9:
                cout<<"Funktion  9 "<<endl;
                cout<<"-------------------------------------------------------------------"<<endl;
                funktion9();
                while(true){
                    cout<<"\n\n\n\n\n\nfor att komma till menu tryck null : ";
                    cin>>c;
                    if(c==0){
                        break;
                    }
                    cout<<"fel input forsok igen !"<<endl;
                }
                break;
            case 10:
                cout<<"Funktion  10 "<<endl;
                cout<<"-------------------------------------------------------------------"<<endl;
                funktion10();
                while(true){
                    cout<<"\n\n\n\n\n\nfor att komma till menu tryck null : ";
                    cin>>c;
                    if(c==0){
                        break;
                    }
                    cout<<"fel input forsok igen !"<<endl;
                }
                break;
            case 11:
                cout<<"Funktion  11 "<<endl;
                cout<<"-------------------------------------------------------------------"<<endl;
                funktion11();
                while(true){
                    cout<<"\n\n\n\n\n\nfor att komma till menu tryck null : ";
                    cin>>c;
                    if(c==0){
                        break;
                    }
                    cout<<"fel input forsok igen !"<<endl;
                }
                break;
            case 12:
                cout<<"Funktion  12 "<<endl;
                cout<<"-------------------------------------------------------------------"<<endl;
                funktion12();
                while(true){
                    cout<<"\n\n\n\n\n\nfor att komma till menu tryck null : ";
                    cin>>c;
                    if(c==0){
                        break;
                    }
                    cout<<"fel input forsok igen !"<<endl;
                }
                break;
            case 13:
                cout<<"Funktion  13 "<<endl;
                cout<<"-------------------------------------------------------------------"<<endl;
                funktion13();
                while(true){
                    cout<<"\n\n\n\n\n\nfor att komma till menu tryck null : ";
                    cin>>c;
                    if(c==0){
                        break;
                    }
                    cout<<"fel input forsok igen !"<<endl;
                }
                break;
            case 14:
                cout<<"Funktion  14 "<<endl;
                cout<<"-------------------------------------------------------------------"<<endl;
                funktion14();
                while(true){
                    cout<<"\n\n\n\n\n\nfor att komma till menu tryck null : ";
                    cin>>c;
                    if(c==0){
                        break;
                    }
                    cout<<"fel input forsok igen !"<<endl;
                }
                break;
            case 15:
                cout<<"Funktion  15 "<<endl;
                cout<<"-------------------------------------------------------------------"<<endl;
                funktion15();
                while(true){
                    cout<<"\n\n\n\n\n\nfor att komma till menu tryck null : ";
                    cin>>c;
                    if(c==0){
                        break;
                    }
                    cout<<"fel input forsok igen !"<<endl;
                }
                break;
            case 16:
                cout<<"Funktion  16 "<<endl;
                cout<<"-------------------------------------------------------------------"<<endl;
                string karaktar;
                string motstondare;
                cout<<"skriv :\nEn Karaktar : ";
                cin>>karaktar;
                cout<<"En motstondare : ";
                cin>>motstondare;
                Fun fun(karaktar,motstondare);
                fun.getBack();
                while(true){
                    cout<<"\n\n\n\n\n\nfor att komma till menu tryck null : ";
                    cin>>c;
                    if(c==0){
                        break;
                    }
                    cout<<"fel input forsok igen !"<<endl;
                }
                break;

/*            default:
                cout<<"fel val , forsok igen !!"
                break;
*/
        }
    }

    return 0;
}
