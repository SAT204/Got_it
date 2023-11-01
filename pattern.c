/*#include <stdio.h>
#include <string.h>

int main()
{
    int n, i=0;
    scanf("%d", &n);
    char str[50];
    while (n > 0)
    {
        int rem = n % 26;
        if (rem == 0)
        {
            str[i++] = 'Z';
            n = (n / 26) - 1;
        }
        else
        {
            str[i++] = (rem - 1) + 'A';
            n = n / 26;
        }
    }
    str[i] = '\0';
    printf("%s\n", strrev(str));
    printf("%c", 1 + 'A');
    return 0;
}*/

#include <stdio.h>
#include <string.h>
int main()
{
    char str[50];
    scanf("%s", str);
    int result = 0;
    for(int i=0;i<strlen(str);i++)
    {
        result = result * 26 + (str[i] - 'A' + 1);
    }
    printf("%d", result);
    return 0;
}




/*#include <stdio.h>
#include <math.h>
int main()
{
    int n, rem, rev=0;
    scanf("%d", &n);
    int cpy_n = n;
    while(cpy_n)
    {
        rem = cpy_n % 10;
        rev = rev * 10 + rem;
        cpy_n /= 10;
    }
    while(n != rev)
    {
        cpy_n = n + rev;
        n = cpy_n;
        rev = 0;
        while(cpy_n)
        {
            rem = cpy_n % 10;
            rev = rev * 10 + rem;
            cpy_n /= 10;
        }
    }
    printf("%d", n);
    return 0;
}*/



/*#include <stdio.h>
#include <limits.h>
int main()
{
    int n, k, j, min = INT_MIN;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);

    for(int i=0;i<=n-k;i++)
    {
        j = i+k-1;
        for(int start=i;start<=j;start++)
        {
            int var = arr[start];
            if(var > min)
            {
                min = var;
            }
        }
        printf("%d ", min);
        min = INT_MIN;
    }
    return 0;
}*/

// zoho qs 19
/*#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int dup_n = n, cur_num = 1, cur_upd = 1;
    for(int i=0;i<n;i++)
    {
        cur_num = cur_upd;
        for(int j=0;j<dup_n;j++)
        {
            printf("%d ", cur_num);
            cur_num += n - j;
        }
        printf("\n");
        dup_n--;
        cur_upd++;
    }
    return 0;
}*

/*#include <stdio.h>
int main(){
    int input, cpy_input, pre, post;
    scanf("%d", &input);
    cpy_input = input;
    int t = 2*input-1, ind = 1;

    for(int i=1;i<=input;i++)
    {
        pre = input;
        for(int j=1;j<2*input;j++)
        {
            if(j >= ind && j <= t)
            {
                printf("%d ", cpy_input);
                post = cpy_input;
            }
            else
            {
                if(j<=i)
                {
                    printf("%d ", pre--);
                }
                else
                {
                    printf("%d ", ++post);
                }
            }
        }
        cpy_input--;
        t--;
        ind++;
        printf("\n");
    }
    int s_pre, s_post, s_cpy_input = 2, s_t = input+1, s_ind = input-1;
    for(int i=input+1;i<2*input;i++)
    {
        s_pre = input;
        for(int j=1;j<2*input;j++)
        {
            if(j >= s_ind && j <= s_t)
            {
                printf("%d ", s_cpy_input);
                s_post = s_cpy_input;
            }
            else
            {
                if(i>=j)
                {
                    printf("%d ", s_pre--);
                }
                else
                {
                    printf("%d ", ++s_post);
                }
            }
        }
        s_cpy_input++;
        s_t++;
        s_ind--;
        printf("\n");
    }
    return 0;
}
*/
