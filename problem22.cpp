#include <stdio.h>
#include <math.h>

int main()
{
    int num, end;
    printf("Enter the starting table: ");
    scanf("%d", &num);

    printf("Enter the end table: ");
    scanf("%d", &end);
    if(num<=6)
    {
    	for (int i = num; i <= end; i++)
    {
        int ans2 = 6 * i + 1;
        int ans1 = 6 * i - 1;

        if ((ans1 % 5 != 0) && (ans1 <= 37))
        {
            printf("%d\n", ans1);
        }

        if ((ans2 % 5 != 0) && (ans2 <= 37))
        {
            printf("%d\n", ans2);
        }
    }
    	
	}
    if (end > 6)
    {
        for (int i = num; i <= end -6; i++)
        {
            int ans3 = pow(i, 2) + i + 41;
            printf("%d\n", ans3);
        }
    }
    return 0;
}