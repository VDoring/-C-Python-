#include <stdio.h>
int main()
{
	printf("__HDR's 학점처리 프로그램!__\n");
	char name;
	int sum, avg, korean, english, math; //선언

	printf("당신의 이름을 입력해주세요 -> "); 
	scanf("%c", &name); //이름입력

	printf("\n당신의 국어점수는? = "); //점수 물어좀
	scanf("%d", &korean);
	printf("\n당신의 영어점수는? = ");
	scanf("%d", &english);
	printf("\n당신의 수학점수는? = ");
	scanf("%d", &math);

	printf("%c님의 총점은 %d점 입니다.", name, sum);
	printf("%c님의 평균은 %d점입니다.", name, avg);

	if (avg >= 90) {
		printf("당신의 학점은 A입니다. 축하드립니다!");
	}
	else if (avg >= 80) {
		printf("당신의 학점은 B입니다.");
	}
	else if (avg >= 70) {
		printf("당신의 학점은 C입니다.");
	}
	else if (avg >= 60) {
		printf("당신의 학점은 D입니다. 아쉽네요 -_-;");
	}
	else
		printf("다시 입력해주세요");
}