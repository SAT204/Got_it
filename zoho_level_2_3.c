/*
1. repetition of string

    input1 - occurrence
    output1 - o1c3u1r2e2n1

    input2 - onechar
    output2 - o1n1e1c1h1a1r1

    input3 - pokemon
    output3 - p1o2k1e1m1n1

*/
/*#include <stdio.h>
#include <string.h>
int main()
{
    int hash[300] = {0};
    char str[100];
    scanf("%s", str);
    for(int i=0;i<strlen(str);i++)
    {
        hash[str[i]] += 1;
    }
    for(int i=0;i<strlen(str);i++)
    {
        if(hash[str[i]] >= 1)
        {
            printf("%c%d", str[i], hash[str[i]]);
        }
        hash[str[i]] = 0;
    }
    return 0;
}*/

/*#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], str2[100];
    scanf("%s", str);
    int inc = 0, equal_count = 1, notequal_count = 0;
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i] != '!')
        {
            for(int j=i+1;j<strlen(str);j++)
            {
                if(str[i] == str[j])
                {
                    str[j] = '!';
                    equal_count++;
                }
            }
            str2[inc++] = str[i];
            if(equal_count > 1)
            {
                str2[inc++] = equal_count + '0';
            }
            else
            {
                str2[inc++] = '1';
            }
            equal_count = 1;
        }
    }
    str2[inc] = '\0';
    printf("%s\n", str2);
    //printf("%s", str);
    return 0;
}*/

/*
2. array rotation by k times in optimized, shrink as much as possible.

    input  - 7
             1 2 3 4 5 6 7
             k = 3
    output - 5 6 7 1 2 3 4

*/

/*#include <stdio.h>

void cyclicRotatebyOne(int arr[], int n)
{
    int temp = arr[n-1];
    for (int i = n-1;i >= 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;
}
//void cyclicRotatebyOne(int arr[], int n)
//{
    //int temp = arr[0];
    //for (int i = 0;i < n; i++)
    //{
        //arr[i] = arr[i + 1];
    //}
    //arr[n-1] = temp;
//}
int main()
{
    int arr[] = { 10, 20, 30, 40, 50, 60, 70};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    for (int i = 0; i < k; i++)
        cyclicRotatebyOne(arr, n);

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}*/

/*#include <stdio.h>

int main()
{
    int n, k, inc=0;
    scanf("%d", &n);
    int arr[n], ans[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("enter the value of k : ");
    scanf("%d", &k);
    int start = n - k;
    int end = start + n-1;
    for(int i=start;i<=end;i++)
    {
        if(i>=n)
        {
            ans[inc++] = arr[i%n];
        }
        else
        {
            ans[inc++] = arr[i];
        }
    }
    printf("\n");
    for(int i=0;i<inc;i++)
    {
        printf("%d ", ans[i]);
    }
    return 0;
}*/

/*
3. moving 0s to the right corner in array in optimized, shrink as much as possible.

    input  - 5
             0 1 0 5 6
    output - 1 5 6 0 0

*/

/*#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i] == 0 && arr[j] != 0)
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                break;
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}*/

/*
4. user will give the total number of steps that he wanted to climb, and he can only climb in like a 1 steps, 2 steps
   in how many way he can climb the total number of steps

   fibonacci series

   input1 - n = 2
   output1 - 2

   input2 - n = 3
   output2 - 3

   input3 - n = 4
   output3 - 5

   input4 - n = 6
   output - 13
*/

/*#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int num_1 = 0, num_2 = 1, ans;
    for(int i=1;i<=n;i++)
    {
        ans = num_1 + num_2;
        num_1 = num_2;
        num_2 = ans;
    }
    printf("%d", ans);
    return 0;
}*/
