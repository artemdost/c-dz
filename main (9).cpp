#include <iostream>
#include <math.h>
#include <cmath> 
#include <stdlib.h>

// 1. Вычислить площадь трапеции с основаниями b1 и b2 и высотой h.
void ploshadTrapec(double b1, double b2, double h)
{ // просто формулки
	double ploshad = (b1 + b2) / 2 * h;
	std::cout << "ploshad  = " << ploshad;
}
// 2. Вычислить длину окружности и площадь круга радиуса г.
void dlinaAndRadius(double r)
{ // просто формулки
    double pi = 22 / 7;
    std:: cout << "Dlina = ";
    std:: cout << 2 * pi * r << std:: endl;
    std:: cout << "Ploshad = ";
    std:: cout << pi * r * r;
}
// 3. Вычислить площадь прямоугольного треугольника и гипотенузу.
void ploshadPryamTreyg(double a1, double a2)
{ // просто формулки
	double ploshad = a1 * a2 / 2;
	double gipotenyza = sqrt(a1 * a1 + a2 * a2);
	std::cout << "ploshad = " << ploshad << ", a gipotenyza = " << gipotenyza;
}
// 4. Дано десятичное четырехзначное число. Найти сумму его цифр.
void summaCifr(int chislo)
{ 
    int a;
    int b;
    int c;
    int d;
    // делю число на отдельные цифры
    a = chislo / 1000;
    b = chislo % 1000 / 100;
    c = chislo % 100 / 10;
    d = chislo % 10;
    std:: cout << "Summa cifr = ";
    std:: cout << a+b+c+d;
}

// 5. Выполнить переход от декартовых координат к полярным.
void perexodKoordinat(double x1, double y1)
{
	double radius = sqrt((x1 * x1) + (y1 * y1)); // sqrt() - корень из числа
	double angle = std::atan2(y1, x1); // atan2 - арктангенс
	std::cout << "v polyarnoy sisteme x,y = " << radius << " " << angle;
}

// 6. Выполнить переход от полярных координат к декартовым.
void perevodPolyarnToDecart(double r, double theta)
{
    double x = r * std::cos(theta);
    double y = r * std::sin(theta);
    std::cout << "Decatrovi coordinati: x = " << x << ", y = " << y;    
}

// 7. Найти корни квадратного уравнения.
void korniKvadrat(double a, double b, double c) 
{
	double discr = b * b - 4 * a * c; // дискриминант
	double xx, x1, x2;
	if (discr < 0) { // меньше нуля - корней нет
		std::cout << "korney net :( ";
	}
	else if (discr == 0) { // равно нулю - один корент
		xx = -b / 2*a;
		std::cout << "x = " << xx;
	}
	else { // иначе 2 корня
		x1 = -b + sqrt(discr) / 2 * a;
		x2 = -b - sqrt(discr) / 2 * a;
		std::cout << "x1 = " << x1 << " x2 = " << x2;
	}
}

// 8. Имеется треугольник со сторонами а, b, с. Найти медианы треугольника, сторонами которого являются медианы исходного треугольника.
void uznatMediani(double a, double b, double c)
{
    double ma, ma1;
    double mb, mb1;
    double mc, mc1;
    
    // ниже представлены формулы получения медиан для соответствующих сторон
    ma = 0.5 * (sqrt(2*c*c+2*b*b-a*a));
    mb = 0.5 * (sqrt(2*c*c+2*a*a-b*b));
    mc = 0.5 * (sqrt(2*a*a+2*b*b-c*c));
    
    ma1 = 0.5 * (sqrt(2*mc*mc+2*mb*mb-ma*ma));
    mb1 = 0.5 * (sqrt(2*mc*mc+2*ma*ma-mb*mb));
    mc1 = 0.5 * (sqrt(2*ma*ma+2*mb*mb-mc*mc));
    
    std:: cout << "Storoni a, b, c: " << std:: endl;
    std:: cout << ma1 << std:: endl << mb1 << std:: endl << mc1 << std:: endl;
}

// 9. Идет k-я секунда суток. Определить, сколько целых часов и целых минут прошло с начала суток
void poschetVremeni(int k)
{	
	if (k > 86400) { // 86400 - целые сутки
		std::cout << "eto drygoi den :(";
	}
	else {
		int chasov = k / 3600;
		int minut = k / 60;
		std::cout << "proshlo chasov - " << chasov << " proshlo minut - " << minut;
	}
}

// 10. Определить, является ли треугольник со сторонами a, b, c равнобедренным.
void IsRavnobren(double a, double b, double c)
{
    if (a==b){
        std:: cout << "Yes";
    } else if (a==c){
        std:: cout << "Yes";
    } else if (b==c){
        std:: cout << "Yes";
    } else {
        std:: cout << "No";
    }
}

