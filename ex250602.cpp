#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	char* history[1000] = { 0 };
	int history_count = 0;
	char buf[1000];
	while (1) {
		printf("> ");
		gets_s(buf, 1000);
		char* t = (char*)malloc(strlen(buf) + 1);
		strcpy(t, buf);
		if (!strcmp(buf, "exit")) {
			break;
		}
		else if (!strcmp(buf, "history")) {
			printf("[ History ]\n");
			for (int i = 0; i < history_count; ++i) {
				printf("[%d] %s\n", i, history[i]);
			}
		}
		history[history_count++] = t;
	}
	for (int i = 0; i < history_count; ++i) {
		free(history[i]);
	}
}

//#include <stdio.h>
//int main() {
//	char* s1 = NULL;
//	const char* s2 = NULL;
//
//	char buf[10] = "ABC";
//
//	s1 = buf;
//	s2 = buf;
//
//	s1[0] = 'Z';
//	//s2[0] = 'Z'; // 에러: const 포인터는 가리키는 값을 변경할 수 없음
//}

//#include <stdio.h>
//int main() {
//	char* s1 = NULL;
//	const char* s2 = NULL;
//
//	char c = 'A';
//
//	s1 = &c;
//	s2 = &c;
//
//	*s1 = 'Z';
//	//*s2 = 'Z'; // 에러: const로 선언되면 가리키는 값을 변경할 수 없음
//	printf("%c %c %c", *s1, *s2, c);
//}

//#include <stdio.h>
//int main() {
//	char s1[10] = "ABC";
//	const char* s2 = "DEF";
//	printf("%s %s", s1, s2); // 글로벌 스태틱 리터럴 -> GD
//}

//#include <stdio.h>
//#include <stdlib.h>
//struct Point {
//	int x;
//	int y;
//};
//int main() {
//	Point pt = { 1, 3 };
//	Point pt2 = { 4, 5 };
//	
//	Point* p = &pt;
//
//	printf("( %d, %d )\n", p->x, p->y);
//	printf("( %d, %d )\n", pt.x, pt.y);
//}

//#include <stdio.h>
//#include <stdlib.h>
//struct Point {
//	int x;
//	int y;
//};
//void PrintPoint(Point* pt) {
//	printf("( x: %d, y: %d )\n", pt->x, pt->y);
//}
//void SetPoint(Point* pt, int x, int y) {
//	pt->x = x;
//	pt->y = y;
//}
//void ResetPoint(Point* pt) {
//	pt->x = pt->y = 0;
//}
//int main() {
//	Point pt = { 1, 3 };
//	PrintPoint(&pt);
//	SetPoint(&pt, 4, 5);
//	PrintPoint(&pt);
//	ResetPoint(&pt);
//	PrintPoint(&pt);
//}

//#include <stdio.h>
//#include <stdlib.h>
//struct Point {
//	int x;
//	int y;
//};
//void PrintPoint(Point* pt) {
//	printf("( x: %d, y: %d )\n", pt->x, pt->y);
//}
//int main() {
//	Point pt = { 1, 3 };
//	PrintPoint(&pt);
//}
