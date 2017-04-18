#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/* ������ �ணࠬ��, ����� ����訢��� ��� ���짮��⥫� � ��⥬ �뢮��� ���� �㪢� ����� (��� ����) � 䠬����
 * � ���孥� ॣ���� ��� �஡����, �祪 � ���� ������, ⮫쪮 � ��ॢ���� ��ப� (\n). �।��������, ��
 * ���짮��⥫� ������ �᪫��⥫쭮 �㪢� (� ������ ��� ���孥� ॣ����, ��� ����� �ࠧ�) ���� �� ������ �஡���
 * ����� ᫮����. ��⠩�, �� ॡ�� � ������� Joseph Gordon-Levitt, Conan O?Brien ��� David J. Malan �� ����
 * ���짮������ �ணࠬ���. */

int main () {
    int i;
    char c;

    printf("Enter Name and Famaly: \n");

    for (i = 0; i < (c = getchar()); i++)
        {
            if (c == ' ')
            {
                i = -1;
            }
            if(i == 0)
            {
                c = toupper(c);
                printf("%c", c);
            }
            if(c == '\n')
            {
                exit(0);
            }
        }
    printf("\n");
    return 0;
}


