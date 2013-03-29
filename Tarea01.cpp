#include<iostream>
#include<cstdlib>

using namespace std;


void llenar_tablero(int T[8][8])//// llena la matriz 8x8 con 0's
{
    int i, j;

    for(i=0;i<=7;i++)
    {
        for(j=0;j<=7;j++)
        {
           T[i][j]=0;
        }
    }
}

void mostrar_tablero(int T[8][8])
{
    system("cls");
    int i, j;

    for(i=0;i<=7;i++)
    {
          cout<<"        ";
          for(j=0;j<=7;j++)
          {
              cout<<"| "<<T[i][j]<<" |";
          }
          cout<<endl;
          cout<<"";
    }
    i=0;
    j=0;
}


int main()
{
    cout<<"##########################################################################"<<endl;
    cout<<"#                        Tarea nº1                                       #"<<endl;
    cout<<"#                                                                        #"<<endl;
    cout<<"#         Integrantes:    Camilo Candia Rubinstein.-                     #"<<endl;
    cout<<"#                         Madeleine Opazo Cabargas.-                     #"<<endl;
    cout<<"#                                                                        #"<<endl;
    cout<<"#                                                                        #"<<endl;
    cout<<"##########################################################################"<<endl;
    cout<<endl;

    system("pause");

    int T[8][8];
    int i=7, j=0;
    int cont=1;

    llenar_tablero(T);
    mostrar_tablero(T);
    cout<<endl;
    cout<<"Inicialmente el tablero ha sido llenado con ceros"<<endl;
    cout<<endl;
    system("pause");

    T[7][0] = 1; ////ubicación del caballo.
    T[5][5] = 8; ////En la ubicacion de los peones se guarda un 8.-
    T[5][2] = 8;
    T[2][5] = 8;
    T[2][2] = 8;

    mostrar_tablero(T);
    cout<<endl;
    cout<<"Se ha escrito un 1 en la posicion inicial del caballo"<<endl;
    cout<<"Se ha escrito un 8 en las posiciones de los peones"<<endl;
    cout<<endl;
    system("pause");

    mov1:
        if(i>=2 && j<=6)////1er movimiento posible
        {
           if(cont<=59)
           {
              if(T[i-2][j+1]==8)
              {
                 goto mov2;
              }
              else
              {
               if(T[i-2][j+1]!=1)
                  {
                     i=i-2;
                     j=j+1;
                     T[i][j]=1;
                     cont=cont+1;
                     mostrar_tablero(T);
                     goto mov1;
                     system("pause");
                  }
                  else
                  {
                     i=i+2;
                     j=j-1;
                     goto mov2;
                  }
              }
           }
           else
           { goto final;}
        }
        else
        {
            goto mov2;
            system("pause");
        }

    mov2:
        if(i>=1 && j<=5)////2do movimiento posible
        {
           if(cont<=59)
           {
              if(T[i-1][j+2]==8)
              {
                 goto mov3;
              }
              else
              {
                if(T[i-1][j+2]!=1)
                  {
                     i=i-2;
                     j=j+1;
                     T[i][j]=1;
                     cont=cont+1;
                     mostrar_tablero(T);
                     goto mov2;
                     system("pause");
                  }
                  else
                  {
                     i=i+1;
                     j=j-2;
                     goto mov3;
                  }
              }
           }
           else
           { goto final;}
        }
        else
        {
           goto mov3;
           system("pause");
        }

    mov3:
        if(i<=6 && j<=5)////3er movimiento posible
        {
            if(cont<=59)
            {
               if(T[i+1][j+2]==8)
               {
                 goto mov4;
               }
               else
               {
                if(T[i+1][j+2]!=1)
                  {
                     i=i+1;
                     j=j+2;
                     T[i][j]=1;
                     cont=cont+1;
                     mostrar_tablero(T);
                     goto mov3;
                     system("pause");
                  }
                  else
                  {
                     i=i-1;
                     j=j-2;
                     goto mov4;
                  }
               }
            }
            else
           { goto final;}
        }
        else
        {
            goto mov4;
            system("pause");
        }

    mov4:
        if(i<=5 && j<=6)////4to movimiento posible
        {
            if(cont<=59)
            {
               if(T[i+2][j+1]==8)
               {
                  goto mov5;
               }
               else
               {
                if(T[i+2][j+1]!=1)
                  {
                     i=i+2;
                     j=j+1;
                     T[i][j]=1;
                     cont=cont+1;
                     mostrar_tablero(T);
                     goto mov4;
                     system("pause");
                  }
                  else
                  {
                     i=i-2;
                     j=j-1;
                     goto mov4;
                  }
               }
            }
            else
           { goto final;}
        }
        else
        {
           goto mov5;
           system("pause");
        }

   mov5:
        if(i<=5 && j>=1)////5to movimiento posible
        {
            if(cont<=59)
            {
               if(T[i+2][j-1]==8)
               {
                  goto mov6;
               }
               else
               {
                if(T[i+2][j-1]!=1)
                  {
                     i=i+2;
                     j=j-1;
                     T[i][j]=1;
                     cont=cont+1;
                     mostrar_tablero(T);
                     goto mov5;
                     system("pause");
                  }
                  else
                  {
                     i=i-2;
                     j=j+1;
                     goto mov6;
                  }
               }
            }
            else
           { goto final;}
        }
        else
        {
           goto mov6;
           system("pause");
        }


   mov6:
        if(i>=2 && j>=1)////6to movimiento posible
        {
            if(cont<=59)
            {
               if(T[i-2][j-1]==8)
               {
                  goto mov1;
               }
               else
               {
                  if(T[i-2][j-1]!=1)
                  {
                     i=i-2;
                     j=j-1;
                     T[i][j]=1;
                     cont=cont+1;
                     mostrar_tablero(T);
                     goto mov6;
                     system("pause");
                  }
                  else
                  {
                     i=i+2;
                     j=j+1;
                     goto mov1;
                  }
               }
            }
            else
           { goto final;}
        }
        else
        {
           goto mov1;
           system("pause");
        }


  final:
        cout<<"se ha cumplido el objetivo"<<endl;

    system("pause");
}