// 11. Вычислить стоимость покупки с учётом скидки. Скидка в 10% предоставляется, если сумма покупки превышает 1000 рублей.
void summaSoSkidkoy(double price) 
{
	double newprice;
	if (price > 1000) { // больше 1000 - скидка 10 процентов
		std::cout << "Posdravlyem, vasha novaya cena so skidkoy = " << price * 0.9;
	}
	else if (price < 0) {
		std::cout << "Besplatno!!!";
	}
	else {
		std::cout << "Cena bydet = " << price;
	}
}

// 12. Дать рекомендации пользователю с известным ростом и весом похудеть или поправиться, если идеальный вес определяется формулой (рост - 100 = идеальный вес).
void recomendacii(double ves, double rost)
{
    double ideal = rost - 100; // идеальный вес
    
    if (ves == ideal){ // проверка на идеальность
        std:: cout << "Ti idealen";
    } else if (ves > ideal){
        std:: cout << "Zaimis sportom";
    } else if (ves < ideal){
        std:: cout << "Bolshe kushai";
    }
}

// 13. Программа генерирует два случайных числа в диапазоне от 1 до 9. Тестируемый вводит результат произведения этих чисел. Программа сообщает тестируемому ошибся он или нет.
void proverkaUmnosheniya(int num1, int num2, int proizv)
{
	int trueProizv = num1 * num2;
	if (proizv == trueProizv) std::cout << " Verno, molochik! ";
	else std::cout << " Nepravilno :( ";
}

// 14. Написать программу вычисления стоимости переговоров, если по субботам и воскресеньям предоставляется скидка 20%.
void stoimost(double den, double dlit)
{ 
    int summa = den + dlit - 1; // абстрактное число
    double cena = 0; // стоимость переговоров
    for(int i {summa}; i >= den; i--) {
        if (summa / 7.0 == 1 || summa / 6.0 == 1){ // день недели суббота или воскресенье?
            cena = cena + 80;
        } else {
            cena = cena + 100;
        }
        summa = summa - 1; // уменьшаем количество дней, за которые осталось провести рассчет цены
    } std:: cout << "Stoimost: "<< cena;
}

// 15. Ввести с клавиатуры номер месяца. Выдать сообщение о названии месяца и времени года.
void monthOpredelenie(int monthNumber)
{
	if (monthNumber == 1) { // (((( жалко не прошли свитч кейсы ((((((((((((((((((((((((
		std::cout << "January";
	}
	else if (monthNumber == 2) {
		std::cout << "February";
	}
	else if (monthNumber == 3) {
		std::cout << "March";
	}
	else if (monthNumber == 4) {
		std::cout << "April";
	}
	else if (monthNumber == 5) {
		std::cout << "May";
	}
	else if (monthNumber == 6) {
		std::cout << "June";
	}
	else if (monthNumber == 7) {
		std::cout << "July";
	}
	else if (monthNumber == 8) {
		std::cout << "August";
	}
	else if (monthNumber == 9) {
		std::cout << "September";
	}
	else if (monthNumber == 10) {
		std::cout << "October";
	}
	else if (monthNumber == 11) {
		std::cout << "November";
	}
	else {
		std::cout << "December";
	}
	std::cout << "\n";

	if (monthNumber == 1 || monthNumber == 2 || monthNumber == 12) {
		std::cout << "Zima";
	}
	else if (monthNumber >= 3 && monthNumber <= 5) {
		std::cout << "Vesna";
	}
	else if (monthNumber >= 6 && monthNumber <= 8) {
		std::cout << "Leto";
	}
	else {
		std::cout << "Osen";
	}
}

// 16. Определить, является ли шестизначное число "счастливым"
void isChastlivoe(int chislo6)
{ 
    // получаем отдельные цфиры
    int a = chislo6 / 100000;
    int b = chislo6 / 10000 % 10;  
    int c = chislo6 / 1000 % 10;   
    int d = chislo6 / 100 % 10;   
    int e = chislo6 / 10 % 10;  
    int g = chislo6 % 10;
    if (a+b+c == d+e+g){ // проверка на счастливость
        std:: cout << "Bilet is chastlivii ";
    } else{
        std:: cout << "Bilet is not chastlivii ";
    }
}

