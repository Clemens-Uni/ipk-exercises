

/*double ergebniss (double a,double  b ,double c){
    double e1;
    double D1;
    D1 = sqrt(b * b - (4 * a * c));
     e1 = (-b + D1 )/(2 * a);
   return e1;
  
   
   
}
double ergebniss2 (double a, double b, double c){
    double e2;
    double D2;
    D2 = sqrt(b * b - (4 * a * c));
     e2 = (-b - D2 )/(2 * a);
    return e2;
}
    


int main() {
    double a;
    double b;
    double c;
    std::cout << "Gib die Zahlen für a,b und c ein" << std::endl;
    std::cout << "a = " ;
    std::cin >> a;
       std::cout << "b = ";
    std::cin >> b;
       std::cout << "c = ";
    std::cin >> c;
    double e1 = ergebniss (a, b, c);
    double e2 = ergebniss2 (a, b, c);
    double W = b * b - 4 * a * c;

    if( W < 0 )
    {
    std::cout << "Die Determinante ist negativ!" << std::endl;
    }

    if (W == 0){
        std::cout << "Es gibt nur eine Nullstelle bei x1/2: " << e1 << std::endl;

    }

    if (W > 0) {
    std::cout << "Die Nullstellen sind: x1 = " << e1 << " und x2 = " << e2 << std::endl;
     }
    return 0;

}


int interative(int q, int n) {
    int result = 1;
    for(int i = 0; i < n; i++) {
        result = result * n;
    }
    return result;
}
  */


#include <iostream>
#include <cmath>
/*
using namespace std;

namespace power {

int interative(int q, int n) {
     int result = 1;
    
    if (q < 0 || n < 0){
        std::cout << "Die Funktion rechnet nur mit positiven Zahlen" << std::endl;
            return 0;
    }
    
    else if (n == 0){
    std:cout << "Das Ergebnis ist: 0";
        return 0;
    }
    
    else {
     for(int i = 0; i < n; i++) {
            result = result * q;
        }
        return result;
}
}
}

int main() {
    int q;
    int n;
    std::cout << "Gib die Zahlen für q und n ein" << std::endl;
    std::cout << "q = ";
    std::cin >> q;
    std::cout << "n = ";
    std::cin >> n;
    std::cout << "Das Ergebnis ist: " << power::interative(q,n) << std::endl;
    return 0;
}
*/
#include <iostream>

int fibonacci (int number) {
    int erg;
    if (number == 0){
        return 0;
    }
    if (number == 1){
        return 1;
    }
    else {
        erg = fibonacci(number - 2) + fibonacci(number -1);
        std::cout << erg << " ";
    }
    return erg;
}




int main() {
    int a;
    int b;
    std::cout << "Gib eine Zahl für die Fibonacci-Folge ein: " << std::endl;
    std::cin >> a;
    b = fibonacci (a);
    std::cout << "Die Fiobonaccizahl dazu ist: " << b << std::endl;
    return 0;
}
