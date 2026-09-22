#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool checkNumber (char input [])
{
    int i;
    int count = 0;
    for (i = 0; input [i] != '\0'; i++)
    {
        if (input[i] >= '0' && input[i] <= '9')
        {
            count++;
        }
    }

    if (count >= 3)
    {
        return true;
    }

    return false;

}

bool checkEspecialChar (char input [])
{
    char specialChars [] = "!@#$%¨&*";
    int j;
    int x;
    for (j = 0; input [j] != '\0'; j++)
    {
        for (x = 0; specialChars [x] != '\0'; x++)
        {
            if (input [j] == specialChars [x])
            return true;
        }
        
    }
    //fora do loop
    return false;

}


bool checkNormalChar (char input [])
{

    //tem o problema de ser case sensitive
    //pra ja vou deixar assim
    //proximo commit eu aprimoro
    char normalChars [] = "abcdefghijklmnopqrstuv";
    int l;
    int p;
    for (l = 0; input [l] != '\0'; l++)
    {
        for (p = 0; normalChars [p] != '\0'; p++)
        {
            if (input [l] == normalChars [p])
            return true;
        }
    }

    return false;

}

//acho que pode chamar de funcao "god", é bom ter uma dessa
//pra n ficar poluindo o codigo da main fazendo varias checagem uma por uma
bool checkPassword (char input [])
{
    return checkNumber (input) && checkNormalChar (input) && checkEspecialChar (input);
}



int main () {

printf ("Login System\n");
printf ("Please input you user: ");
char userName [30];
scanf ("%29s", &userName);
printf ("Please input your password\n");
//é meio idiota um sistema pedir apenas 1 letra e 3 numeros, mas para ja deixa assim...
printf ("Note: Your pass must cointain at least: 1 char, 3 numbers, 1 special char\n");
char userPassword [30];
scanf ("%29s", &userPassword);
    if (checkPassword (userPassword))
    {
        printf ("Correct!");
    }

    else {
        printf ("Wrong, the pass does not contain a Number.");
    }










}