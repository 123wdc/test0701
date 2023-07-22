//#include<easyx.h>
//#include<graphics.h>
//#include <conio.h>
//#include<stdio.h>
//#include<mmsystem.h>
//#pragma comment(lib,"winmm.lib")
//
//void BGM()
//{
//	mciSendString("open ? alias BGM", 0, 0, 0);
//	mciSendString("play BGM", 0, 0, 0);
//}
//
//void Button(int x, int y, int w, int h, const char* text)
//{
//	setfillcolor(BLUE);
//	fillrectangle(x, y, x + w, y + h);
//
//	settextcolor(RED);
//	settextstyle(30, 0, "宋体");
//	char arr[50];
//	strcpy_s(arr, text);
//
//	int textW = x + (w - textwidth(arr)) / 2;
//	int textH = y + (h - textheight(arr)) / 2;
//
//	outtextxy(textW, textH, arr);
//}
//
//void change()
//{
//	HWND hwnd = GetHWnd();
//	SetWindowText(hwnd, "艾雅法拉");
//	int choose = MessageBox(hwnd, "内容：喜欢小羊", "标题：dodo", MB_OKCANCEL);
//}
//
//int main()
//{
//	initgraph(1280, 800, EW_SHOWCONSOLE);
//	change();
//	BGM();
//	initgraph(1280, 720);
//	setbkcolor(WHITE);
//	cleardevice();
//	setbkmode(TRANSPARENT);//背景透明，不遮挡文字
//	setfillcolor(YELLOW);
//	setlinecolor(BLUE);
//	setlinestyle(PS_DASH, 10);
//
//	circle(50, 50, 50);
//	fillcircle(50, 150, 50);
//	solidcircle(50, 250, 50);
//
//	settextstyle(20, 0, "仿宋");
//	settextcolor(RGB(118, 133, 58));
//	outtextxy(50, 50, "你好啊");
//
//	settextcolor(RED);
//	outtextxy(50, 150, "hello");
//
//	fillrectangle(200, 50, 500, 100);
//	settextcolor(BLUE);
//	setfillcolor(GREEN);
//
//	char arr[] = "nihao";
//	int width = 300 / 2 - textwidth(arr) / 2;
//	int height = 50 / 2 - textheight(arr) / 2;
//
//	settextstyle(30, 0, "黑体");
//	outtextxy(width + 200, height + 50, arr);
//
//	IMAGE img;
//	loadimage(&img, "C:\\Users\\wdc\\Desktop\\aa.jpg");
//	putimage(0, 0, &img);
//
//	/*Button(50, 50, 150, 50, "按钮");
//
//	ExMessage msg;
//	if (peekmessage(&msg, EM_MOUSE))
//	{
//		switch (msg.message)
//		{
//		case WM_LBUTTONDOWN:
//			if (msg.x > 50 && msg.x < 200 && msg.y>50 && msg.y < 100)
//			{
//				printf("左键点了一下");
//			}
//			break;
//		case WM_RBUTTONDOWN:
//			if (msg.x > 50 && msg.x < 200 && msg.y>50 && msg.y < 100)
//			{
//				printf("右键点了一下");
//			}
//			break;
//		default:
//			break;
//		}
//	}*/
//	BeginBatchDraw();
//	int x = 0, y = 0;
//	while (1)
//	{
//		setbkcolor(WHITE);
//		cleardevice();
//
//		IMAGE img;
//		loadimage(&img, "C:\\Users\\wdc\\Desktop\\aa.jpg");
//		putimage(0, 0, &img);
//
//		setfillcolor(BROWN);
//		fillcircle(x, y, 50);
//
//		FlushBatchDraw();
//
//		if (GetAsyncKeyState(VK_UP))//向上
//		{
//			y -= 5;
//		}
//		if (GetAsyncKeyState(VK_DOWN))//向下
//		{
//			y += 5;
//		}
//		if (GetAsyncKeyState(VK_LEFT))//向左
//		{
//			x -= 5;
//		}
//		if (GetAsyncKeyState(VK_RIGHT))//向右
//		{
//			x += 5;
//		}
//		if (_kbhit())
//		{
//			char key = _getch();
//			printf("%d,%c\n", key, key);
//			switch (key)
//			{
//			case 72://上键
//			case 'w':
//			case 'W':
//				y -= 5;
//				printf("向上\n");
//				break;
//			case 80:
//			case's':
//			case'S':
//				y += 5;
//				printf("向下\n");
//				break;
//			case 75:
//			case'a':
//			case'A':
//				x -= 5;
//				printf("向左\n");
//				break;
//			case 77:
//			case 'd':
//			case'D':
//				x += 5;
//				printf("向右\n");
//				break;
//			}
//		}
//	}
//	EndBatchDraw();
//	_getch();
//
//	closegraph();
//	return 0;
//}

