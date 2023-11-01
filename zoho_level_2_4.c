/*
1. print the distinct num in array
    sample_1
        input = 5
                1 2 3 4 5
                3
                4 5 7

       output = 1 2
                7
    sample_2
        input = 5
                10 20 30 40 50
                3
                5 15 25

       output = 10 20 30 40 50
                5 15 25

*/
/*#include <stdio.h>
void processing(int start, int end, int arr[], int indi)
{
    for(int a=start;a<end;a++)
    {
        if(indi)
        {
            arr[a] = arr[a+1];
        }
        else
        {
            printf("%d ", arr[a]);
        }
    }
    if(!indi)
    {
        printf("\n");
    }
}

int main(){
    int n,m,flag=0;
    scanf("%d", &n);
    int arr_1[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr_1[i]);
    }
    scanf("%d", &m);
    int arr_2[m];
    for(int i=0;i<m;i++)
    {
        scanf("%d", &arr_2[i]);
    }

    for(int i=0;i<n;i++)
    {
        flag = 0;
        for(int j=0;j<m;j++)
        {
            if(arr_1[i] == arr_2[j])
            {
                processing(j, m, arr_2, 1);
                m--;
                flag = 1;
            }
        }
        if(flag == 1)
        {
            processing(i, n, arr_1, 1);
            n--;
            i -= 2;
        }
    }
    processing(0, n, arr_1, 0);
    processing(0, m, arr_2, 0);
    return 0;
}*/

/*
2. Find the largest prime number in an array

sample_1 :
    input - 5
            6 3 11 9 8
    output - 11
*/
/*#include <stdio.h>
#include <math.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    int flag = 0, temp = 0, ans = INT_MIN;
    for(int i=0;i<n;i++)
    {
        flag = 0;
        int limit = sqrt(arr[i]);
        for(int j=2;j<=limit;j++)
        {
            if(arr[i] % j == 0)
            {
                flag = 1;
            }
        }
        if(flag == 0)
        {
            temp = arr[i];
            if(temp > ans)
            {
                ans = temp;
            }
        }
    }
    printf("%d ", ans);
    return 0;
}*/

/*
3. Find the closest number in an array for a m input
    sample_1 :
        input - 5
                10 20 15 25 30
                m - 17
        output - 15
*/
/*#include <stdio.h>
#include <limits.h>
int main()
{
    int n, m;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &m);
    int temp, ans = INT_MAX, ind=0;
    for(int i=0;i<n;i++)
    {
        temp = arr[i] > m ? arr[i] - m : m - arr[i];
        if(temp < ans)
        {
            ans = temp;
            ind = i;
        }
    }
    printf("%d", arr[ind]);
    return 0;
}*/

