#include <stdio.h>
#define N 5
int deque[N];
int f = -1, r = -1;
void enqueuefront(int x)
{
    if ((f == 0 && r == N - 1) || (f == r + 1))
    {
        printf("deque is full\n");
    }
    else if (f == -1 && r == -1)
    {
        f = r = 0;
        deque[f] = x;
    }
    else if (f == 0)
    {
        f = N - 1;
        deque[f] = x;
    }
    else
    {
        f--;
        deque[f] = x;
    }
}
void enqueuerear(int y)
{
    if ((f == 0 && r == N - 1) || (f == r + 1))
    {
        printf("queue is full\n");
    }
    else if (f == -1 && r == -1)
    {
        f = r = 0;
        deque[r] = y;
    }
    else if (r = N - 1)
    {
        r = 0;
        deque[r] = y;
    }
    else
    {
        r++;
        deque[r] = y;
    }
}
void display()
{
    int i = f;
    while (i != r)
    {
        printf(" %d ", deque[i]);
        i = (i + 1) % N;
    }
    printf(" %d ", deque[r]);
}
void getfront()
{
    if (r == -1 && f == -1)
    {
        printf("queue is full\n");
    }
    else
    {
        printf(" %d ", deque[f]);
    }
}
void getrear()
{
    if (f == -1 && r == -1)
    {
        printf("queue is empty\n");
    }
    else
    {
        printf(" %d ", deque[r]);
    }
}
void dequeuefront()
{
    if (f == -1 && r == -1)
    {
        printf("queue is empty\n");
    }
    else if (f == r)
    {
        f = r = -1;
    }
    else if (f == N - 1)
    {
        printf(" %d ", deque[f]);
        f = 0;
    }
    else
    {
        printf(" %d ", deque[f]);
        f++;
    }
}
void dequeuerear()
{
    if (f == -1 && r == -1)
    {
        printf("queue is empty\n");
    }
    else if (f == r)
    {
        f = r = -1;
    }
    else if (r == 0)
    {
        r = N - 1;
    }
    else
    {
        printf(" %d ", deque[r]);
        r--;
    }
}
void main()
{
    enqueuefront(2);
    enqueuefront(5);
    enqueuerear(-1);
    enqueuerear(64);
    enqueuefront(74);
    enqueuefront(25);
    display();
    dequeuefront();
    dequeuefront();
    dequeuerear();
    dequeuefront();
}