#include<stdio.h>
#include<iostream>
using namespace std;

struct book {
	int price;
	book* next;
};

//void CreatList(book*& B, int n) {
//	book* p = NULL;
//	B = (book*)malloc(sizeof(book));
//	B->next = NULL;
//	printf("%d number:", n);
//	for (int i = n; i > 0; --i) {
//		p = (book*)malloc(sizeof(book));
//		scanf_s("%d", &p->price);
//		p->next = B->next;
//		B->next = p;
//	}
//}//单链表

	//void CreatList(book*& B, int n) {
	//	book* p = NULL;
	//	book* temp = NULL;
	//	B = (book*)malloc(sizeof(book));
	//	B->next = NULL;
	//	printf("%d number:", n);
	//	for (int i = n; i > 0; --i) {
	//		p = (book*)malloc(sizeof(book));
	//		scanf_s("%d", &p->price);
	//		if (i == n) {
	//			temp = p;
	//		}
	//		p->next = B->next;
	//		B->next = p;
	//	}
	//	temp->next = B->next;
	//}
	//循环链表

//bool Insert(book*& B, int i, int value) {
//	//在带头结点的单链线性表中的第i个位置之前插入元素value（循环链表和单向链表）
//	book* p = NULL; p = B;
//	int j = 0;
//	while (p != NULL && j < i - 1) {//寻找第i-1个结点
//		p = p->next;
//		++j;
//	}
//	if (p == NULL || j > i - 1) {//不能让i < 1且 i >（表长+1）,循环链表不能插入表头
//		return false;
//	}
//	book* s = NULL;
//	s = (book*)malloc(sizeof(book));
//	s->price = value;
//	s->next = p->next;
//	p->next = s;
//	return true;
//}
//
//bool Remove(book*& B, int i, int& e) {
//	//在带头结点的单链线性表，删除第i个元素，并由e返回其值
//	book* p = NULL; p = B;
//	int j = 0;
//	while (p->next != NULL && j < i - 1) {//找到第i个结点
//		p = p->next;
//		++j;
//	}
//	if (p->next == NULL || j > i - 1) {
//		return false;
//	}
//	book* q = NULL; q = (book*)malloc(sizeof(book));
//	q = p->next; p->next = q->next;
//	e = q->price;
//	free(q);
//	return true;
//}

