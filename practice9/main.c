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
    //�ж��ַ���1��ת���ܷ�õ��ַ���2
    //����1���������
    /*char arr1[] = "abcdef";
    char arr2[] = "bcdefa";

    int ret = is_left_move(arr1,arr2);
    if(ret == 1)
        printf("ok\n");
    else
        printf("no\n");*/
    //����2�����ÿ⺯������׷������
    /*char arr1[20] = "abcdef";
    char arr2[] = "bcdefa";

    int ret = is_left_move(arr1,arr2);
    if(ret == 1)
        printf("ok\n");
    else
        printf("no\n");*/
    //����ת��(����������л���,n��m��->m��n��)
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
    //���

    for (i = 0;i < m;i++)
    {
        for (j = 0;j < n;j++)
        {
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }*/
    //�����Ǿ����ж�(���������Խ������½�Ԫ��ȫΪ0)
    /*int n = 0;
    scanf("%d",&n);
    int arr[n][n];
    int i = 0;
    int j = 0;
    int flag = 1; //�������Ǿ���
    for(i = 0;i < n;i++)
    {
        for(j = 0;j < n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    //�ж�
    for(i = 0;i < n;i++)
    {
        for(j = 0;j < i;j++)  //j < n��Ϊj < i,���ٱ�������
        {
            if(arr[i][j] != 0)
            {
                flag = 0;  //���������Ǿ���
                goto end;
            }
        }
    }

    end:

    if(flag == 0)
        printf("no\n");
    else
        printf("yes\n");*/
    //�ж��Ƿ�Ϊ��������
    /*int n = 0;
    scanf("%d",&n);
    int i = 0;
    int arr[n];
    int flag1 = 0; //����
    int flag2 = 0; //����
    //���Ϊ������򣬶���֮��Ϊһ,����ȫ�����������ߺ�Ϊ0
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
