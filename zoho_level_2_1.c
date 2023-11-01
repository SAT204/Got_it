/*
1. input : 5
     output:  1
              2 6
              3 7 10
              4 8 11 13
              5 9 12 14 15
*/
/*#include<stdio.h>
int main(){
    int n, k;
    scanf("%d", &n);
    k = 1;
    for(int i=1;i<=n;i++)
    {
        int current_digit = k;
        for(int j=1;j<=i;j++)
        {
            printf("%d ", current_digit);
            current_digit += n-j;
        }
        printf("\n");
        k++;
    }
    return 0;
}*/


/*
2. roambus
input : 5
output:     01 02 03 04 05
           10 09 08 07 06
          11 12 13 14 15
         20 19 18 17 16
        21 22 23 24 25
like a snake if u focus on num.

*/
/*#include <stdio.h>
int main(){
    int n, val;
    scanf("%d",&n);
    val = 1;
    for(int i=1;i<=n;i++)
    {
        for(int space=n-1;space>=i;space--)
        {
            printf(" ");
        }
        for(int j=1;j<=n;j++)
        {
            printf("%d ", val);
            if(j != n)
            {
                if(i%2 == 0)
                {
                    val--;
                }
                else
                {
                    val++;
                }
            }
        }
        printf("\n");
        val += n;
    }
    return 0;
}*/
// same sum without using if condition
/*#include <stdio.h>
void space(int n, int i){
    for(int space=n-1;space>=i;space--)
        {
            printf(" ");
        }
}
int main(){
    int n, val;
    scanf("%d",&n);
    val = 0;
    int dup_i = 1;
    for(int i=1;i<=n/2;i++)
    {
        space(n, dup_i);
        dup_i++;
        for(int j=1;j<=n;j++)
        {
            val++;
            printf("%d ", val);
        }
        printf("\n");
        val += n;
        space(n, dup_i);
        dup_i++;
        for(int j=1;j<=n;j++)
        {
            printf("%d ", val);
            val--;
        }
        val += n;
        printf("\n");
    }
    return 0;
}*/

/*
3. input : '1235+*-'
    output : 4
*/
/*#include <stdio.h>
#include <strings.h>
int main(){
    char str[100];
    scanf("%s", str);
    int arr[strlen(str)];
    int re_arange[strlen(str)];

    // Subtracting with '0' to get an integer value
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i] >= 48 && str[i] <= 57)
        {
            arr[i] = str[i] - '0';
        }
        else
        {
            arr[i] = str[i];
        }
    }

    // rearranging the previous array into equating array
    int opra = strlen(str)/2+1;
    int inc = 0;
    for(int i=0;i<strlen(str);i += 2)
    {
       re_arange[i] = arr[inc++];
       if(i+1 != strlen(str))
       {
           re_arange[i+1] = arr[opra++];
       }
    }

    // equating the array
    int ans = re_arange[0];
    for(int i=1;i<strlen(str);i += 2)
    {
        switch(re_arange[i])
        {
            case 43:
                ans = ans + re_arange[i+1];
                break;
            case 45:
                ans = ans - re_arange[i+1];
                break;
            case 42:
                ans = ans * re_arange[i+1];
                break;
            case 47:
                ans = ans / re_arange[i+1];
                break;

        }
    }

    // Displaying the ans/output
    printf("\n%d", ans);
    return 0;
}*/

/*
4. to print the closest value for an each element in an array which has to be present in an array

input  : 5
         1 3 2 4 5
output : 2 4 4 5 -1
 in frdw direction only
*/
/*#include <stdio.h>
#include <limits.h>
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
        int min = INT_MAX;
        int ans, ind, flag=0;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i] < arr[j])
            {
                flag = 1;
                ans = arr[j] - arr[i];
                if(ans < min)
                {
                    min = ans;
                    ind = j;
                }
            }
        }
        if(flag == 1)
        {
            arr[i] = arr[ind];
        }
        else
        {
            arr[i] = -1;
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}*/


/*
5. biggest possible sub array which includes the equal number of zeros and ones in it
 input : 5
         1 0 0 1 0
output : 1 0 0 1
         0 To 3
*/

/*#include <stdio.h>
#include <limits.h>
void print_array(int *arr, int start, int end)
{
    for(int i=start;i<=end;i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("%d To %d", start, end);
}

int main(){
    int n, count_one, count_zero, min = INT_MIN, start, end;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            count_one = 0;
            count_zero = 0;
            for(int k=i;k<=j;k++)
            {
                if(arr[k] == 1)
                {
                    count_one++;
                }
                else if(arr[k] == 0)
                {
                    count_zero++;
                }
            }
            if(count_one == count_zero)
            {
                int dif = j - i;
                if(dif > min)
                {
                    min = dif;
                    start = i;
                    end = j;
                }

            }
        }
    }
    print_array(arr, start, end);
    return 0;
}*/





