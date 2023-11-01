/*
1. find the (i,j) of 2d array.
    input - poet
    input - p u u r
            w o w m
            g h e l
            q w a t

   output - (0,0)
            (1,1)
            (2,2)
            (3,3)
*/

/*#include <stdio.h>
#include <string.h>
int main()
{
    int r, c, else_flag = 0, inc = 0;
    char str[100];

    printf("Enter the word to find : \n");
    scanf("%s", str);

    int len = strlen(str);

    printf("Enter the number of rows and colunms : \n");
    scanf("%d %d", &r, &c);

    char arr[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf(" %c", &arr[i][j]);
        }
    }
    int dir = 0, equal_flag = 0, bound_ltr = c-1, bound_ttb = r-1, bound_rtl = 0, bound_btt = 0;
    if(r >= len || c >= len)
    {
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(str[inc] == arr[i][j])
                {
                    // direction left to right
                    int len_ltr = len-1;
                    if(dir == 0 && len-1 <= bound_ltr-j)
                    {
                        for(int a=j;a<=len_ltr+j;a++)
                        {
                            if(str[inc] == arr[i][a])
                            {
                                equal_flag++;
                                inc++;
                            }
                            else
                            {
                                equal_flag = 0;
                                inc = 0;
                                dir = 1;
                                break;
                            }
                        }
                        if(equal_flag == len)
                        {
                            for(int p=j;p<=len_ltr+j;p++)
                            {
                                printf("(%d, %d) -> %c \n", i, p, arr[i][p]);
                            }
                            return 0;
                        }
                    }
                    else
                    {
                        dir = 1;
                    }

                    // direction top to bottom
                    int len_ttb = len-1;
                    if(dir == 1 && len-1 <= bound_ttb-i)
                    {
                        for(int a=i;a<=len_ttb+i;a++)
                        {
                            if(str[inc] == arr[a][j])
                            {
                                equal_flag++;
                                inc++;
                            }
                            else
                            {
                                equal_flag = 0;
                                inc = 0;
                                dir = 2;
                                break;
                            }
                        }
                        if(equal_flag == len)
                        {
                            for(int p=i;p<=len_ttb+i;p++)
                            {
                                printf("(%d, %d) -> %c \n", p, j, arr[p][j]);
                            }
                            return 0;
                        }
                    }
                    else
                    {
                        dir = 2;
                    }

                    // direction right to left
                    int len_rtl = len - 1;
                    if(dir == 2 && len-1 <= j-bound_rtl)
                    {
                        for(int a=j;a>=j-len_rtl;a--)
                        {
                            if(str[inc] == arr[i][a])
                            {
                                equal_flag++;
                                inc++;
                            }
                            else
                            {
                                equal_flag = 0;
                                inc = 0;
                                dir = 3;
                                break;
                            }
                        }
                        if(equal_flag == len)
                        {
                            for(int p=j;p>=j-len_rtl;p--)
                            {
                                printf("(%d, %d) -> %c \n", i, p, arr[i][p]);
                            }
                            return 0;
                        }
                    }
                    else
                    {
                        dir = 3;
                    }

                    // direction bottom to top
                    int len_btt = len-1;
                    if(dir == 3 && len-1 <= i-bound_btt)
                    {
                        for(int a=i;a>=i-len_btt;a--)
                        {
                            if(str[inc] == arr[a][j])
                            {
                                equal_flag++;
                                inc++;
                            }
                            else
                            {
                                equal_flag = 0;
                                inc = 0;
                                dir = 4;
                                break;
                            }
                        }
                        if(equal_flag == len)
                        {
                            for(int p=i;p>=i-len_btt;p--)
                            {
                                printf("(%d, %d) -> %c \n", p, j, arr[p][j]);
                            }
                            return 0;
                        }
                    }
                    else
                    {
                        dir = 4;
                    }

                    // has to develop an logic to the direction - 4 which is diagonal
                }
                else
                {
                    else_flag++;
                }
            }
            if(else_flag == r * c)
            {
                printf("Enter the valid word to find in the puzzle");
                return 0;
            }
            dir = 0;
        }
    }
    return 0;
}*/

