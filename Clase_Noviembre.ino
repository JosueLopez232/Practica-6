float Numeros[7]={0.00,0.00,0.00,0.00,0.00,0.00,0.00};
float D[7]={0.00,0.00,0.00,0.00,0.00,0.00,0.00};
int x=7;
int y=6;
float tem=0.0;

void setup() {
  pinMode(A0,INPUT);
  Serial.begin(9600);
}

int A=0;
float T=0.00;
float t=0.00;

void loop() {
  T=0.00;
  t=0.00;
  A=analogRead(A0);
  D[6]=D[5];
  D[5]=D[4];
  D[4]=D[3];
  D[3]=D[2];
  D[2]=D[1];
  D[1]=D[0];
  D[0]=A;

  Numeros[6]=D[6];
  Numeros[5]=D[5];
  Numeros[4]=D[4];
  Numeros [3]=D[3];
  Numeros [2]=D[2];
  Numeros [1]=D[1];
  Numeros [0]=D[0];

  //esto solo acomoda los valores de menor a mayor
  for(int j=0;j<x;j++)
  {
    for(int i=0;i<y;i++)
    {
      if(  Numeros [i+1]>  Numeros [i])
      {
        tem= Numeros [i];
        Numeros[i]=Numeros[i+1];
          Numeros [i+1]=tem;
      }
    }
  }
  T=  Numeros [3];
  Serial.println(T);
      
}
