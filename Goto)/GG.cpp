#include <iostream>
#include <Windows.h>
#include <ctime>
/*int main()
{
	std::cout << "Hello World and Surzh Denis";

	return 0;
}*/
/*int main()   ----Скипайте это я через нейронку пытался понять а она фулл ответ дала я понял как это сделать. Не знал или прослушал о sum += number; сумма в начале ровна нулю как и число, через цикл мы указываем что сумма + число равна сумме она сохранеяться и если мы введем 0 цикл оборветься
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int number = 0;
    int sum = 0;

    std::cout << "Введите числа (0 для выхода):\n";

    // Считываем первое число
    std::cin >> number;

    // Цикл работает, пока пользователь НЕ ввел 0
    while (number != 0)
    {
        sum += number;     // Прибавляем число к общей сумме (то же самое, что sum = sum + number)
        std::cin >> number; // Считываем следующее число
    }

    std::cout << "Сумма всех введенных чисел: " << sum << std::endl;

    return 0;
}*/
/* Мне помогла нейронка и опять показала фулл ответ но перефрозированый. 
Я взял int choice хранитель целых чисел и правильный порядок кода а все остальное написал сам */
/*
int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int choice;

        do
        {
            std::cout << " 1) Новая игра";
            std::cout << " 2) Настройки";
            std::cout << " 3) Выход";

            std::cin >> choice;

            if (choice != 1 && choice != 2 && choice != 3)
            {
                std::cout << "Неправильно";
            }

        } while (choice != 1 && choice != 2 && choice != 3);

        if (choice == 1) {
            std::cout << "Запущена новая игра" << std::endl;
        }
        else if (choice == 2) {
            std::cout << "Выбраны настройки" << std::endl;
        }
        else if (choice == 3) {
            std::cout << "Выход из программы" << std::endl;
        }





        return 0;
}


*/
/*int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int count = 0;

    // а) PIN-коды из разных цифр

    std::cout << "а) PIN-коды из разных цифр:" << std::endl;

    for (int a = 0; a <= 9; a++)
    {
        for (int b = 0; b <= 9; b++)
        {
            for (int c = 0; c <= 9; c++)
            {
                for (int d = 0; d <= 9; d++)
                {
                    if (a != b && a != c && a != d &&
                        b != c && b != d &&
                        c != d)
                    {
                        count++;

                        // Первые 10
                        if (count <= 10)
                        {
                            std::cout << a << b << c << d << " ";
                        }
                    }
                }
            }
        }
    }

    std::cout << std::endl;
    std::cout << "Количество: " << count << std::endl;

    // Последние 10 кодов
    std::cout << "Последние 10: ";

    count = 0;

    for (int a = 0; a <= 9; a++)
    {
        for (int b = 0; b <= 9; b++)
        {
            for (int c = 0; c <= 9; c++)
            {
                for (int d = 0; d <= 9; d++)
                {
                    if (a != b && a != c && a != d &&
                        b != c && b != d &&
                        c != d)
                    {
                        count++;

                        if (count > 5030)
                        {
                            std::cout << a << b << c << d << " ";
                        }
                    }
                }
            }
        }
    }

    std::cout << std::endl << std::endl;


    // б) PIN-коды с повторяющимися цифрами

    std::cout << "б) PIN-коды с повторяющимися цифрами:" << std::endl;

    count = 0;

    for (int a = 0; a <= 9; a++)
    {
        for (int b = 0; b <= 9; b++)
        {
            for (int c = 0; c <= 9; c++)
            {
                for (int d = 0; d <= 9; d++)
                {
                    count++;

                    // Первые 10
                    if (count <= 10)
                    {
                        std::cout << a << b << c << d << " ";
                    }
                }
            }
        }
    }

    std::cout << std::endl;
    std::cout << "Количество: " << count << std::endl;

    // Последние 10
    std::cout << "Последние 10: ";

    count = 0;

    for (int a = 0; a <= 9; a++)
    {
        for (int b = 0; b <= 9; b++)
        {
            for (int c = 0; c <= 9; c++)
            {
                for (int d = 0; d <= 9; d++)
                {
                    count++;

                    if (count > 9990)
                    {
                        std::cout << a << b << c << d << " ";
                    }
                }
            }
        }
    }

    std::cout << std::endl;

    return 0;






    //----------------------------------------------------------------------\\
// Задание 1
int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8); //		1251
    srand(time(NULL));

    int number123;
    int number123A;
    int number123B;
    int numberB;
    int number123C;

    int number456;
    int number456A;
    int number456B;
    int numberBR;
    int number456C;


    int number;
    int number1;
    int number2;


    std::cout << "Введите счастливое число из 6 символов числа\n";
    std::cin >> number;
    if (number > 999999 || number < 100000)
    {
        std::cout << "Ошибка введите корректно\n";
    }
    else
    {
        number123 = number / 1000; //Первые три числа

        number123A = number123 / 100;

        numberB = number123 / 10;
        number123B = numberB % 10;

        number123C = number123 % 10;

        number1 = number123A + number123B + number123C;

        //--------------------\\

        number456 = number % 1000; //Последнии три числа

        number456A = number456 / 100;

        numberBR = number456 / 10;
        number456B = numberBR % 10;

        number456C = number456 % 10;


        number2 = number456A + number456B + number456C;

        //--------------------\\

        if (number1 == number2)
        {
            std::cout << "Это число счастливое\n";
        }
        else
        {
            std::cout << "Это число не счастливое\n";
        }
    }

    return 0;
}


//----------------------------------------------------------------------\\


// Задание 2

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8); //		1251
    srand(time(NULL));

    int number;

    int number12;
    int number12A;
    int number12B;

    int number34;
    int number34A;
    int number34B;



    std::cout << "Введите четырехзначное число\n";
    std::cin >> number;

    if (number > 9999 || number < 1000)
    {
        std::cout << "Ошибка введите корректно";
    }
    else
    {
        number12 = number / 100;

        number12A = number12 / 10;

        number12B = number12 % 10;


        number34 = number % 100;

        number34A = number34 / 10;

        number34B = number34 % 10;


        std::cout << number34A << number34B << number12A << number12B;

    }




    return 0;
}


//----------------------------------------------------------------------\\
// Задание 3

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8); //		1251
    srand(time(NULL));

    int number1234;
    int number1234A;

    int number1234B;
    int numberB;

    int number1234C;
    int numberC;

    int number1234D;

    int number567;
    int number567A;

    int number567B;
    int numberBR;

    int number567C;

    int number;



    std::cout << "Введите семезначное число\n";
    std::cin >> number;

    if (number > 9999999 || number < 1000000)
    {
        std::cout << "Ошибка введите корректно";
    }
    else
    {
        number1234 = number / 1000;




        number1234A = number1234 / 1000;

        numberB = number1234 / 100;
        number1234B = numberB % 10;

        numberC = number1234 % 100;
        number1234C = numberC / 10;

        number1234D = number1234 % 10;

        //-------------------------\\

        number567 = number % 1000;


        number567A = number567 / 100;

        numberBR = number567 / 10;

        number567B = numberBR % 10;

        number567C = number567 % 10;


        if (number1234A > number1234B && number1234A > number1234C && number1234A > number1234D && number1234A > number567A && number1234A > number567B && number1234A > number567C)
        {
            std::cout << "Самое большое число " << number1234A;
        }
        else if (number1234B > number1234A && number1234B > number1234C && number1234B > number1234D && number1234B > number567A && number1234B > number567B && number1234B > number567C)
        {
            std::cout << "Самое большое число " << number1234B;
        }
        else if (number1234C > number1234A && number1234C > number1234B && number1234C > number1234D && number1234C > number567A && number1234C > number567B && number1234C > number567C)
        {
            std::cout << "Самое большое число " << number1234C;
        }
        else if (number1234D > number1234A && number1234D > number1234B && number1234D > number1234C && number1234D > number567A && number1234D > number567B && number1234D > number567C)
        {
            std::cout << "Самое большое число " << number1234D;
        }
        else if (number567A > number1234A && number567A > number1234B && number567A > number1234C && number567A > number1234D && number567A > number567B && number567A > number567C)
        {
            std::cout << "Самое большое число " << number567A;
        }
        else if (number567B > number1234A && number567B > number1234B && number567B > number1234C && number567B > number1234D && number567B > number567A && number567B > number567C)
        {
            std::cout << "Самое большое число " << number567B;
        }
        else if (number567C > number1234A && number567C > number1234B && number567C > number1234C && number567C > number1234D && number567C > number567A && number567C > number567B)
        {
            std::cout << "Самое большое число " << number567C;
        }


    }



    return 0;
}


int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8); //		1251
    srand(time(NULL));

    // ЗАДАНИЕ 1 (Счастливое число из 6 символов)

    int t1_number123;
    int t1_number123A;
    int t1_number123B;
    int t1_numberB;
    int t1_number123C;

    int t1_number456;
    int t1_number456A;
    int t1_number456B;
    int t1_numberBR;
    int t1_number456C;

    int t1_number;
    int t1_number1;
    int t1_number2;

    std::cout << "Введите счастливое число из 6 символов числа\n";
    std::cin >> t1_number;
    if (t1_number > 999999 || t1_number < 100000)
    {
        std::cout << "Ошибка введите корректно\n";
    }
    else
    {
        t1_number123 = t1_number / 1000; //Первые три числа

        t1_number123A = t1_number123 / 100;

        t1_numberB = t1_number123 / 10;
        t1_number123B = t1_numberB % 10;

        t1_number123C = t1_number123 % 10;

        t1_number1 = t1_number123A + t1_number123B + t1_number123C;

        //--------------------\\

        t1_number456 = t1_number % 1000; //Последнии три числа

        t1_number456A = t1_number456 / 100;

        t1_numberBR = t1_number456 / 10;
        t1_number456B = t1_numberBR % 10;

        t1_number456C = t1_number456 % 10;

        t1_number2 = t1_number456A + t1_number456B + t1_number456C;

        //--------------------\\

        if (t1_number1 == t1_number2)
        {
            std::cout << "Это число счастливое\n";
        }
        else
        {
            std::cout << "Это число не счастливое\n";
        }
    }


    //    // ЗАДАНИЕ 2 (Четырехзначное число)

    int t2_number;

    int t2_number12;
    int t2_number12A;
    int t2_number12B;

    int t2_number34;
    int t2_number34A;
    int t2_number34B;

    std::cout << "\nВведите четырехзначное число\n";
    std::cin >> t2_number;

    if (t2_number > 9999 || t2_number < 1000)
    {
        std::cout << "Ошибка введите корректно\n";
    }
    else
    {
        t2_number12 = t2_number / 100;

        t2_number12A = t2_number12 / 10;

        t2_number12B = t2_number12 % 10;

        t2_number34 = t2_number % 100;

        t2_number34A = t2_number34 / 10;

        t2_number34B = t2_number34 % 10;

        std::cout << t2_number34A << t2_number34B << t2_number12A << t2_number12B << "\n";
    }


    // ЗАДАНИЕ 3 (Семизначное число)

    int t3_number1234;
    int t3_number1234A;

    int t3_number1234B;
    int t3_numberB;

    int t3_number1234C;
    int t3_numberC;

    int t3_number1234D;

    int t3_number567;
    int t3_number567A;

    int t3_number567B;
    int t3_numberBR;

    int t3_number567C;

    int t3_number;

    std::cout << "\nВведите семезначное число\n";
    std::cin >> t3_number;

    if (t3_number > 9999999 || t3_number < 1000000)
    {
        std::cout << "Ошибка введите корректно\n";
    }
    else
    {
        t3_number1234 = t3_number / 1000;

        t3_number1234A = t3_number1234 / 1000;

        t3_numberB = t3_number1234 / 100;
        t3_number1234B = t3_numberB % 10;

        t3_numberC = t3_number1234 % 100;
        t3_number1234C = t3_numberC / 10;

        t3_number1234D = t3_number1234 % 10;

        //-------------------------\\

        t3_number567 = t3_number % 1000;

        t3_number567A = t3_number567 / 100;

        t3_numberBR = t3_number567 / 10;

        t3_number567B = t3_numberBR % 10;

        t3_number567C = t3_number567 % 10;

        if (t3_number1234A > t3_number1234B && t3_number1234A > t3_number1234C && t3_number1234A > t3_number1234D && t3_number1234A > t3_number567A && t3_number1234A > t3_number567B && t3_number1234A > t3_number567C)
        {
            std::cout << "Самое большое число " << t3_number1234A << "\n";
        }
        else if (t3_number1234B > t3_number1234A && t3_number1234B > t3_number1234C && t3_number1234B > t3_number1234D && t3_number1234B > t3_number567A && t3_number1234B > t3_number567B && t3_number1234B > t3_number567C)
        {
            std::cout << "Самое большое число " << t3_number1234B << "\n";
        }
        else if (t3_number1234C > t3_number1234A && t3_number1234C > t3_number1234B && t3_number1234C > t3_number1234D && t3_number1234C > t3_number567A && t3_number1234C > t3_number567B && t3_number1234C > t3_number567C)
        {
            std::cout << "Самое большое число " << t3_number1234C << "\n";
        }
        else if (t3_number1234D > t3_number1234A && t3_number1234D > t3_number1234B && t3_number1234D > t3_number1234C && t3_number1234D > t3_number567A && t3_number1234D > t3_number567B && t3_number1234D > t3_number567C)
        {
            std::cout << "Самое большое число " << t3_number1234D << "\n";
        }
        else if (t3_number567A > t3_number1234A && t3_number567A > t3_number1234B && t3_number567A > t3_number1234C && t3_number567A > t3_number1234D && t3_number567A > t3_number567B && t3_number567A > t3_number567C)
        {
            std::cout << "Самое большое число " << t3_number567A << "\n";
        }
        else if (t3_number567B > t3_number1234A && t3_number567B > t3_number1234B && t3_number567B > t3_number1234C && t3_number567B > t3_number1234D && t3_number567B > t3_number567A && t3_number567B > t3_number567C)
        {
            std::cout << "Самое большое число " << t3_number567B << "\n";
        }
        else if (t3_number567C > t3_number1234A && t3_number567C > t3_number1234B && t3_number567C > t3_number1234C && t3_number567C > t3_number1234D && t3_number567C > t3_number567A && t3_number567C > t3_number567B)
        {
            std::cout << "Самое большое число " << t3_number567C << "\n";
        }
    }

    return 0;
}



}*/

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8); //		1251
    srand(time(NULL));


    
    const int size = 10;
    int AM[size];
    int min = 9;
    int max = -1;


    int randomNumber = rand() % 10;


    for (int i = 0; i < 10; i++)
    {
        AM[i] = rand() % 10;
        if (AM[i] < min) min = AM[i];
        if (AM[i] > max) max = AM[i];

        std::cout << AM[i] << " ";

    }
    std::cout << " \n";
    std::cout << "Минимальное " << min << " \n";
    std::cout << "Максимальное " << max << " \n\n\n\n";
    
    //-----------------------------------\\





    
    int NumberMin = 0;
    int NumberMax = 0;
    int Element = 0;
    int SumAN2 = 0;

    std::cout << "Введите минимальное число" << " \n";
    std::cin >> NumberMin;
    std::cout << "Введите максимальное число диапазона " << " \n";
    std::cin >> NumberMax;

    const int size_AN2 = 10;
    int AN2[size_AN2];

        
    std::cout << "Сгенерированный массив: ";
    for (int g = 0; g < size_AN2; g++)
    {
            
            AN2[g] = NumberMin + rand() % (NumberMax - NumberMin + 1);
            std::cout << AN2[g] << " ";
    }
    std::cout << "\n\n";

        
    std::cout << "Введите элемент-критерий: " << " \n";
    std::cin >> Element;
    for (int i = 0; i < size_AN2; i++)
    {
        if (AN2[i] < Element)
        {
                SumAN2 += AN2[i];
        }
    }
    std::cout << "Сумма элементов меньше " << Element << " равна: " << SumAN2 << "\n";

        
    //-------------------------------\\

        int Pribili12 = 0;
        int Pribili = 0;
        int numbers0 = 0;


        std::cout << "Введите прибыль за 12 месяцев:  ";
        std::cin >> Pribili12;

        Pribili = Pribili12 / 12;


        
        const int sizePr = 12;
        int arrPr[sizePr];

        for (int f = 0; f < 12; f++)
        {
         

            if (Pribili > 0) {
                arrPr[f] = (Pribili / 2) + rand() % Pribili;
            }
            else {
                arrPr[f] = 0;
            }



            numbers0 = arrPr[f];
        }

       
        for (int h = 0; h < sizePr; h++)
        {
            std::cout << arrPr[h] << " ";
        }
        std::cout << "\n";


        int startMonth = 0;
        int endMonth = 0;
        std::cout << "Введите начальный месяц диапазона: ";
        std::cin >> startMonth;
        std::cout << "Введите конечный месяц диапазона: ";
        std::cin >> endMonth;

        
        int startIndex = startMonth - 1;
        int endIndex = endMonth - 1;

        
        int maxProfit = arrPr[startIndex];
        int minProfit = arrPr[startIndex];
        int maxMonth = startMonth;
        int minMonth = startMonth;

        
        for (int i = startIndex; i <= endIndex; i++)
        {
            
            if (arrPr[i] > maxProfit)
            {
                maxProfit = arrPr[i];
                maxMonth = i + 1;
            }

            
            if (arrPr[i] < minProfit)
            {
                minProfit = arrPr[i];
                minMonth = i + 1;
            }
        }

        
        std::cout << "\nРезультаты анализа диапазона с " << startMonth << " по " << endMonth << " месяц\n";
        std::cout << "Месяц с максимальной прибылью: " << maxMonth << " (Прибыль: " << maxProfit << ")\n";
        std::cout << "Месяц с минимальной прибылью: " << minMonth << " (Прибыль: " << minProfit << ")\n";


        


    return 0;
   
}


