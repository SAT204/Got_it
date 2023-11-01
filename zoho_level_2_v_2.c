#include <stdio.h>

int main()
{
    int n = 5,m = 5;
    //scanf("%d %d", &n, &m);
    int arr[5][5] = {{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25},{26,27,28,29,30},{31,32,33,34,35}};
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    int pos_i = 2;
    int pos_j = 3;
    int t = m - pos_j - 1;
    for(int i=pos_i;i<n;i++)
    {
        for(int j=pos_j;j<m;j++)
        {
            if(i == pos_i)
                printf("%d ", arr[i][j]);
            else if(i+j == n-1+pos_i)
                printf("%d ", arr[i][j]);
            else if(i == t+pos_i)
                printf("%d ", arr[i][j]);
        }
    }
    return 0;
}


/*#include <stdio.h>
#include <string.h>

#define n 20
char stack[n];
int top = -1;

void push(char ch)
{
    if(top == n-1)
        printf("Overflow condition");
    else
    {
        top++;
        stack[top] = ch;
    }
}

char peak()
{
    return stack[top];
}

void pop()
{
    if(top == -1)
        printf("Underflow condition");
    else
        top--;
}

int main()
{
    char str[100], temp;
    scanf("%[^\n]s", str);
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i] == '[' || str[i] == '(' || str[i] == '{')
        {
            push(str[i]);
        }
        else if(str[i] == ']' || str[i] == ')' || str[i] == '}')
        {
            temp = peak();
            if((temp == '[' && str[i] == ']') || (temp == '(' && str[i] == ')') || (temp == '{' && str[i] == '}'))
            {
                pop();
            }
            else
            {
                printf("!INVALID expression");
                return 0;
            }
        }
        else if((str[i] == 'o' && str[i+1] == 'r') || (str[i] == 'a' && str[i+1] == 'n' && str[i+2] == 'd'))
        {
            if(str[i] == 'o')
            {
                if((str[i-1] >= 'a' && str[i-1] <= 'z') && (str[i+2] >= 'a' && str[i+2] <= 'z'))
                {
                    i += 2;
                }
                else
                {
                    printf("@INVALID expression");
                    return 0;
                }
            }
            else
            {
                if((str[i-1] >= 'a' && str[i-1] <= 'z') && (str[i+3] >= 'a' && str[i+3] <= 'z'))
                {
                    i += 3;
                }
                else
                {
                    printf("#INVALID expression");
                    return 0;
                }
            }
        }
    }
    if(top == -1)
        printf("$VALID expression");
    else
        printf("^INVALID expression");
    return 0;
}*/


/*#include <stdio.h>

void process(char arr_ones[][10], char arr_tense[][10], int rev, int num_count, int n)
{       int temp;
        while(rev)
        {
            int rem = rev % 10;
            switch(num_count)
            {
                case 1:
                    printf("%s ", arr_ones[rem]);
                    num_count--;
                    break;
                case 2:
                    temp = n % 100;
                    rem = (rem == 1) ? temp : rem;
                    (rem != 0) ? printf("%s ", arr_tense[rem]) : NULL;
                    num_count = (rem == temp) ? 0 : --num_count;
                    break;
                case 3:
                    printf("%s hundred and ", arr_ones[rem]);
                    num_count--;
                    break;
                default:
                    break;
            }
            rev = rev / 10;
        }
    return 0;
}

int main()
{
    int n, rev=0, num_count = 0;
    char arr_ones[20][10] = {"zero","one","two","three","four","five","six","seven","eight","nine","ten"};
    char arr_tense[20][10] = {"zero","ten","twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninety","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
    scanf("%d", &n);
    int rem = 0, dup = n;
    while(n)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n/10;
        num_count++;
    }
    process(arr_ones, arr_tense, rev, num_count, dup);
    return 0;
}*/
