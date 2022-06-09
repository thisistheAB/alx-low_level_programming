#include <stdbool.h>
#include "main.h"

/**
 * _isalpha - This is the main function, FUCK BETTY!!!!!!!!
 *@c: THE ONE THING I TRULY HATE IN THIS WORLD IS BETTY!!!!
 *
 * Return: This is bullshit
 */
void jack_bauer(void)
{

int firstDigitHour;
int secondDigitHour;
int firstDigitMinute;
int secondDigitMinute;

bool totalHour = true;
bool totalMinute = true;

    while (totalHour){

        firstDigitHour = 0;

        while (firstDigitHour < 10){

            secondDigitHour = 0;

            while (secondDigitHour < 10){

                if(firstDigitHour == 2 && secondDigitHour == 4) {firstDigitHour = 10; totalHour = false; break;}

                while (totalMinute) {

                    firstDigitMinute = 0;

                    while (firstDigitMinute < 10){

                        secondDigitMinute = 0;

                        while (secondDigitMinute < 10){

                            if(firstDigitMinute == 6 && secondDigitMinute == 0) {firstDigitMinute = 10; totalMinute = false; break;}

                            _putchar('0' + firstDigitHour);
                            _putchar('0' + secondDigitHour);

                            _putchar(':');

                            _putchar('0' + firstDigitMinute);
                            _putchar('0' + secondDigitMinute);

                            _putchar('\n');

                            secondDigitMinute++;

                        }

                        firstDigitMinute++;

                    }

                }

                totalMinute = true;
                secondDigitHour++;

            }

            firstDigitHour++;

        }

    }

}