// 17. Написать программу, которая при вводе числа в диапазоне от 1 до 99 добавляет к нему слово "копейка" в правильной форме.
void kopeikiOpredelenie(int k)
{
    // ниже представлена зависимость окончания от числа
	if (k%10==1) std::cout << k << " kopeyka";
	if (k % 10 == 0 || k % 10 == 5 || k % 10 == 6 || k % 10 == 7 || k % 10 == 8 || k % 10 == 9) std::cout << k << " kopeek";
	if (k % 10 == 2 || k % 10 == 3 || k % 10 == 4) std::cout << k << " kopeyki";
}

// 18. Дано натуральное четырехзначное число. Выяснить, является ли оно палиндромом.
void isPalindrom(int chislo6)
{ 
    // делю число на отдельные цифры
    int a = chislo6 / 1000;
    int b = chislo6 / 100 % 10;  
    int c = chislo6 / 10 % 10;   
    int d = chislo6 % 10;
    if (a==d and c==b){ // проверка на палиндром
        std:: cout << "Chislo is Palindrom";
    } else{
        std:: cout << "Chislo is not Palindrom";
    }
}

// 19. Дано трёхзначное число. Определить: 19.1 является ли произведение его цифр больше числа b 19.2 кратна ли 7 сумма его цифр.
void summaCifrChisla(int trex)
{
	int f = trex;
	int summa = 0;
	int proizved=1;
	while (f > 0) { // проверяем каждую цифру в числе
		summa += f % 10;
		proizved *= f % 10;
		f = f / 10;
	}
	std::cout << "\n \n";
	if (proizved > trex) std::cout << "proizvedenie bolshe chisla";  //19.1
	else std::cout << "proizvedenie menshe chisla";
	std::cout << "\n \n";
	if (proizved % 7 == 0) std::cout << "summa chisel kratna 7"; //19.2
	else std::cout << "summa chisel ne kratna 7";
}

// 20. Даны вещественные положительные числа a, b, c, d. Выяснить, можно ли прямоугольник со сторонами a, b поместить в прямоугольник со сторонами c, d так, чтобы стороны одного прямоугольника были параллельны сторонам другого.
void IsParallel(double s1,double s2,double s3,double s4)
{ 
    if ((s1 < s3 and s2 < s4) || (s1 < s4 and s2 < s3)){ // проверка на вместимость пРяМоУгОлЬнИкА
       std:: cout << "Mogno"; 
    } else {
       std:: cout << "Nelizya"; 
    }
}

// 21.
void RazmeryDannyx(void)
{ // вывод веса основных типов данных
    std::cout << "Size of char: " << sizeof(char) << " byte(s)" << std::endl;
    std::cout << "Size of int: " << sizeof(int) << " byte(s)" << std::endl;
    std::cout << "Size of float: " << sizeof(float) << " byte(s)" << std::endl;
    std::cout << "Size of double: " << sizeof(double) << " byte(s)" << std::endl;
    std::cout << "Size of short: " << sizeof(short) << " byte(s)" << std::endl;
    std::cout << "Size of long: " << sizeof(long) << " byte(s)" << std::endl;
    std::cout << "Size of bool: " << sizeof(bool) << " byte(s)" << std::endl;
    std::cout << "Вывод: Каждый тип данных нужно использоваться рационально и при необходимости, чтобы сэкономить место в памяти, оптимизировав программу" << std::endl;
    std::cout << "Вывод: Вот такие пироги....вот такие пироги..." << std::endl;
}


