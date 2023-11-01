/*
1. input
     word         - hello
     guessed word - hlaaa
     output       - gy---

     word         - hello
     guessed word - helll
     output       - gggg-
   Explanation:
	1st output la h and h same letter same index la vantha - green light(g)
	2nd l vera index la iruku so yellow light(y)
	3rd a antha word laye illa so -
*/

/*
2. input : AB
   output: 28

   input : AAC
   output: 705

   excel sheet la A - 1...Z - 26 atha base pani
   AAC = 26
*/
/*#include <stdio.h>
#include <string.h>
int main()
{
    char ch[10];
    scanf("%s", ch);
    int result = 0;
    for(int i=0;i<strlen(ch);i++)
    {
        result = result * 26 + (ch[i] - 'A' + 1);
    }
    printf("%d ", result);
    return 0;
}*/

/*
3.input
    supermaajan
 	man
    ouput: maajan
*/

/*
4. check the countinue numbers and print the missed one.
    input: 3
          1,2,3
    output: 0

    input : 5
            1 3 1 2 4
    output : 5
*/
