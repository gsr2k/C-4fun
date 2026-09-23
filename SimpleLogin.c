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
{   //acabou perdendo o sentido esa funcao
    //nesse contexto de programa simples
    //mas deixa ai
    //tem o problema de ser case sensitive
    int p;
    for (p = 0; input[p] != '\0'; p++)
    {
        if ((input [p] >= 'a' && input [p] <= 'z') ||
            (input [p] >= 'A' && input [p] <= 'Z'))
        {
            return true;
        }

    }

    return false;

}

bool checkLenght (char input [])
{
    if (strlen(input) <= 10 && strlen(input) > 3)
    {
        return true;
    }
    
    return false;
}

bool containEmpitySpace (char input [])
{
    if (strchr (input, ' '))
    {
        return true;
    }

    return false;;
}

//acho que pode chamar de funcao "god", é bom ter uma dessa
//pra n ficar poluindo o codigo da main fazendo varias checagem uma por uma
bool checkPassword (char input [])
{
    return checkNumber (input) && checkNormalChar (input) && checkEspecialChar (input) && checkLenght (input) && containEmpitySpace (input);
}



int main () {

printf ("Login System\n");
printf ("========================\n");
//username
printf ("Note: do not put spaces\n");
printf ("========================\n");
printf ("Please input your username: ");
char userName [30];
scanf ("%29s", userName);
    //to do: improve conditional logic.....
    //if it falls on the contaEmpitySpace condition it should ask de user to put again
    //maybe reconstruct the logic by using switchs
    if (!containEmpitySpace (userName))
        {
            printf ("***Username accepted!***\n");
        }
        else
        {
            printf ("Don't put space!\n");
        }
//password
printf ("========================\n");
printf ("Please input your password\n");
printf ("Note: Your pass must cointain at least: \n");
printf ("- Minimun 3 characteres\n - Max 10 characteres\n - Minimun 3 numbers\n - Minimun 1 special char\n");
printf ("Input your pass: \n");
char userPassword [30];
scanf ("%29s", userPassword);
    if (checkPassword (userPassword))
    {
        printf ("Correct!");
    }

    else {
        printf ("Wrong, the pass does not match the minimal resources.");
    }



}