/*
2. reverse a string excluding the spl char
    input - sathy@a#m(o(o^rth!y
   output - ythro@o#m(a(y^hta!s

*/
/*#include <stdio.h>
#include <string.h>

int main()
{
    char str_1[100];
    scanf("%s", str_1);

    for(int i=0,j=strlen(str_1);i<strlen(str_1)/2;i++,j--)
    {
        if((str_1[i] >= 97 && str_1[i] <= 122) && (str_1[j] >= 97 && str_1[j] <= 122))
        {
            char temp = str_1[i];
            str_1[i] = str_1[j];
            str_1[j] = temp;
        }
        else if(!(str_1[j] >= 97 && str_1[j] <= 122))
        {
            i = i-1;
        }
        else if(!(str_1[i] >= 97 && str_1[i] <= 122))
        {
            j = j+1;
        }
    }
    printf("%s", str_1);
    return 0;
}*/
/*
3. input - 3[a] 2[b3[cd]]
  output - aaa bcd bcd cd cd cd
*/
#include <stdio.h>
#include <string.h>

// Function to repeat a character 'c' 'n' times and print it
void repeatAndPrint(char c, int n) {
    for (int i = 0; i < n; i++) {
        putchar(c);
    }
}

// Function to decode the encoded string and print the result
void decodeString(char* s, int* index) {
    int i = *index;
    while (s[i] != '\0' && s[i] != ']') {
        if (s[i] >= '0' && s[i] <= '9') {
            int count = 0;
            while (s[i] >= '0' && s[i] <= '9') {
                count = count * 10 + (s[i] - '0');
                i++;
            }
            i++;  // Skip '['
            int start = i;
            while (s[i] != ']') {
                i++;
            }
            decodeString(s, &start);
            repeatAndPrint(s[start], count);
            i++;  // Skip ']'
        } else {
            putchar(s[i]);
            i++;
        }
    }
    *index = i;
}

int main() {
    char input[] = "3[a]2[b3[cd]]";
    int index = 0;
    decodeString(input, &index);
    putchar('\n');
    return 0;
}

/*
4. travers the 2d array in the sprial order
    input - 4 4
            1 2 3 4
            2 3 4 5
            3 4 5 6
            4 5 6 7
    output - 1 2 3 4 5 6 7 6 5 4 3 2 3 4 5 4
*/
/*#include <stdio.h>

void printing_th_array(int n, int m, int start, int end, int to_print, int arr[n][m], int dir, int indi)
{
    if(indi)
    {
        for(int i=start;i<=end;i++)
        {
            if(dir == 0)
            printf("%d ", arr[to_print][i]);

            else if(dir == 1)
            printf("%d ", arr[i][to_print]);

        }
    }
    else
    {
        for(int i=start;i>=end;i--)
        {
            if(dir == 2)
            printf("%d ", arr[to_print][i]);

            else if(dir == 3)
            printf("%d ", arr[i][to_print]);

        }
    }
}*/
/*int main(){
    int n,m;
    scanf("%d %d", &n, &m);
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int t=0, b=n-1, l=0, r=m-1;
    int dir = 0;
    while(t<=b && l<=r)
    {
        if(dir == 0)
        {
            printing_th_array(n, m, l, r, t, arr, dir, 1);*/
            /*for(int i=l;i<=r;i++)
            {
                printf("%d ", arr[t][i]);
            }*/
            /*t++;
            dir = 1;
        }
        else if(dir == 1)
        {
            printing_th_array(n, m, t, b, r, arr, dir, 1);*/
            /*for(int i=t;i<=b;i++)
            {
                printf("%d ", arr[i][r]);
            }*/
            /*r--;
            dir = 2;
        }
        else if(dir == 2)
        {
            printing_th_array(n, m, r, l, b, arr, dir, 0);*/
            /*for(int i=r;i>=l;i--)
            {
                printf("%d ", arr[b][i]);
            }*/
            /*b--;
            dir = 3;
        }
        else if(dir == 3)
        {
            printing_th_array(n, m, b, t, l, arr, dir, 0);*/
            /*for(int i=b;i>=t;i--)
            {
                printf("%d ", arr[i][l]);
            }*/
            /*l++;
            dir = 0;
        }
    }
    return 0;
}*/