int main()
{
    // 1 задача
	double b10, b11, h;
	std:: cout << "1 задача" << std:: endl;
	std::cout << "Vvedite b1,b2,h cherez probel = ";
	std::cin >> b10 >> b11 >> h;
	ploshadTrapec(b10, b11, h);
	std::cout << "\n \n";
	
    // 2 задача
    std:: cout << "2 задача" << std:: endl;
    double r;
    std:: cout << "Vvedite radius = ";
    std:: cin >> r;
    dlinaAndRadius(r);
    std:: cout << "\n \n";
    
    // 3 задача
    std:: cout << "3 задача" << std:: endl;
	double c1, c2;
	std::cout << "Vvedite kateti c1,c2 cherez probel = ";
	std::cin >> c1 >> c2;
	ploshadPryamTreyg(c1, c2);
	std::cout << "\n \n";
    
    // 4 задача
    std:: cout << "4 задача" << std:: endl;
    int number;
    std:: cout << "Vvedite 4znachnoe chislo = ";
    std:: cin >> number;
    summaCifr(number);
    std:: cout << "\n \n";
    
    // 5 задача
    std:: cout << "5 задача" << std:: endl;
	double x1, y1;
	std::cout << "Vvedite dekartovy koordinaty x1,y1 cherez probel = ";
	std::cin >> x1 >> y1;
	perexodKoordinat(x1,y1);
	std::cout << "\n \n";
    
    // 6 задача
    std:: cout << "6 задача" << std:: endl;
    double r1, theta;
    std::cout << "Vvedite r: ";
    std::cin >> r1;
    std::cout << "Vvedite theta: ";
    std::cin >> theta;
    perevodPolyarnToDecart(r1, theta);
    std:: cout << "\n \n";
    
    // 7 задача
    std:: cout << "7 задача" << std:: endl;
	double a, b, c;
	std::cout << "Vvedite a,b,c korni yravneniya cherez probel = ";
	std::cin >> a >> b >> c;
	korniKvadrat(a, b, c);
	std::cout << "\n \n";
    
    // 8 задача
    std:: cout << "8 задача" << std:: endl;
    double a3;
    double b3;
    double c3;
    std:: cout << "Vvedite storoni a, b, c: ";
    std:: cin >> a3 >> b3 >> c3;
    uznatMediani(a3,b3,c3);
    std:: cout << "\n \n";
    
    // 9 задача
    std:: cout << "9 задача" << std:: endl;
	int k;
	std::cout << "Vvedite k sekynd (menee 86400) = ";
	std::cin >> k;
	poschetVremeni(k);
	std::cout << "\n \n";
    
    // 10 задача
    std:: cout << "10 задача" << std:: endl;
    double a4;
    double b4;
    double c4;
    std:: cout << "Vvedite storoni a, b, c: ";
    std:: cin >> a4 >> b4 >> c4;
    IsRavnobren(a4,b4,c4);
    std:: cout << "\n \n";
    
    // 11 задача
    std:: cout << "11 задача" << std:: endl;
	double price;
	std::cout << "Vvedite summy pokypki bez skidki = ";
	std::cin >> price;
	summaSoSkidkoy(price);
	std::cout << "\n \n";
    
    
    // 12 задача
    std:: cout << "12 задача" << std:: endl;
    double ves;
    double rost;
    std:: cout << "Vvedite vash ves i rost: ";
    std:: cin >> ves >> rost;
    recomendacii(ves, rost);
    std:: cout << "\n \n";
    
    // 13 задача
    std:: cout << "13 задача" << std:: endl;
	int proizv;
	srand(time(NULL));
	int num1 = rand() % 9 + 1;
	int num2 = rand() % 9 + 1;
	std::cout << "Vvedite proizvedenie chisel " << num1 << " * " << num2 << std::endl;
	std::cin >> proizv;
	proverkaUmnosheniya(num1,num2,proizv);
	std::cout << "\n \n";
    
    // 14 задача
    std:: cout << "14 задача" << std:: endl;
    double dlit;
    double den;
    std:: cout << "Bazovay plata = 100rub/den " << std:: endl;
    std:: cout << "Vvedite nomer dnya i dlitelnost: ";
    std:: cin >> den >> dlit;
    stoimost(den, dlit);
    std:: cout << "\n \n";
    
    // 15 задача
    std:: cout << "15 задача" << std:: endl;
	int monthNumber;
	std::cout << "Vvedite nomer mesyatsa = ";
	std::cin >> monthNumber;
	monthOpredelenie(monthNumber);
	std::cout << "\n \n";
    
    // 16 задача
    std:: cout << "16 задача" << std:: endl;
    int chislo6;
    std:: cout << "Vvedite 6znachnoe chislo: ";
    std:: cin >> chislo6;
    isChastlivoe(chislo6);
    std:: cout << "\n \n"; 
    
    // 17 задача
    std:: cout << "17 задача" << std:: endl;
	int kop;
	std::cout << "Vvedite kolvo kopeek = ";
	std::cin >> kop;
	kopeikiOpredelenie(kop);
	std::cout << "\n \n";
    
    // 18 задача
    std:: cout << "18 задача" << std:: endl;
    int chislo4;
    std:: cout << "Vvedite 4znachnoe chislo: ";
    std:: cin >> chislo4;
    isPalindrom(chislo4);
    std:: cout << "\n \n"; 
    
    // 19 задача
    std:: cout << "19 задача" << std:: endl;
	int trex;
	std::cout << "Vvedite 3 zhachnoe chislo = ";
	std::cin >> trex;
	summaCifrChisla(trex);
	std::cout << "\n \n";
    
    
    // 20 задача
    std:: cout << "20 задача" << std:: endl;
    double s1,s2,s3,s4;
    std:: cout << "Vvedite 4 chisla: ";
    std:: cin >> s1 >> s2 >> s3 >> s4;
    IsParallel(s1,s2,s3,s4);
    std:: cout << "\n \n"; 
    
    // 21 задача
    std:: cout << "21 задача" << std:: endl;
    RazmeryDannyx();
    
    return 0;
    
    
}
