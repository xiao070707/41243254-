#include "area.h"
int record(int score)
{
	int RE;
	FILE* pfile; // �ŧi���V�ɮת����c����

	if ((pfile = fopen("record.txt", "r")) == NULL)
	{
		printf("record.txt �ɮ׵L�k�}��");
		system("pause");
		return 0;
	}

	fscanf(pfile, "%d", &RE);

	fclose(pfile); // �����ɮ�

	if (score > RE)
	{
		if ((pfile = fopen("record.txt", "w")) == NULL)
		{
			printf("record.txt �ɮ׵L�k�}��");
			system("pause");
			return 0;
		}
		fprintf(pfile, "%d", score);
		fclose(pfile); // �����ɮ�
	}
	return RE;
}
void Score(int* score)
{
	static int total = 0;
	total += *score;
	*score = total;
}