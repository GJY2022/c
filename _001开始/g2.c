int f2(void)
{
    int a[10] = { 0 };
    int max = 10;
    int min = 0;
    int x = 0;
    int b = 0;
    while(1)
    {
        printf("请输入\n");
        scanf("%d", &x);
        printf("输入的值为%d\n", x);
        switch (x)
        {
        case 1:
            if(min>=10)
            {
                printf("数组已满，无法再存入\n");
            }
            else
            {
                scanf("%d", &b);
                a[min] = b;
                min++;
            }
            break;
        case 2:
            printf("-------------------------\n");
            printf("已存入数组的值\n");
            for(int i=0;i<min;i++)
            {
                printf("%d\t\n", a[i]);
            }
            printf("-------------------------\n");
            break;
        default:
            return 0;
        }
    }
}