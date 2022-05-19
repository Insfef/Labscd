#include "0_hdr.h"

void prnt_once(list* temp)
{
	printf("----------------------------------------------------------------------------------------------\n");
	printf("|------------------------------------ �����-���� --------------------------------------------|\n");
	printf("|--------------------------------------------------------------------------------------------|\n");
	printf("| � | ������������ ������ | ��� ������ | ���� �� 1 �� (���) |����������� ���������� � ������ |\n");
	printf("|---|---------------------|------------|------------------- |--------------------------------|\n");
	printf("| %-2d| %-19s | %-10c | %-18.2f | %-30d |\n",
		temp->nep.num, temp->nep.name, temp->nep.type, temp->nep.price, temp->nep.mink);
	printf("|--------------------------------------------------------------------------------------------|\n");
	printf("|----------------------- ����������: � - ����������; � - ����������; ------------------------|\n");
	printf("----------------------------------------------------------------------------------------------\n");
}

void prnt_up()
{

	printf("----------------------------------------------------------------------------------------------\n");
	printf("|------------------------------------ �����-���� --------------------------------------------|\n");
	printf("|--------------------------------------------------------------------------------------------|\n");
	printf("| � | ������������ ������ | ��� ������ | ���� �� 1 �� (���) |����������� ���������� � ������ |\n");
	printf("|---|---------------------|------------|------------------- |--------------------------------|\n");
}

void prnt_down()
{
	printf("|--------------------------------------------------------------------------------------------|\n");
	printf("|----------------------- ����������: � - ����������; � - ����������; ------------------------|\n");
	printf("----------------------------------------------------------------------------------------------\n");
}

int compa(const char* s1, const char* s2)
{
	unsigned char uc1, uc2;
	while (*s1 != '\0' && *s1 == *s2) {
		s1++;
		s2++;
	}
	uc1 = (*(unsigned char*)s1);
	uc2 = (*(unsigned char*)s2);
	return ((uc1 < uc2) ? -1 : (uc1 > uc2));
}