//struct stack {
//	int* base;
//	int* top;
//	int stacksize;
//};
//#define STACK_INIT_SIZE 100
//#define STACKINCREMENT 10
//
//void InitStack(stack& S) {
//	//构造一个空栈
//	S.base = (int*)malloc(STACK_INIT_SIZE * sizeof(int));
//	if (S.base == NULL) {
//		exit(0);//存储分配失败
//	}
//	S.top = S.base;
//	S.stacksize = STACK_INIT_SIZE;
//}
//
//void Push(stack& S, int e) {
//	//插入元素e作为新的栈顶元素
//	if (S.top - S.base >= S.stacksize) {
//		S.base = (int*)realloc(S.base, (S.stacksize + STACKINCREMENT) * sizeof(int));//变S.base;
//		if (S.base == NULL) {
//			exit(0);
//		}
//		S.top = S.base + S.stacksize;//变S.top
//		S.stacksize = S.stacksize + STACK_INIT_SIZE;//变S.stacksize
//	}
//	*(S.top) = e;
//	S.top++;
//	//*S.top++ = e;
//}
//
//bool Pop(stack& S, int& e) {
//	//若栈不空，则删除S的栈顶元素，用e返回其值
//	if (S.base == S.top) {
//		return false;
//	}
//	S.top--;
//	e = *(S.top);
//	//e = *--S.top;
//	return true;
//}
//
//bool Pop(stack& S) {
//	//若栈不空，则删除S的栈顶元素
//	if (S.base == S.top) {
//		return false;
//	}
//	S.top--;
//	//e = *(S.top);
//	//e = *--S.top;
//	return true;
//}
//
//bool GetTop(stack& S, int& e) {
//	//若栈不空。则用e返回S的栈顶元素
//	if (S.top == S.base) {
//		return false;
//	}
//	e = *(S.top - 1);
//	return true;
//}
//bool StackEmpty(stack& S) {
//	if (S.base == S.top)return true;
//	else return false;
//}
//
//void ClearStack(stack& S, int& n) {
//	//清空栈，将数据放在n上调出
//	while (!StackEmpty(S)) {
//		n = 0;
//		Pop(S, n);
//	}
//}
//void DestoryStack(stack& S) {
//	//销毁栈
//	if (S.base != NULL) {
//		delete S.base;
//		S.base = S.top = NULL;
//		S.stacksize = 0;
//	}
//}
//
//void conversion(stack& S) {
//	InitStack(S);
//	int n1 = 1348;
//	//scanf_s("%d", &n1);
//	while (n1) {
//		Push(S, n1 % 8);
//		n1 = n1 / 8;
//	}
//	while (!StackEmpty(S)) {
//		int value = 0;
//		Pop(S, value);
//		printf("%d", value);
//	}
//}
//
//void check(stack& S, int n) {
//	InitStack(S);
//	int tem = 0;
//	if (StackEmpty(S)) {
//		Push(S, n);
//	}
//	else {
//		GetTop(S, tem);
//		if (tem == n) {
//			Pop(S);
//		}
//		else {
//			Push(S, n);
//		}
//	}
//}
//
//struct BookQueue
//{
//	book* front;//队头指针
//	book* rear;//队尾指针
//};
//
//void InitQueue(BookQueue& B) {
//	B.front = B.rear = (book*)malloc(sizeof(book));
//	if (B.front == NULL) {
//		exit(0);
//	}
//	B.front->next = NULL;
//}
//
//void DestoryQueue(BookQueue& B) {
//	while (B.front)
//		B.rear = B.front->next;
//	free(B.front);
//	B.front = B.rear;
//}
//
//void EnQueue(BookQueue& B, int e) {
//	book* p = (book*)malloc(sizeof(book));
//	if (p == NULL) {
//		exit(0);
//	}
//	p->price = e; p->next = NULL;
//	B.rear->next = p;
//	B.rear = p;
//}
//
//bool DeQueue(BookQueue& B, int& e) {
//	if (B.front == B.rear) { return false; }
//	book* p = B.front->next;
//	e = p->price;
//	B.front->next = p->next;
//	if (p == B.rear) { B.front = B.rear; }
//	free(p);
//	return true;
//}
//
//void ClearQueue(BookQueue& B) {
//	while (B.front != B.rear)
//	{
//		book* p = B.front->next;
//		//e = p->price;
//		B.front->next = p->next;
//		if (p == B.rear) { B.front = B.rear; }
//		free(p);
//	}
//}
//
//bool QueueEmpty(BookQueue& B) {
//	if (B.front == B.rear) {
//		return true;
//	}
//	else {
//		return false;
//	}
//}
//
//void GetHead(BookQueue& B, int& e) {
//	e = B.front->next->price;
//}

inline int read() {
	char c = getchar(); int x = 0, f = 1;
	while (c < '0' || c > '9') { if (c == '-') f = -1; c = getchar(); }
	while (c >= '0' && c <= '9') x = x * 10 + c - '0', c = getchar();
	return x * f;
}//输入大数据必备
#include<iostream>

using namespace std;

int main()
{
	return 0;
}

//int main()
//{
//	char data[100];
//	ofstream outfile;
//	outfile.open("D:\\Test_txt\\tem.txt");
//	cin.getline(data, 100);
//	outfile << data << endl;
//	outfile.close();
//	return 0;
//}

//int main()
//{
	//book* bookList;
	//int n;
	//printf("number n:");
	//scanf_s("%d", &n);
	//CreatList(bookList, n);//数据从后往前输入

	//Insert(bookList, 1, 114514);
	//int value = 0;
	//Remove(bookList, 3, value);
	//printf("删除了%d\n", value);

	//book* head = bookList;
	//while (head->next != NULL)
	//{
	//	printf("%d ", head->next->price);
	//	head = head->next;
	//}//单链表

	//book* head = bookList;
	//do {
	//	printf("%d ", head->next->price);
	//	head = head->next;
	//} while (head->next != bookList->next);//循环链表
	//return 0;
//}