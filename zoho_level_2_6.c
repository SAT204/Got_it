/*
1. generate the 2d array with fibannoci ele in the sprial order.

input - 3 4
output - 00 01 01 02
         34 55 89 03
         21 13 08 05
*/

/*#include <stdio.h>
void sprial_function(int arr[], int n, int m)
{
    int ans_arr[n][m];
    int t = 0, b = n-1;
    int l = 0, r = m-1;
    int dir = 1, inc = 0;
    while(t<=b && l<=r)
    {
        if(dir == 1)
        {
            for(int i=l;i<=r;i++)
            {
                ans_arr[t][i] = arr[inc++];
            }
            t++;
            dir = 2;
        }
        else if(dir == 2)
        {
            for(int i=t;i<=b;i++)
            {
                ans_arr[i][r] = arr[inc++];
            }
            r--;
            dir = 3;
        }
        else if(dir == 3)
        {
            for(int i=r;i>=l;i--)
            {
                ans_arr[b][i] = arr[inc++];
            }
            b--;
            dir = 4;
        }
        else if(dir == 4)
        {
            for(int i=b;i>=t;i--)
            {
                ans_arr[i][l] = arr[inc++];
            }
            l++;
            dir = 1;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ", ans_arr[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int n, m, n1 = 0, n2 = 1;
    scanf("%d %d", &n, &m);
    int arr[n*m];
    arr[0] = n1;
    arr[1] = n2;
    int inc = 2, ans = 0;
    for(int i=0;i<n*m-2;i++)
    {
        ans = n1 + n2;
        n1 = n2;
        n2 = ans;
        arr[inc++] = ans;
    }
    sprial_function(arr, n, m);
    return 0;
}*/

/*
2. anagram
input - str_1 - silent
        str_2 - lisent
output - given word is anagram.
*/

/*#include <stdio.h>
#include <string.h>
int main()
{
    char str_1[100];
    char str_2[100];
    scanf("%s", str_1);
    scanf(" %s", str_2);
    int hash[26] = {0}, temp_1 = 0, temp_2 = 0, flag = 0;
    if(strlen(str_1) != strlen(str_2))
    {
        printf("Given word is not an anagram");
        return 0;
    }
    else
    {
        for(int i=0;i<strlen(str_1);i++)
        {
            temp_1 = str_1[i] - 'a';
            temp_2 = str_1[i] - 'a';
            hash[temp_1] += 1;
            hash[temp_2] -= 1;
        }
        for(int i=0;i<26;i++)
        {
            if(hash[i] != 0)
            {
                printf("!Given word is not an anagram!");
                return 0;
            }
        }
    }
    printf("@Given word is an anagram!");
    return 0;
}*/

/*
3.  input n= 5, m = {1, 5};
    output = 2;
    input n= 4, m = {1, 2, 3, 4};
    output = 0;
    find the max of min distance to travel to the nearest bus stop.
*/

/*#include <stdio.h>
#include <limits.h>
int main()
{
    int n, m;
    scanf("%d", &n);
    scanf("%d", &m);
    int arr[m], ans = INT_MAX, output = INT_MIN, temp;
    for(int i=0;i<m;i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i=1;i<=n;i++)
    {
        ans = INT_MAX;
        temp = 0;
        for(int j=0;j<m;j++)
        {
            temp = i - arr[j];
            temp = (temp < 0) ? temp *= -1 : temp;
            if(temp < ans)
                ans = temp;
        }
        if(ans > output)
            output = ans;

    }
    printf("%d ", output);
    return 0;
}*/

#include <stdio.h>
void matrix(int n, int player, int key, int villan_count, int villan_arr[], int brick_count, int brick_arr[], int direction)
{
    int inc = 0, jnc = 0, p_i, p_j;
    p_i = player / 10;
    p_j = player % 10;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<villan_count;k++)
            {
                if(i == villan_arr[k]/10 && j == villan_arr[k]%10)
                    printf("v");
            }
            for(int l=0;l<brick_count;l++)
            {
                if(i == brick_arr[l]/10 && j == brick_arr[l]%10)
                    printf("b");
            }
            if(i == 0 && j == 0)
                printf("  ");
            else if(i == 0 && j != 0)
                printf("%c ", 65 + inc++);
            else if(i != 0 && j == 0)
                printf("%c ", 65 + jnc++);
            else if(i == 1 && j != 0)
                printf("* ");
            else if(i == n-1 && j != 0)
                printf("* ");
            else if(i != 0 && j == 1)
                printf("* ");
            else if(i != 0 && j == n-1)
                printf("* ");
            else if(i % 2 != 0 && j % 2 != 0)
                printf("* ");
            else if(i == p_i && j == p_j)
                printf("p ");
            else if(i == key/10 && j == key%10)
                printf("k ");
            else
                printf("  ");
        }
        printf("\n");
    }
    printf("\n");
    printf("1 - /\\, 2 -/\\> , 3 - >, 4 - >\\/, 5 - \\/, 6 -\\/< , 7 - <, 8 - </\\ : ");
    scanf("%d", &direction);
    if(direction != 0)
    {
        switch(direction)
        {
            case 1:
                p_i--;
                break;
            case 2:
                p_i--;
                p_j++;
                break;
            case 3:
                p_j++;
                break;
            case 4:
                p_i++;
                p_j++;
                break;
            case 5:
                p_i++;
                break;
            case 6:
                p_i++;
                p_j--;
                break;
            case 7:
                p_j--;
                break;
            case 8:
                p_i--;
                p_j--;
                break;
            default:
                break;
        }
        player = p_i * 10 + p_j;
        matrix(n, player, key, villan_count, villan_arr, brick_count, brick_arr, direction);
    }

}

int main()
{
    int n, player, key, villan_count, brick_count, direction = 0;
    //int n = 20, player = 44, key = 88;
    scanf("%d", &n);
    scanf("%d", &player);
    scanf("%d", &key);
    scanf("%d", &villan_count);
    int villan_arr[villan_count];
    for(int i=0;i<villan_count;i++)
    {
        scanf("%d", &villan_arr[i]);
    }
    scanf("%d", &brick_count);
    int brick_arr[brick_count];
    for(int i=0;i<brick_count;i++)
    {
        scanf("%d", &brick_arr[i]);
    }
    matrix(n, player, key, villan_count, villan_arr, brick_count, brick_arr, direction);
    return 0;
}

