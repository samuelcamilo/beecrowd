using System;

namespace _1848
{
    class Program
    {
        static void Main(string[] args)
        {
            string entrada;
            int somatorio = 0;
            int contador = 0;

            do
            {   
                entrada = Console.ReadLine().Trim();
                if(!entrada.Equals("caw caw"))
                {
                    if(entrada.Equals("--*"))
                        somatorio += 1;
                    else if(entrada.Equals("-**"))
                        somatorio += 3;
                    else if(entrada.Equals("***"))
                        somatorio += 7;
                    else if(entrada.Equals("**-"))
                        somatorio += 6;
                    else if(entrada.Equals("*--"))
                        somatorio += 4;
                    else if(entrada.Equals("-*-"))
                        somatorio += 2;
                    else if(entrada.Equals("*-*"))
                        somatorio += 5;
                }else{
                    Console.Write("{0}\n", somatorio);
                    somatorio = 0;
                    contador++;
                }
            }while(contador < 3);

        }
    }
}