/*
1. merge a two array into one so that the unique ele should present and it has to be in the asecending order.

sample input - 5
               1 2 3 4 5
               5
               3 4 5 6 7

      output - 1 2 3 4 5 6 7

hint - hash map implementation
*/
/*#include <stdio.h>
#include <limits.h>
int main()
{
    int n, m, max = INT_MIN;
    scanf("%d", &n);
    int arr[n], hash_arr[100] = {0};
    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
        hash_arr[arr[i]] += 1;
        if(arr[i] > max)
            max = arr[i];
    }
    scanf("%d", &m);
    int brr[m];
    for(int i=0;i<m;i++)
    {
        scanf("%d", &brr[i]);
        hash_arr[brr[i]] += 1;
        if(brr[i] > max)
            max = brr[i];
    }
    for(int i=0;i<=max;i++)
    {
        if(hash_arr[i] >= 1)
            printf("%d ", i);
    }
    return 0;
}*/

/*
2. Given an array of N non-negative integers arr[] representing an elevation map where the width of each bar is 1,
compute how much water it is able to trap after raining.
    Input: arr[] = {2, 0, 2}
    Output: 2
    Explanation: We can trap 2 units of water in the middle gap.

    Input: arr[]   = {3, 0, 2, 0, 4}
    Output: 7
    Explanation: We can trap “3 units” of water between 3 and 2,
    “1 unit” on top of bar 2 and “3 units” between 2 and 4.
*/
/*#include <stdio.h>
#define max(x, y) (((x) > (y)) ? (x) : (y))
#define min(x, y) (((x) < (y)) ? (x) : (y))
int maxWater(int arr[], int n)
{
	int res = 0;
	for (int i = 0; i < n; i++)
    {
		int left = arr[i];
		for (int j = 0; j < i; j++) {
			left = max(left, arr[j]);
		}
		int right = arr[i];
		for (int j = i + 1; j < n; j++) {
			right = max(right, arr[j]);
		}
		res = res + (min(left, right) - arr[i]);
	}
	return res;
}

int main()
{
	int arr[] = { 0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1 };
	int n = sizeof(arr) / sizeof(arr[0]);
	printf("%d", maxWater(arr, n));
	return 0;
}*/

/*
3. reverse a sentence word by word using recursion

input = i love u
output = u love i
*/
/*#include <stdio.h>
#include <string.h>

void wordrev(char str[], int start, int end)
{
    for(int i=start,j=end;i<=j;i++,j--)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    for(int i=start;i<=end;i++)
    {
        printf("!%c", str[i]);
    }
    printf("\n");
}
void process(char str[], int start, int end, int ind, int space[], int lim)
{

        printf("hey \n");
        wordrev(str, start, end);
        start = end + 1;
        if(lim == 0)
        {
            end = strlen(str)-1;
        }
        else
        {
            end = space[ind]-1;
            ind++;
        }
        if(str[start] != '\0')
            process(str, start, end, ind, space, --lim);
}
int main()
{
    int j = 0, k, inc = 0, ind = 1;
    int space[100];
    char str[] = "i love india";
    //scanf("%[^\n]s", str);
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i] == 32)
            space[inc++] = i;
    }
    space[inc] = 0;
    k = space[0]-1;
    printf("inc - %d\n", inc);
    process(str, j, k, ind, space, inc-1);
    printf("%s \n", str);
    for(int i=strlen(str)-1;i>=0;i--)
    {
        printf("%c", str[i]);
    }
}*/

/*
4. remove an non-alpha_numeric values in string then reverse it and check wheather it is a palindrome or not

input = "race , a car"
output = false

input = "hey, m.yeh"
output = true
*/

/*
5. check for a palindrome in a linked list

input = 1 2 2 1
output = true

input = 1 4 4 5 1
output = false
*/

#include <stdio.h>

struct linked_list{
    int val;
    struct linked_list *next;
};
int main()
{
    int flag = 0, num = 0;
    struct linked_list *head = 0, *newnode, *o_temp, *d_temp, *rev_ll = NULL;
    int choice = 1;
    while(choice)
    {
        num++;
        newnode = (struct linked_list*)malloc(sizeof(struct linked_list));
        printf("Enter the val : ");
        scanf("%d", &newnode->val);
        if(head == 0)
            head=o_temp=newnode;
        else
        {
            o_temp->next = newnode;
            o_temp = newnode;
        }
        printf("Did u want to create an another Linked_list block press 1");
        scanf("%d", &choice);
        o_temp->next = 0;
    }
    o_temp = head;
    newnode = 0;
    while(o_temp != 0)
    {
        newnode = (struct linked_list*)malloc(sizeof(struct linked_list));
        newnode->val = o_temp->val;
        newnode->next = rev_ll;
        rev_ll = newnode;
        o_temp = o_temp->next;
    }
    o_temp = head;
    d_temp = rev_ll;
    while(o_temp != 0)
    {
        if(o_temp->val == d_temp->val)
        {
            flag++;
        }
        else
        {
            printf("False");
            break;
        }
        if(flag == num)
        {
            printf("True");
        }
        o_temp = o_temp->next;
        d_temp = d_temp->next;
    }
    return 0;
}

/*
6. balanced bracket in an string

input = [{}]
output = true

input = [{()]}
output = false
*/

/*#include <stdio.h>
#include <string.h>

#define n 50
char stack[n];
int top = -1;

void push(char ch)
{
    if(top == n-1)
        printf("Overflow condition, The stack is filled\n");
    else
    {
        top++;
        stack[top] = ch;
    }
}

char peak()
{
    char ch;
    ch = stack[top];
    return ch;
}

void pop()
{
    if(top == -1)
        printf("Underflow condition, The stack is filled\n");
    else
    {
        top--;
    }
}

int main()
{
    char temp;
    char str[100] = "[{()}]";
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i] == '(' || str[i] == '{' || str[i] == '[')
        {
            push(str[i]);
        }
        else
        {
            temp = peak();
            if((temp == '(' && str[i] == ')') ||(temp == '[' && str[i] == ']') || (temp == '{' && str[i] == '}'))
                pop();
            else
            {
                printf("\n Unbalanced brackets \n");
                return 0;
            }
        }
    }
    if(top == -1)
        printf("\n Balanced brackets \n");
    else
        printf("\n Unbalanced brackets \n");
    return 0;
}*/




