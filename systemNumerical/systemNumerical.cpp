#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
class Notation {
private:
    int num;
    int ansver;
    int numDiv;
    int *ans;
    string ansV;

    void ansverValue() {
        int size = 0;
        int  num1 = this->num;
        int  num2 = this->num;
        while (num1 != 0) {
            num1 /= this->numDiv;
            size++;
        }
       ans = new int[size];
       int i = 0;
       while (num2 != 0) {
               
           ans[i] = num2 % this->numDiv;
           i++;
           num2 /= this->numDiv;
       }

       for (int i = size-1; i>=0; i--)
       {
           if (ans[i] == 0) {
               ansV += "0"; //перевірка на те яка цифра
           }
           if (ans[i] == 1) {
               ansV += "1"; //перевірка на те яка цифра
            }
           if (ans[i] == 2) {
               ansV += "2";
           }
           if (ans[i] == 3) {
               ansV += "3";
           }
           if (ans[i] == 4) {
               ansV += "4"; //Доробити
           }

       }
       cout << ansV;
    }

public:
    Notation() {}
    Notation(int num, int numDiv) {
        this->num = num;
        this->numDiv = numDiv;
        this->ansV = "";
    }
    ~Notation(){}
    
   
    int getNumAnsver() {
        ansverValue();
        return ansver;
    }
};

int main()
{
    Notation a(11,2);
    a.getNumAnsver();
   
}

