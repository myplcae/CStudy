//
// Created by HUAWEI on 2023/5/11.
//

#include <stdio.h>

// �����ⶨ����� x �� y
int x;
int y;
int addtwonum()
{
    // �������������� x �� y Ϊ�ⲿ����
    extern int x;
    extern int y;
    // ���ⲿ������ȫ�ֱ�����x �� y ��ֵ
    x = 1;
    y = 2;
    return x+y;
}

int main()
{
    int result;
    // ���ú��� addtwonum
    result = addtwonum();

    printf("result Ϊ: %d",result);
    return 0;
}
