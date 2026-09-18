#include <stdio.h>

typedef struct {
    int h;
    int m;
    int s;
} time;

void display(time t)
{
    printf("%02d:%02d:%02d", t.h, t.m, t.s);
}

time add_time(time tf, time ts)
{
    time result;

    result.h = tf.h + ts.h;
    result.m = tf.m + ts.m;
    result.s = tf.s + ts.s;

    if (result.s >= 60)
    {
        result.m += result.s / 60;
        result.s %= 60;
    }

    if (result.m >= 60)
    {
        result.h += result.m / 60;
        result.m %= 60;
    }

    return result;
}

time sub_time(time tf, time ts)
{
    time result;

    if (tf.h < ts.h ||
        (tf.h == ts.h && tf.m < ts.m) ||
        (tf.h == ts.h && tf.m == ts.m && tf.s < ts.s))
    {
        time temp = tf;
        tf = ts;
        ts = temp;
    }

    if (tf.s < ts.s)
    {
        tf.s += 60;
        tf.m--;
    }

    if (tf.m < ts.m)
    {
        tf.m += 60;
        tf.h--;
    }

    result.s = tf.s - ts.s;
    result.m = tf.m - ts.m;
    result.h = tf.h - ts.h;

    return result;
}

int main()
{
    time t1, t2, t3, t4;

    printf("Enter the first time in hours, minutes and seconds: ");
    scanf("%d %d %d", &t1.h, &t1.m, &t1.s);

    printf("Enter the second time in hours, minutes and seconds: ");
    scanf("%d %d %d", &t2.h, &t2.m, &t2.s);

    t3 = add_time(t1, t2);
    t4 = sub_time(t1, t2);

    printf("\nFirst Time: ");
    display(t1);

    printf("\nSecond Time: ");
    display(t2);

    printf("\nAddition: ");
    display(t3);

    printf("\nSubtraction: ");
    display(t4);

    return 0;
}
