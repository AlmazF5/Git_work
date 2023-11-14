#include <stdio.h>            // подключаем заголовочный файл stdio.h
#include <stdlib.h>
//int main()                      // определяем функцию main
//{
//    int numbers[] = { 10, 12, 13, 54, 43 };
//    for (int i = 0; i < 5; i++)
//    {
//        printf("numbers[%d] = %d \n", i, numbers[i]);
//    }
//    long int simbol[] = { 21,313,41,12,5 };
//    int d = 0;
//    while (d !=-1)
//    {
//        if (d <= sizeof(d))
//        {
//            printf("simbol[%d]= %d \n", d, simbol[d]);
//            d = d + 1;
//        }
//        else d = -1;
//    }
//    system("pause");
//    return 0;                  // выходим из функции
//}
void main()
{
	int x = 1, y = 20, t;
	x++;
	y--;
	x *= y;
	t = x + y;
	printf("Result %d + %d = %d\n", x, y, t);
	system("pause");
//	return 0;
}