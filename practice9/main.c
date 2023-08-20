#include <stdio.h>
#include <string.h>

/*int is_left_move(char arr1[],char arr2[])
{
    int len = strlen(arr1);
    int i = 0;
    for(i = 0;i < len;i++)
    {
        char tmp = arr1[0];
        int j = 0;
        for(j = 0;j < len - 1;j++)
        {
            arr1[j] = arr1[j + 1];
        }
        arr1[len - 1] = tmp;
        if(strcmp(arr1,arr2) == 0)
            return 1;
    }
    return 0;
}*/

/*int is_left_move(char arr1[],char arr2[])
{
    int len = strlen(arr1);
    int len2 = strlen(arr2);
    if(len != len2)
        return 0;
    strncat(arr1,arr1,len);
    char* ret = strstr(arr1,arr2);
    if(ret == NULL)
        return 0;
    else
        return 1;
}*/

int main()
{
    //判断字符串1旋转后能否得到字符串2
    //方法1，遍历穷举
    /*char arr1[] = "abcdef";
    char arr2[] = "bcdefa";

    int ret = is_left_move(arr1,arr2);
    if(ret == 1)
        printf("ok\n");
    else
        printf("no\n");*/
    //方法2，利用库函数，先追加自身
    /*char arr1[20] = "abcdef";
    char arr2[] = "bcdefa";

    int ret = is_left_move(arr1,arr2);
    if(ret == 1)
        printf("ok\n");
    else
        printf("no\n");*/
    //矩阵转置(将矩阵的行列互换,n行m列->m行n列)
    /*int n = 0;
    int m = 0;
    scanf("%d %d",&n,&m);
    int i = 0;
    int j = 0;
    int arr[n][m];
    for(i = 0;i < n;i++)
    {
        for(j = 0;j < m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    //输出

    for (i = 0;i < m;i++)
    {
        for (j = 0;j < n;j++)
        {
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }*/
    //上三角矩阵判断(即矩阵主对角线左下角元素全为0)
    /*int n = 0;
    scanf("%d",&n);
    int arr[n][n];
    int i = 0;
    int j = 0;
    int flag = 1; //是上三角矩阵
    for(i = 0;i < n;i++)
    {
        for(j = 0;j < n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    //判断
    for(i = 0;i < n;i++)
    {
        for(j = 0;j < i;j++)  //j < n改为j < i,减少遍历次数
        {
            if(arr[i][j] != 0)
            {
                flag = 0;  //不是上三角矩阵
                goto end;
            }
        }
    }

    end:

    if(flag == 0)
        printf("no\n");
    else
        printf("yes\n");*/
    //判断是否为有序序列
    /*int n = 0;
    scanf("%d",&n);
    int i = 0;
    int arr[n];
    int flag1 = 0; //升序
    int flag2 = 0; //降序
    //如果为升序或降序，二者之和为一,考虑全相等情况，二者和为0
    for(i = 0;i < n;i++)
    {
        scanf("%d",&arr[i]);
        if(i > 0)
        {
            if(arr[i] > arr[i -1])
                flag1 = 1;
            else if(arr[i] < arr[i -1])
                flag2 = 1;
            else
                ;
        }
    }
    if(flag2 + flag1 <= 1)
        printf("sorted\n");
    else
        printf("unsorted\n");*/


    

    return 0;
}
