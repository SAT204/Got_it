// 1.  k1 > k2 < k3 > k4 < k5 > k6.....
/*#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    // sorting in accesnding order
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    // re_arranging for the condition
    int ans[n], inc = 0;
    for(int i=0,j=n-1;i<n;i++,j--)
    {
        if(inc >= n)
        {
            break;
        }
        ans[inc++] = arr[i];
        ans[inc++] = arr[j];
    }
    // displaying the array
    for(int i=0;i<n;i++)
    {
        printf("%d ", ans[i]);
    }
    return 0;
}*/

// 2. find the nth value of series numbers which only has 4 and 7
// example series 4, 7, 44, 47, 74, 77, 444, 447, 474, 477
/*#include <stdio.h>
#include <limits.h>
int main(){
    int n, max = INT_MAX;
    int cpy_1,cpy_2, rem_1, rem_2;
    int digit_count = 0, match_count = 0, true_count = 0;
    scanf("%d", &n);
    for(int i=1;i<max;i++)
    {
        cpy_1 = i;
        cpy_2 = i;
        digit_count = 0;
        match_count = 0;
        while(cpy_1)
        {
            rem_1 = cpy_1 % 10;
            digit_count++;
            cpy_1 /= 10;
        }
        while(cpy_2)
        {
            rem_2 = cpy_2 % 10;
            if(rem_2 == 4 || rem_2 == 7)
            {
                match_count++;
            }
            cpy_2 /= 10;
        }
        if(digit_count == match_count)
        {
            true_count++;
            if(true_count == n)
            {
                printf("%d", i);
                return 0;
            }
        }
    }
    return 0;
}*/

// 3. find the biggest palindrome in an string
/*#include <stdio.h>
#include <string.h>
int main(){
    int inc = 0, pair = 0, un_pair = 0, pal_len = 0;
    char str[100], cpy[100], ch_arr[100];
    scanf("%s", str);
    strcpy(cpy, str);
    //finding the pair of char and counting the pairs and un_pair char.
    for(int i=0;i<strlen(cpy);i++)
    {
        for(int j=i+1;j<strlen(cpy);j++)
        {
            if(cpy[i] == cpy[j] && cpy[i] != '.')
            {
                ch_arr[inc++] = cpy[j];
                cpy[i] = '.';
                cpy[j] = '.';
                pair++;
                break;
            }
        }
    }
    // if there is no pair means then there is no possible palindrome
    if(!pair)
    {
        printf("There is no palindrome in this string");
        return 0;
    }

    printf("Pair - %d\n", pair);
    un_pair = strlen(cpy) - pair*2;
    printf("Un_pair - %d\n", un_pair);


    if(un_pair)
    {
        pal_len = (pair*2)+1;
        //finding the first un_pair char for the biggest palindrome
        for(int i=0;i<strlen(cpy);i++)
        {
            if(cpy[i] != '.')
            {
                ch_arr[inc++] = cpy[i];
                break;
            }
        }
        // inserting and reversing the paired char to print the biggest palindrome
        for(int i=inc-2,j=inc;j<pal_len;i--,j++)
        {
            ch_arr[j] = ch_arr[i];
        }
    }
    else
    {
        pal_len = pair*2;
        // inserting and reversing the paired char to print the biggest palindrome
        for(int i=inc-1,j=inc;j<pal_len;i--,j++)
        {
            ch_arr[j] = ch_arr[i];
        }
    }
    printf("Therefore the biggest possible palindrome length is - %d\n", pal_len);
    // printing and displaying the biggest palindrome
    for(int i=0;i<pal_len;i++)
    {
        printf("%c", ch_arr[i]);
    }
    return 0;
}*/

//4. C Program to Delete All Repeated Words in String

/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
	char str[100], word[100], twoD[10][30];
	int i = 0, j = 0, k = 0, len1 = 0, len2 = 0, l = 0;

	printf ("Enter the string\n");
	scanf("%[^\n]s", str);

	// let us convert the string into 2D array
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			twoD[k][j] = '\0';
			k++;
			j = 0;
		}
		else
		{
			twoD[k][j] = str[i];
			j++;
		}
	}

	twoD[k][j] = '\0';

	j = 0;
	for (i = 0; i < k; i++)
	{
		for (l = 1; l < k + 1; l++)
		{
			if (twoD[l][j] == '\0' || l == i)
			{
				continue;
			}

			if (strcmp (twoD[i], twoD[l]) == 0)
            {
				twoD[l][j] = '\0';
			}
		}
	}

	j = 0;

	for (i = 0; i <= k; i++)
	{
		//if (twoD[i][j] == '\0')
			//continue;
		//else
			printf ("@%s ", twoD[i]);
			printf ("!\n");
	}



	return 0;
}*/


/*
5. print all the permutatioin of an word
input : abc
output : abc
         bca
         cab
         cba
         bac
         acb
*/
/*#include <stdio.h>
#include <strings.h>

void print(char *str, int start, int end, int len, int count)
{
    for(int i=start;i<=end;i++)
    {
        if(i >= len)
            printf("%c", str[i % len]);
        else
            printf("%c", str[i]);
    }
    printf(" - %d \n", count);
}

int main(){
    char str[100];
    scanf("%s", str);
    int len = strlen(str), fact = 1, j, count = 1;
    for(int i=2;i<=len;i++)
    {
        fact *= i;
    }
    printf("%d\n", fact);
    for(int i = 0;i<fact/2;i++)
    {
        j = i+len-1;
        print(str, i, j, len, count);
        count++;
    }
    for(int i = 0;i<fact/2;i++)
    {
        j = i+len-1;
        print(strrev(str), i, j, len, count);
        count++;
    }

    return 0;
}*/
