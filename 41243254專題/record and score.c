#include "area.h"
int record(int score)
{
	int RE;
	FILE* pfile; // 宣告指向檔案的結構指標

	if ((pfile = fopen("record.txt", "r")) == NULL)
	{
		printf("record.txt 檔案無法開啟");
		system("pause");
		return 0;
	}

	fscanf(pfile, "%d", &RE);

	fclose(pfile); // 關閉檔案

	if (score > RE)
	{
		if ((pfile = fopen("record.txt", "w")) == NULL)
		{
			printf("record.txt 檔案無法開啟");
			system("pause");
			return 0;
		}
		fprintf(pfile, "%d", score);
		fclose(pfile); // 關閉檔案
	}
	return RE;
}
void Score(int* score)
{
	static int total = 0;
	total += *score;
	*score = total;
}